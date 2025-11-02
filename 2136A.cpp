#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

bool chk(int x, int y) {
    return (x <= 2 * (y + 1)) && (y <= 2 * (x + 1));
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int tc;
    cin >> tc;
    while (tc--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int r1 = a, k1 = b;
        int r2 = c - a, k2 = d - b;
        if (chk(r1, k1) && chk(r2, k2)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}//all testcases passed
