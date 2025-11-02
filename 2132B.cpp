#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'


void sidefnc() {
    long long n;
    cin >> n;

    vector<long long> resultio;
    long long expo = 10; 
    for (int k = 1; k <= 18; ++k) {
        long long divcount = expo + 1;
        if (divcount > n) {
          break;
        }

        if (n % divcount == 0) {
            resultio.push_back(n / divcount);
        }

        if (expo > LLONG_MAX / 10) {
            break;
        }

        expo *= 10;
    }

    sort(resultio.begin(), resultio.end());

    if (resultio.empty()) {
        cout << 0 << endl;
    } else {
        cout << resultio.size() << endl;
        for (size_t i = 0; i < resultio.size(); ++i) {
            cout << resultio[i] << (i == resultio.size() - 1 ? "" : " ");
        }
        cout << endl;
    }
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int tc;
    cin >> tc;
    while (tc--)
    {
        sidefnc();
    }
    
    return 0;
}
//all testcases passed