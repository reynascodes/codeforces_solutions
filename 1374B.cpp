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
        int movecount=0;
        cin>>n; 
        while (n>1)
     {
        
        if (n%6==0)
        {
            n=n/6; 
            movecount++;  
        }else if(n%2==0 || n%3==0)
        {
            n=n*2;
            movecount++;
        }else
        {
            break;
        }
        
        
     }
      
     if (n>1||n<1)
     {
        movecount=-1;
     }
    
     cout<<movecount<<endl;

    }
    
    return 0;
}//all testcases passed