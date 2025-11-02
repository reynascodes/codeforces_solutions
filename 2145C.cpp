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
        string s;
        cin >> n >> s;

        int a = 0, b = 0;
        for (char c : s) (c == 'a' ? a : b)++;
        if (!a || !b) { cout << -1 << endl; continue; }
        if (a == b) { cout << 0 << endl; continue; }

        int d = a - b;
        int mn = n; 
        int cur = 0;
        unordered_map<int, int> mp;
        mp[0] = 0;

        for (int i = 0; i < n; ++i) {
            cur += (s[i] == 'a' ? 1 : -1);
            int need = cur - d;
            if (mp.count(need)) {
                int len = i + 1 - mp[need];
                mn = min(mn, len);
            }
            if (!mp.count(cur)) mp[cur] = i + 1;
        }

        cout << (mn == n ? -1 : mn) << endl;
    }
    return 0;
}
//all testcases passed