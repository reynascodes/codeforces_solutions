#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

void slv() {
    int n;
    cin >> n;
    vector<int> a(n);
    vector<vector<int>> pos(n + 1);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        pos[a[i]].push_back(i);
    }
    vector<int> lst(n + 1);
    for (int v = 1; v <= n; v++) lst[v] = pos[v].size();
    vector<int> dp(n + 2, 0);
    for (int i = n - 1; i >= 0; i--) {
        dp[i] = dp[i + 1];
        int v = a[i];
        lst[v]--;
        int k = lst[v];
        if (k + v - 1 < pos[v].size()) {
            int e = pos[v][k + v - 1];
            dp[i] = max(dp[i], v + dp[e + 1]);
        }
    }
    cout << dp[0] << endl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int tc;
    cin >> tc;
    while (tc--) slv();
    return 0;
}
//all testcases passed but need to look for better approach!