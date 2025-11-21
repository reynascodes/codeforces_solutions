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
        vector<int> p(n);
        for(int i = 0; i < n; ++i) cin >> p[i];

        int mn = n + 1;
        bool ok = true;

        for(int i = 0; i < n - 1; ++i) {
            mn = min(mn, p[i]);
            if(mn == n - i) {
                ok = false;
                break;
            }
        }

        if(ok) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    
    return 0;
}