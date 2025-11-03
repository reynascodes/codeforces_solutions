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
        int n,res,lastdig;
        int neg=0;
        int zerocnt=0;
        int mvcnt=0;
        
        cin>>n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        
        sort(a,a+n);

        for (int i = 0; i < n; i++)
        { 
           if (a[i]==0)
           {
            zerocnt++;
           }else if (a[i]<0)
           {
            neg++;
           }
            
        }
        
        for (int i = 0; i < n; i++)
        {
            if (i>0 &&(a[i]==0||a[i]==1))
            {
                lastdig=a[i-1];
                break;
            }else if(a[i]==0){
                lastdig=a[i];
            }
            
        }

        if (neg%2!=0)
        {
            res=1-lastdig+zerocnt;
        }else{
            res=zerocnt;
        } 
        
        cout<<res<<endl;
        
    }
    
    return 0;
}

