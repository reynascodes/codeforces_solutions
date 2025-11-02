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
       int n,m;
       cin>>n>>m;
       if ((n==m)||(n>m&&(n-m)%2==0))
       {
        cout<<"Yes"<<endl;
       }else{
        cout<<"No"<<endl;
       }
       

    }
    
    return 0;
}//all testcases passed