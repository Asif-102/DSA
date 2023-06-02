#include <bits/stdc++.h>
using namespace std;

int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    vector<int> v = {100, 200, 300, 400};
    
    int N = v.size();
    int k = 2;

    int i = 0; // start
    int j = 0; // end

    int sum = 0;

    int mx = INT_MIN;

    while(j < N){
        sum = sum + v[j];
        
        if(j - i + 1 < k){
            j++;
        }else if(j - i + 1 == k){
            
            mx = max(mx, sum);
            
            sum = sum - v[i];
            
            i++;
            j++;
        }
    }

    cout << mx << '\n';

    return 0;
}