#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

bool isComposite(int a ,int b) {
    
    if (a < 4) return false;
    
    
    for (int i = 2; i * i <= a; i++) {
        if (a % i == 0) {
            return true; 
        }
    }
    return false; 
}




signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin>>n;
    for (int i = 4; ; i++)
    {
        int a=i;
        int b=a+n;

    }
    
    
    return 0;
}//testcases passed but theres TLE issue need further optimisation in code