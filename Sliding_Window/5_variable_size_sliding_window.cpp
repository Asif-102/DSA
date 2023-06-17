#include <bits/stdc++.h>
using namespace std;

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int i = 0, j = 0;
    int ans = -1; 
    long long sum = 0;
    while (j < n) {
        sum += a[j];
        if (sum > k) {
            while(sum > k){
                sum -= a[i];
                i++;
            }
        }
        if (sum == k) {
            ans = max(ans, j - i + 1);
        }
        j++;
    }
    cout << ans << '\n';
    return 0;
}