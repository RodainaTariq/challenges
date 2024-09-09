#include <bits/stdc++.h>
#define int long long
using namespace std;
int fibonacci(int n) {
    if(n == 1) {
        return 0;
    }
    if(n == 2) {
        return 1;
    }
    return fibonacci(n - 2) + fibonacci(n - 1);
}
signed main() {
    int n;
    cin >> n;
    int res = fibonacci(n);
    cout << res << endl;
    return 0;
}
