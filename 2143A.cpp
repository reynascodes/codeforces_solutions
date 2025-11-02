#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    int x = -1, y = -1;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] == n) x = i;
        if (n > 1 && a[i] == n - 1) y = i;
    }
    if (n == 1) { cout << "YES" << endl; return; }
    cout << (abs(x - y) == 1 ? "YES" : "NO") << endl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while (t--) solve();
}

//all testcases passed