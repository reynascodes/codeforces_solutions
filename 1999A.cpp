#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int tc;
    cin >> tc;
    while (tc--)
    {
        string s;
        cin>>s;
        cout<<(s[0]-'0')+(s[1]-'0')<<endl;
    }
    
    return 0;
}//all testcases passed