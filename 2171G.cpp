//not solved 
#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

const int MOD = 1000003;

const int LIMIT = 1000003; 

int fact[LIMIT];
int invFact[LIMIT];

int power(int base, int exp) {
    int res = 1;
    base %= MOD;
    while (exp > 0) {
        if (exp % 2 == 1) res = (res * base) % MOD;
        base = (base * base) % MOD;
        exp /= 2;
    }
    return res;
}

int modInverse(int n) {
    return power(n, MOD - 2);
}

void precompute() {
    fact[0] = 1;
    invFact[0] = 1;
    for (int i = 1; i < LIMIT; i++) {
        fact[i] = (fact[i - 1] * i) % MOD;
    }
    invFact[LIMIT - 1] = modInverse(fact[LIMIT - 1]);
    for (int i = LIMIT - 2; i >= 1; i--) {
        invFact[i] = (invFact[i + 1] * (i + 1)) % MOD;
    }
}

void solve() {
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; ++i) cin >> a[i];
    for (int i = 0; i < n; ++i) cin >> b[i];

    int min_ops = -1;
    vector<int> best_ks;


    for (int k = 0; k <= 22; ++k) {
        int current_inc = 0;
        bool possible = true;
        for (int i = 0; i < n; ++i) {
            int shifted_a = a[i] * (1LL << k);
            if (shifted_a > b[i]) {
                possible = false;
                break;
            }
            int diff = b[i] - shifted_a;
            

            current_inc += (diff >> k);
            

            int rem = diff & ((1LL << k) - 1);
            current_inc += __builtin_popcountll(rem);
        }

        if (possible) {
            int total_ops = k + current_inc;
            if (min_ops == -1 || total_ops < min_ops) {
                min_ops = total_ops;
                best_ks.clear();
                best_ks.push_back(k);
            } else if (total_ops == min_ops) {
                best_ks.push_back(k);
            }
        }
    }

    if (min_ops == -1) {
        cout << "0 0" << endl;
        return;
    }

    int total_ways = 0;

    for (int k : best_ks) {
        int current_ways = 1;
        vector<int> stage_counts(k + 1, 0);
        
     
        for (int i = 0; i < n; ++i) {
            int diff = b[i] - (a[i] * (1LL << k));
            
          
            int c0 = diff >> k;
            stage_counts[0] += c0;
            

            current_ways = (current_ways * invFact[c0]) % MOD;


            for (int t = 1; t <= k; ++t) {
                if ((diff >> (k - t)) & 1) {
                    stage_counts[t]++;
                }
            }
        }

 
        for (int t = 0; t <= k; ++t) {
            if (stage_counts[t] >= MOD) {
                current_ways = 0;
                break;
            }
            current_ways = (current_ways * fact[stage_counts[t]]) % MOD;
        }
        
        total_ways = (total_ways + current_ways) % MOD;
    }

    cout << min_ops << " " << total_ways << endl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    precompute();
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}