#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }
    sort(v.begin() , v.end());
    for(int i = 0 , j = 1; i < n; i++ , j++) {
        while(j != v[i]) {
            cout << j++ << ' ';
        }
    }
    cout << endl;
    return 0;
}
