#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {2, 4, 10, 10, 10, 18, 20};

    int find = 10;

    int start = 0;
    int end = v.size()-1;

    int first_occur = -1;

    while(start <= end){
        int mid = start + (end-start)/2;
        if(v[mid] == find){
            first_occur = mid;
            end = mid-1;
        }else if(v[mid] > find){
            end = mid-1;
        }else{
            start = mid+1;
        }
    }
    cout << first_occur << '\n';

    int last_occur = -1;

    start = 0;
    end = v.size()-1;

    while(start <= end){
        int mid = start + (end-start)/2;
        if(v[mid] == find){
            last_occur = mid;
            start = mid+1;
        }else if(v[mid] > find){
            end = mid-1;
        }else{
            start = mid+1;
        }
    }
    cout << last_occur << '\n';
    return 0;
}