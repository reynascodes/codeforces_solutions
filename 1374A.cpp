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
      int nmax ,modx ,remy,ans;
      cin>>modx>>remy>>nmax;
      int pqrs=nmax%modx;
      int abcd=nmax/modx;
      if (pqrs==0&&remy!=0)
      {
        ans=(abcd-1)*modx+remy;
      }else if (pqrs!=0&&nmax<abcd*modx+remy)
      {
        ans=(abcd-1)*modx+remy;
      }else{
        ans=abcd*modx+remy;
      }
      
      cout<<ans<<endl;
        
    }
    
    return 0;
}//all testcases passed