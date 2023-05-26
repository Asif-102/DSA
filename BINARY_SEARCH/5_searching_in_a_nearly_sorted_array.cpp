#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {3, 2, 10, 4, 40};
    
    int find = 4;

    int N = v.size();
    
    int start = 0;
    int end = N-1;

    while(start <= end){
        int mid = start + (end-start)/2;

        if(v[mid] == find){
            cout << mid << '\n';
            return 0;
        }
        if(mid+1 <= end and v[mid+1] == find){
            cout << mid+1 << '\n';
            return 0;
        }
        if(mid-1 >= start and v[mid-1] == find){
            cout << mid-1 << '\n';
            return 0;
        }
        if(v[mid] > find){
            end = mid-2;
        }else{
            start = mid+2;
        }
    }
    cout << "not found\n";
    return 0;
}