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
      int s=0;
      int point=0;
      cin>>n;
      vector<int> array(n);
      for (int i = 0; i < n; i++)
      {
        cin>>array[i];
      }
      for (int i = 0; i < n; i++)
      {
        int val=array[i];
        
        if(val%2==0){
            s=s+val;
           
            if (s%2==0)
            {
            point++;}
         
            while (s%2==0){
           
                s=s/2;
            }
        }

      }
        for (int i = 0; i < n; i++)
      {
        int val=array[i];
        if(val%2!=0) {
             s=s+val;
           
            if (s%2==0)
            {
            point++;}
         
            while (s%2==0){
           
                s=s/2;
            }
        }
            
           
        
        
      }
      
        cout<<point<<endl;
    }
    
    return 0;
}//all testcases passed