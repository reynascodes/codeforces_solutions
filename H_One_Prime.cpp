#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int divisorcount=0;
    int a;
    cin>>a;
    for ( int i = 1; i <= a; i++)
    {
        if (a%i==0)
        {
            divisorcount++;
        }
        
    }
    if (divisorcount>2)
    {
        cout<<"NO"<<endl;
    }else{
        cout<<"YES"<<endl;
    }
    
    
    
    return 0;
}