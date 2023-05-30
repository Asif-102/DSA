#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {1, 2, 3, 4, 8, 10, 10, 12, 19};

    int N = v.size();

    int start = 0;
    int end = N-1;

    int x = 5;

    int res = -1;

    while(start <= end){
        int mid = start + (end-start)/2;

        if(v[mid] < x){
            res = v[mid];
            start = mid+1;
        }else if(v[mid] > x){
            end = mid-1;
        }
    }
    cout << res << '\n';
    return 0;
}