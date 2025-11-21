//not solved
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
       int n,a1,a2,a3;
       int acount=0;
       int bcount=0;
       int ccount=0;
       cin>>n;
       vector<int>a(n);
       for (int i = 0; i < n; i++)
       {
        cin>>a[i];
       }
       sort(a.begin(),a.end());
       for (int i = 0; i < n-1; i++)
       {
        if (a[i]==a[i+1])
        {
            acount++;
            a1=i+1;
        }else break;
        
       }
       
       for (int i = a1; i < n-1; i++)
       {
        if (a[i]==a[i+1])
        {
            bcount++;
            a2=i+1;
        }else break;
        
       }

      for (int i = a2; i < n-1; i++)
       {
        if (a[i]==a[i+1])
        {
            ccount++;
            
        }else break;
        
       }
     
       if ((abs(acount-bcount)==0 ||abs(acount-bcount)==0||bcount==0)&&ccount==0)
       {
        cout<<"YES"<<endl;
       }else cout<<"NO"<<endl;
       

       
        
    }
    
    return 0;
}