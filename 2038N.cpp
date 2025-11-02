#include <bits/stdc++.h>
using namespace std;

bool eval(char a, char op, char b) {
    int x = a - '0';
    int y = b - '0';
    if (op == '<') return x < y;
    if (op == '>') return x > y;
    return x == y; 
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        string s;
        cin >> s; 
        string best = "";
        int bestDist = 4;
        for (char a = '0'; a <= '9'; ++a) {
            for (char op : {'<', '>', '='}) {
                for (char b = '0'; b <= '9'; ++b) {
                    if (!eval(a, op, b)) continue;
                    string cand;
                    cand.push_back(a);
                    cand.push_back(op);
                    cand.push_back(b);
                    int dist = 0;
                    for (int i = 0; i < 3; ++i) if (cand[i] != s[i]) ++dist;
                    if (dist < bestDist) {
                        bestDist = dist;
                        best = cand;
                    }
                }
            }
        }
        // best should always be set theres at least one true expression🥹!!
        cout << best << '\n';
    }
    return 0;
}
//all testcases passed