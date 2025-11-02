#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

void solve() {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    int a = 0, b = 0, c = 0, d = 0;
    
    for (char x : s) {
        if (x == '0') a++, b++;
        else if (x == '1') c++, d++;
        else b++, d++;
    }

    string ans(n, ' ');
    for (int i = 1; i <= n; ++i) {
        if (i <= a || i > n - c) ans[i - 1] = '-';
        else if (i > b && i <= n - d) ans[i - 1] = '+';
        else ans[i - 1] = '?';
    }
    cout << ans << endl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}

//wrong ans