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
      int hc,dc,hm,dm,k,w,a,newdc,newhc;  
       cin>>hc>>dc;
       cin>>hm>>dm;
       cin>>k>>w>>a;
       bool canwin=false;

       for (int  i = 0; i <= k; i++)
       {
        newdc=dc+i*w;
        newhc=hc+(k-i)*a;
       
       
       
       int x=(hm+newdc-1)/newdc;
       int y=(newhc+dm-1)/dm;

       if (x==y|| x<y)
       {
        canwin=true;
        break;
       }
    }  
       cout<<(canwin? "YES":"NO")<<endl;
    }
    
    return 0;
}//all testcases passed