#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int ac, dr;
    cin >> ac >> dr;

    int n;
    cin >> n;
    vector<int> a(n), d(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> d[i];

    auto getDeficit = [&](int i) {
        return max(0LL, a[i] - ac) + max(0LL, d[i] - dr);
    };

    multiset<int> deficits;
    for (int i = 0; i < n; i++) deficits.insert(getDeficit(i));

    auto calcPopularity = [&]() {
        int p = 0;
        for (auto x : deficits) {
            if (x <= p) p++;
            else break;
        }
        return p;
    };

    int m;
    cin >> m;
    while (m--) {
        int k, na, nd;
        cin >> k >> na >> nd;
        k--; 
        deficits.erase(deficits.find(getDeficit(k)));
        a[k] = na;
        d[k] = nd;
        deficits.insert(getDeficit(k));

        cout << calcPopularity() << endl;
    }

    return 0;
}
//all testcases passed