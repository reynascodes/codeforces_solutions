#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

int mex(vector<int> &v) {
    unordered_set<int> s(v.begin(), v.end());
    int m = 0;
    while (s.count(m)) m++;
    return m;
}

void solve() {
    int n, k; 
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    map<vector<int>, int> seen;
    vector<vector<int>> states;
    vector<int> cur = a;
    int ops = 0;

    while (ops < k) {
        if (seen.count(cur)) {
            int st = seen[cur], len = ops - st;
            if (len == 0) break;
            int rem = k - ops;
            int pos = st + (rem % len);
            cur = states[pos];
            break;
        }
        seen[cur] = ops;
        states.push_back(cur);

        vector<int> nxt;
        for (int i = 0; i < n; i++) {
            vector<int> tmp;
            tmp.reserve(n - 1);
            for (int j = 0; j < n; j++) if (j != i) tmp.push_back(cur[j]);
            nxt.push_back(mex(tmp));
        }
        cur = nxt;
        ops++;
    }

    cout << accumulate(cur.begin(), cur.end(), 0LL) << endl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while (t--) solve();
}
//all testcases passed