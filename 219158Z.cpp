#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int resulta=a;
    int resultc=c;
    for ( int i = 1; i < b; i++)
    {
        resulta=a*resulta;
    }
      for ( int i = 1; i < d; i++)
    {
        resultc=resultc*c;
    }
    if (resulta>resultc)
    {
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    
    return 0;
}