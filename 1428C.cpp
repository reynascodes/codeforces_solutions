#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    while (tc--) {
        string s;
        cin >> s;
        string res;
        for (char c : s) {
            if (!res.empty() && (
                (res.back() == 'A' && c == 'B') ||
                (res.back() == 'B' && c == 'B')
            )) {
                res.pop_back();
            } else {
                res.push_back(c);
            }
        }
        cout << res.size() << endl;
    }

    return 0;
}//all testcases passed