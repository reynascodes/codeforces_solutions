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
       int n,array[100],ans;
       cin>>n;
        for (int i = 0; i < n; i++)
        {
            cin>>array[i];
        }
        
        for (int i = 0; i < n-2; i++)
        {
             if (array[i]!=array[i+1]&&array[i+1]==array[i+2]){
                  ans=i+1;
                  break;
             }else if (array[i]==array[i+1]&&array[i+1]!=array[i+2])
             {
                ans=i+3;
                break;
             }else if (array[i]!=array[i+1]&&array[i+1]!=array[i+2]&&array[i]==array[i+2])
             {
                ans=i+2;
                break;
             }
             
             
        }
        
       
        cout<<ans<<endl; 
        
    }
    
    return 0;
}//correct aprroach but need further optimization😂 !!!