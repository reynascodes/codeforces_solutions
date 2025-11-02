#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

using ull = unsigned long long;

vector<ull> p10, sumCommute;

void preopt() {
    p10.assign(18, 1);
    sumCommute.assign(18, 0);

    for (int i = 1; i <= 17; i++) {
        p10[i] = p10[i - 1] * 10;
    }
    for (int i = 1; i <= 17; i++) {
        sumCommute[i] = sumCommute[i - 1] * 10 + 45 * p10[i - 1];
    }
}

ull digSum(ull n) {
    if (n < 10) return n * (n + 1) / 2;
    if (n == 0) return 0;

    string s = to_string(n);
    int d = s.size();

    ull msd = n / p10[d - 1];

    ull t1 = msd * sumCommute[d - 1];
    ull t2 = msd * (msd - 1) / 2 * p10[d - 1];
    ull t3 = msd * (1 + n % p10[d - 1]);
    ull t4 = digSum(n % p10[d - 1]);

    return t1 + t2 + t3 + t4;
}

void solve() {
    ull k;
    cin >> k;

    ull ans = 0;
    int len = 1;
    ull cnt = 9;

    while (true) {
        ull blk = (ull)len * cnt;

        if (k > blk) {
            ull st = p10[len - 1];
            ull en = st + cnt - 1;
            ans += digSum(en) - digSum(st - 1);
            k -= blk;
            len++;
            cnt *= 10;
        } else {
            ull st = p10[len - 1];
            ull full = k / len;

            if (full > 0) {
                ull en = st + full - 1;
                ans += digSum(en) - digSum(st - 1);
            }

            ull rem = k % len;
            if (rem > 0) {
                ull last = st + full;
                string sl = to_string(last);
                for (int i = 0; i < rem; i++) ans += sl[i] - '0';
            }
            break;
        }
    }
    cout << ans << endl;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    preopt();

    int t;
    cin >> t;
    while (t--) solve();
}
//all testcases passed , got mentally assulted while solving this one!