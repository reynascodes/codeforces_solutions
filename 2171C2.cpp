//tc passed
#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        int d = 0;
        for(int i = 0; i < n; ++i) cin >> a[i];
        for(int i = 0; i < n; ++i) {
            cin >> b[i];
            d ^= (a[i] ^ b[i]);
        }

        if(d == 0) {
            cout << "Tie" << endl;
            continue;
        }

        int h = 63 - __builtin_clzll(d);
        
        for(int i = n - 1; i >= 0; --i) {
            if(((a[i] ^ b[i]) >> h) & 1) {
                if((i + 1) % 2 != 0) cout << "Ajisai" << endl;
                else cout << "Mai" << endl;
                break;
            }
        }
    }
    
    return 0;
}