#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<char> v = {'a', 'b', 'c', 'f', 'h', 'i', 'z'};

    int key = 'f';

    int N = v.size()-1;

    int start = 0;
    int end = N-1;

    int res = -1;

    while(start <= end){
        int mid = start + (end-start)/2;

        if(v[mid] == key){
            res = mid;
            start = mid+1;
        }else if(v[mid] > key){
            end = mid-1;
        }else if(v[mid] < key){
            start = mid+1;
        }
    }

    cout << v[res] << '\n';

    return 0;
}