#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

int modExp(int base, int exp, int mod) {
    int result = 1;
    base %= mod; 

    while (exp > 0) {
        if (exp & 1)  
            result = (result * base) % mod;
        base = (base * base) % mod;
        exp >>= 1;   
    }
    return result;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int base=5;
    int exp;
    cin >> exp;

    cout << modExp(5, exp, 100) << endl;
    return 0;
}
//all testcases passed