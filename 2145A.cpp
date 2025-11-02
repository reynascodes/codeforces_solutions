#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int r = n % 3;
        if (r == 0) cout << 0 << endl;
        else cout << 3 - r << endl;
    }
    
    return 0;
}
//all testcases passed