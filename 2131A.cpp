#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];

        int oxymoron = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] > b[i]) oxymoron += a[i] - b[i];
        }

        cout << oxymoron + 1 << endl;
    }

    return 0;
}//all testcases passed
