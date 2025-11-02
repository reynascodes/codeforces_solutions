#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

int mex(vector<int> v) {
    bool true_spotted[4] = {false};
    for (int x : v) if (x >= 0 && x < 4) true_spotted[x] = true;
    for (int i = 0; i < 4; ++i) if (!true_spotted[i]) return i;
    return 4;
}

bool check_if_true(int x, int y, int z) {
    vector<int> t = {x, y, z};
    int m = mex(t);
    int mx = max({x, y, z});
    int mn = min({x, y, z});
    return m == mx - mn;
}

bool certified(vector<int>& a) {
    int n = a.size();
    for (int i = 0; i <= n - 3; ++i) {
        vector<int> triplet = {a[i], a[i+1], a[i+2]};
        bool assh = false;
        for (int x = 0; x < 4; ++x) {
            for (int y = 0; y < 4; ++y) {
                for (int z = 0; z < 4; ++z) {
                    int i1 = (triplet[0] == -1 ? x : triplet[0]);
                    int i2 = (triplet[1] == -1 ? y : triplet[1]);
                    int i3 = (triplet[2] == -1 ? z : triplet[2]);
                    if (check_if_true(i1, i2, i3)) {
                        assh = true;
                        goto next;
                    }
                }
            }
        }
        next:
        if (!assh) return false;
    }
    return true;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) cin >> a[i];
        cout << (certified(a) ? "YES" : "NO") << endl;
    }

    return 0;
}
//all testcases passed
// fav qsn till now 