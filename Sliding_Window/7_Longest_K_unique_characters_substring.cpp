#include <bits/stdc++.h>
using namespace std;

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin >> s;
    int k;
    cin >> k;
    int i = 0, j = 0;
    int n = s.size();
    int ans = -1;
    int unique = 0;
    int freq[26] = {0};
    while (j < n) {
        char c = s[j];
        if (freq[c - 'a'] == 0) {
            unique++;
        }
        freq[c - 'a']++;
        if (unique > k) {
            while (unique > k) {
                char leftC = s[i];
                freq[leftC - 'a']--;
                if (freq[leftC - 'a'] == 0) {
                    unique--;
                }
                i++;
            }
        }
        if (unique == k) {
            ans = max(ans, j - i + 1);
        }
        j++;
    }
    cout << ans << '\n';
    return 0;
}