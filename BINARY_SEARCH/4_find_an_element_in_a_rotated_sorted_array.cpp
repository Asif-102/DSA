#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {11, 12, 15, 18, 2, 5, 6, 8};

    int N = v.size();

    int min_index = -1;
    
    int start = 0;
    int end = N-1;

    // find minimum index
    while(start <= end){
        int mid = start + (end-start)/2;
        
        int next = (mid+1)%N;
        int prev = (mid-1+N)%N;
        
        if(v[mid] <= v[next] and v[mid] <= v[prev]){
            min_index = mid;
            break;
        }else if(v[mid] >= v[0]){
            start = mid+1;
        }else if(v[mid] <= v[end]){
            end = mid-1;
        }
    }
    
    int find = 15;

    start = 0;
    end = min_index-1;

    while(start <= end){
        int mid = start + (end-start)/2;
        if(v[mid] == find){
            cout << mid << '\n';
            return 0;
        }else if(v[mid] > find){
            end = mid-1;
        }else{
            start = mid+1;
        }
    }

    start = min_index;
    end = N-1;

    while(start <= end){
        int mid = start + (end-start)/2;
        if(v[mid] == find){
            cout << mid << '\n';
            return 0;
        }else if(v[mid] > find){
            end = mid-1;
        }else{
            start = mid+1;
        }
    }

    cout << "-1\n";

    return 0;
}