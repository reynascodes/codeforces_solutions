#include <bits/stdc++.h>
using namespace std;
using u64 = unsigned long long;
using u128 = __uint128_t;

u64 mulmod(u64 a, u64 b, u64 mod) {
    return (u128)a * b % mod;
}

u64 modpow(u64 a, u64 d, u64 mod) {
    u64 res = 1;
    while (d) {
        if (d & 1) res = mulmod(res, a, mod);
        a = mulmod(a, a, mod);
        d >>= 1;
    }
    return res;
}

bool isPrime(u64 n) {
    if (n < 2) return false;
    for (u64 p : {2ULL,3ULL,5ULL,7ULL,11ULL,13ULL,17ULL,19ULL,23ULL}) {
        if (n % p == 0) return n == p;
    }
    u64 d = n - 1;
    int s = 0;
    while ((d & 1) == 0) { d >>= 1; ++s; }
  
    for (u64 a : {2ULL, 325ULL, 9375ULL, 28178ULL, 450775ULL, 9780504ULL, 1795265022ULL}) {
        if (a % n == 0) continue;
        u64 x = modpow(a, d, n);
        if (x == 1 || x == n - 1) continue;
        bool composite = true;
        for (int r = 1; r < s; ++r) {
            x = mulmod(x, x, n);
            if (x == n - 1) { composite = false; break; }
        }
        if (composite) return false;
    }
    return true;
}

std::mt19937_64 rng((unsigned)chrono::high_resolution_clock::now().time_since_epoch().count());

u64 pollards_rho(u64 n) {
    if (n % 2 == 0) return 2;
    if (n % 3 == 0) return 3;
    u64 c = std::uniform_int_distribution<u64>(1, n-1)(rng);
    u64 x = std::uniform_int_distribution<u64>(2, n-1)(rng);
    u64 y = x;
    u64 d = 1;
    auto f = [&](u64 x){ return (mulmod(x, x, n) + c) % n; };
    while (d == 1) {
        x = f(x);
        y = f(f(y));
        u64 diff = x > y ? x - y : y - x;
        d = std::gcd(diff, n);
        if (d == n) return pollards_rho(n); 
    }
    return d;
}

void factor(u64 n, vector<u64> &out) {
    if (n == 1) return;
    if (isPrime(n)) { out.push_back(n); return; }
    u64 d = pollards_rho(n);
    factor(d, out);
    factor(n / d, out);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    if(!(cin >> tc)) return 0;
    while (tc--) {
        u64 n; cin >> n;
        if (n == 0) { cout << 0 << '\n'; continue; }
        vector<u64> fac;
        factor(n, fac);
        sort(fac.begin(), fac.end());
        u64 ans = 1;
        for (size_t i = 0; i < fac.size(); ) {
            size_t j = i;
            while (j < fac.size() && fac[j] == fac[i]) ++j;
            u64 exp = j - i;
            ans *= (exp + 1);
            i = j;
        }
        cout << ans << '\n';
    }
    return 0;
}
