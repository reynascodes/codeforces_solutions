//c passed
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
        int n;
        cin>>n;
        vector<int>a(n);
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        if (a[0]!=1)
        {
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
        }
        
        
        
    }
    
    return 0;
}