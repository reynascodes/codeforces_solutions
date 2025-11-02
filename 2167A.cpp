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
        int a,b,c,d;
       cin>>a>>b>>c>>d;
       if (a==b&&b==c&&c==d){
        cout<<"yes"<<endl;
       }else{
        cout<<"no"<<endl;
       }
    
    }
    
    return 0;
}//all testcases passed