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
        int ans = 0;
        for (int w = 0; w <= n/4; w++) {
            int r = n - 4*w;
            if (r % 2 == 0) ans++;
        }
        cout << ans << endl;
    }
    
    return 0;
}
