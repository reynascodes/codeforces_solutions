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
        int x, y;
        string p, q, r;
        cin >> x >> p >> y >> q >> r;

        string resultio = p;
        for (int i = 0; i < y; i++) {
            if (r[i] == 'V') {
                resultio = q[i] + resultio; 
            } else {
                resultio += q[i];            
            }
        }
        cout << resultio << endl;
    }
    
    return 0;
}
