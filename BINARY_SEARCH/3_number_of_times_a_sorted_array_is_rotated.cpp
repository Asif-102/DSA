#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {11, 12, 15, 18, 2, 5, 6, 8};

    int N = v.size();

    int start = 0;
    int end = N-1;

    int ans = -1;

    while(start <= end){
        int mid = start + (end-start)/2;
        
        int next = (mid+1)%N;
        int prev = (mid-1+N)%N;

        if(v[mid] <= v[next] and v[mid] <= v[prev]){
            ans = mid;
            break;
        }else if(v[mid] >= v[0]){
            start = mid+1;
        }else if(v[mid] <= v[end]){
            end = mid-1;
        }
    }

    cout << ans << '\n';

    return 0;
}