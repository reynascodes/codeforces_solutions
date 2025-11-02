#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

long long costcalc(int x) {
    if (x == 0) {
        return 3;
    }
    long long pow3 = 1;
    for (int i = 0; i < x; ++i) {
        pow3 *= 3;
    }
    
    long long pow3p1 = pow3 * 3;
    
    long long pow3m1 = 1;
    for (int i = 0; i < x - 1; ++i) {
        pow3m1 *= 3;
    }
    
    return pow3p1 + (long long)x * pow3m1;
}

void soln() {
    long long n;
    cin >> n;

    long long finalcstt = 0;
    
    vector<long long> pow3vec;
    for (int x = 0; x < 25; ++x) { 
        pow3vec.push_back(costcalc(x));
    }
    
    long long temp_n = n;
    int pwrindcx = 0;
    while(temp_n > 0){
        int digit = temp_n % 3;
        if (digit > 0){
            finalcstt += (long long)digit * pow3vec[pwrindcx];
        }
        temp_n /= 3;
        pwrindcx++;
    }

    cout << finalcstt << endl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int tc;
    cin >> tc;
    while (tc--)
    {
        soln();
    }
    
    return 0;
}
//all testcases passed