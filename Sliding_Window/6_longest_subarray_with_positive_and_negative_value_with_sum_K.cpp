#include <bits/stdc++.h>
using namespace std;

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, k;
    cin >> n >> k;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    unordered_map<int, int> ump;
    int sum = 0;
    int ans = 0;
    for(int i = 0; i < n; i++){
        sum += a[i];
        if(sum == k){
            ans = max(ans, i+1);
        }
        // if found required value
        if(ump.find(sum-k) != ump.end()){
            int found_idx = ump[sum-k];
            ans = max(ans, i-found_idx);
        }
        // if not found sum value then insert in map
        if(ump.find(sum) == ump.end()){
            ump[sum] = i;
        }
    }
    cout << ans << '\n';
    return 0;
}