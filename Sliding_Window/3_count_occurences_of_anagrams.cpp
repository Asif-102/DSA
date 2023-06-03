#include <bits/stdc++.h>
using namespace std;

int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    string txt = "eaylnlfdxf";
    
    string pat = "irc";
    
    int N = (int)txt.size();

    int k = (int)pat.size();

    int cnt = 0;

    int freq1[26] = {0};
    int freq2[26] = {0};

    int i = 0; // start
    int j = 0; // end

    for(int x = 0; x < (int) pat.size(); x++){
        freq1[pat[x] - 'a']++;
    }

    while(j < N){
        freq2[txt[j]-'a']++;

        if(j - i + 1 < k){
            j++;
        }else if(j - i + 1 == k){
            bool flag = true;
            for(int x = 0; x < 26; x++){
                if(freq1[x] != freq2[x]){
                    flag = false;
                    break;
                }
            }
            if(flag){
                cnt++;
            }
            freq2[txt[i] - 'a']--;
            i++;
            j++;
        }
    }

    cout << cnt << '\n';

    return 0;
}