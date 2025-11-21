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
      int n,x;
      int mintank=0;
      cin>>n>>x;
      vector<int>a(n);
      for (int i = 0; i < n; i++)
      {
        cin>>a[i];
      }
      
      for (int i = 0; i < n-1; i++)
      {
        mintank= max(abs(a[i]-a[i+1]), mintank);
      }
       
      mintank=max({a[0],mintank,(x-a[n-1])*2});


      cout<<mintank<<endl;

    }
    
    return 0;
}
//all testcases passed