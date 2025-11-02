#include <bits/stdc++.h>
using namespace std;
void solve() {
    int n;
    cin >> n;
    vector<int> p(n);
    vector<int> pos(n + 1);
    for (int i = 0; i < n; ++i) {
        cin >> p[i];
        pos[p[i]] = i;
    }

    
    vector<int> c0, c1, c2;
    for (int i = 1; i <= n; ++i) {
        if (i % 3 == 0) c0.push_back(i);
        else if (i % 3 == 1) c1.push_back(i);
        else c2.push_back(i);
    }

    vector<int> q(n);
    int n_rem = n % 3;

    if (n_rem == 0 || n_rem == 2) {
      
        for (int v = 1; v <= n; ++v) {
            int v_rem = v % 3;
            int original_pos = pos[v];

            if (v_rem == 0) {
                q[original_pos] = c0.back(); c0.pop_back();
            } else if (v_rem == 1) {
                q[original_pos] = c2.back(); c2.pop_back();
            } else { // v_rem == 2
                q[original_pos] = c1.back(); c1.pop_back();
            }
        }
    } else { 
        for (int v = 1; v <= n; ++v) {
            int v_rem = v % 3;
            int original_pos = pos[v];

            if (v_rem == 0) {
                q[original_pos] = c2.back(); c2.pop_back();
            } else if (v_rem == 1) {
                q[original_pos] = c1.back(); c1.pop_back();
            } else { 
                q[original_pos] = c0.back(); c0.pop_back();
            }
        }
    }

    
    for (int i = 0; i < n; ++i) {
        cout << q[i] << (i == n - 1 ? "" : " ");
    }
      cout << "\n";
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
}//a solid zero , couldnt even solve for sample TCs,
//this qsn is named as "FUN PERMUTATION"
//permutation aint fun at all