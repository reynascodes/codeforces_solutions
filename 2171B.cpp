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
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        int ans;
        if (a[0] != -1 && a[n-1] != -1) ans = llabs(a[n-1] - a[0]);
        else ans = 0;

        if (a[0] == -1 && a[n-1] == -1) {
            a[0] = 0;
            a[n-1] = 0;
        } else if (a[0] == -1) {
            a[0] = a[n-1];
        } else if (a[n-1] == -1) {
            a[n-1] = a[0];
        }

        for (int i = 0; i < n; i++) {
            if (a[i] == -1) a[i] = 0;
        }

        cout << ans << endl;
        for (int i = 0; i < n; i++) {
            if (i) cout << ' ';
            cout << a[i];
        }
        cout << endl;
    }
    
    return 0;
}
