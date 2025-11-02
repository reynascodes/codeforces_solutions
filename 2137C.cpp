#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

void solve() {
    int a, b; 
    cin >> a >> b;
    if (a % 2 == 0 && b % 2) cout << -1 << endl;
    else if (a % 2 && b % 2 == 0) {
        if (b % 4) cout << -1 << endl;
        else cout << a * (b / 2) + 2 << endl;
    } else if (a % 2 && b % 2) cout << a * b + 1 << endl;
    else cout << a * (b / 2) + 2 << endl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t; 
    cin >> t;
    while (t--) solve();
}
//all testcases passed