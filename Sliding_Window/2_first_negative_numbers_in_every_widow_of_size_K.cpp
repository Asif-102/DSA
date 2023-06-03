#include <bits/stdc++.h>
using namespace std;

int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    vector<int> v = {-8, 2, 3, -6, 10};

    int N = v.size();

    int k = 2;

    int i = 0;  // start
    int j = 0;  // end

    queue<int> q;

    while (j < N) {
        if (v[j] < 0) {
            q.push(v[j]);
        }
        if (j - i + 1 < k){
            j++;
        }else{
            if(q.empty()){
                cout << "0 ";
            }else{
                cout << q.front() << " ";
            }
            if(v[i] < 0){
                q.pop();
            }
            i++;
            j++;
        }
    }
    return 0;
}