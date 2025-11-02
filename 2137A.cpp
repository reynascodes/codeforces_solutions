#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

void solve() {
    int k, x;
    cin >> k >> x;
    int cur = x;
    for (int i = 0; i < k; i++) {
        bool f = 0;
        if ((cur - 1) % 3 == 0 && cur > 1) {
            int p = (cur - 1) / 3;
            if (p % 2) {
                cur = p;
                f = 1;
            }
        }
        if (!f) cur = 2 * cur;
    }
    cout << cur << endl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; 
    cin >> t;
    while (t--) solve();
}
//all testcases passed