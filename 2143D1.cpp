#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;

const int MOD = 1e9 + 7;

void solve() {
    int n;
    cin >> n;
    
    vector<int> a(n + 1);
    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
    }

    vector<vector<long long>> dp(n + 1, vector<long long>(n + 1, 0));
    
    vector<vector<long long>> pref(n + 1, vector<long long>(n + 1, 0));

    long long total_ans = 1; 

    for (int i = 1; i <= n; ++i) {
        int v = a[i];

        dp[i][0] = 1;

        for (int k = 1; k < i; ++k) {
            int u = a[k];

            if (v > u) {
                
                for (int j = 0; j <= n; ++j) {
                    dp[i][j] = (dp[i][j] + dp[k][j]) % MOD;
                }
            } else { 
                long long sum_to_add = (v > 0) ? pref[k][v - 1] : 0;
                if (sum_to_add > 0) {
                    dp[i][u] = (dp[i][u] + sum_to_add) % MOD;
                }
            }
        }

        pref[i][0] = dp[i][0];
        for (int j = 1; j <= n; ++j) {
            pref[i][j] = (pref[i][j - 1] + dp[i][j]) % MOD;
        }

        total_ans = (total_ans + pref[i][n]) % MOD;
    }

    cout << total_ans << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}//failed