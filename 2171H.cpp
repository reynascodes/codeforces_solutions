// tc passed
#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

void solve() {
    int n, m;
    cin >> n >> m;

    int sq = sqrt(m);
    if (sq < 1) sq = 1;

    int cur = m;

    for (int i = n; i > sq; --i) {
        if (cur < i) {
            cur = -1;
            break;
        }
        cur = (cur / i) * i - 1;
    }

    if (cur < 0) {
        cout << n - 1 << endl;
        return;
    }

    vector<int> dp(3005, -1);
    dp[0] = cur;
    int max_s = 0;

    int start = min(n, sq);

    for (int i = start; i >= 2; --i) {
        vector<int> next_dp(3005, -1);
        int next_max_s = 0;

        for (int s = 0; s <= max_s; ++s) {
            int bound = dp[s];
            if (bound < i) continue;

            int p = i;
            while (p <= bound) {
                int val = (bound / p) * p;
                
                int v = 0;
                int tmp = val;
                while (tmp > 0 && tmp % i == 0) {
                    v++;
                    tmp /= i;
                }

                int ns = s + v - 1;
                int nb = val - 1;

                if (ns < 3005) {
                    if (nb > next_dp[ns]) {
                        next_dp[ns] = nb;
                        if (ns > next_max_s) next_max_s = ns;
                    }
                }

                if (m / i < p) break;
                p *= i;
            }
        }
        dp = next_dp;
        max_s = next_max_s;
    }

    int ans = 0;
    for (int s = max_s; s >= 0; --s) {
        if (dp[s] != -1) {
            ans = s;
            break;
        }
    }

    cout << (n - 1) + ans << endl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int tc;
    cin >> tc;
    while (tc--) {
        solve();
    }
    
    return 0;
}