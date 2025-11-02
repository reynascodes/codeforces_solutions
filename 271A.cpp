#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,a,b,c,d;
    cin>>n;
    n=n+1;
    int ncount=n;
    while (true)
    {
    n=ncount;    
    a=n%10;
    n=n/10;
    b=n%10;
    n=n/10;
    c=n%10;
    n=n/10;
    d=n%10;
    
    if (a!=b&&a!=c&&a!=d&&b!=c&&b!=d&&c!=d)
    {
        cout<<ncount<<endl;
        break;
    }else{
        ncount++;
    }
    }
    
    
    return 0;
}// all testcases passed