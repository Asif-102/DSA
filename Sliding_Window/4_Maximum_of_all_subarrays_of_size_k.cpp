#include <bits/stdc++.h>
using namespace std;

int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, k;
    cin >> n >> k;
    vector<int> arr;
    for(int v = 0; v < n; v++){
        int x;
        cin >> x;
        arr.push_back(x);
    }
    int i = 0, j = 0;

    list<int> lst;

    while(j < n){
        // calculation
        while(!lst.empty() and lst.back() < arr[j]){
            lst.pop_back();
        }
        lst.push_back(arr[j]);

        if(j - i + 1 < k){
            j++;
        }else if(j - i + 1 == k){
            cout << lst.front() << ' ';
            if(lst.front() == arr[i]){
                lst.pop_front();
            }
            i++;
            j++;
        }
    }
    return 0;
}