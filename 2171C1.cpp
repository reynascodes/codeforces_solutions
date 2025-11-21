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
        for(int i = 0; i < n; ++i) cin >> a[i];
        for(int i = 0; i < n; ++i) cin >> b[i];

        int k = 0;
        int last = 0;

        for(int i = 0; i < n; ++i) {
            if(a[i] != b[i]) {
                k++;
                last = i + 1;
            }
        }

        if(k % 2 == 0) {
            cout << "Tie" << endl;
        } else {
            if(last % 2 != 0) {
                cout << "Ajisai" << endl;
            } else {
                cout << "Mai" << endl;
            }
        }
    }
    
    return 0;
}