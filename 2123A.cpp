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
        int n,a,b;
        int losecount=0;
        cin>>n;
        vector<int>arr(n);
        for (int i = 0; i < n; i++)
        {
            arr[i]=i;
        }
        while (true)
        {
            for (int  i = 0; i < n; i++)
            {
                a=arr[i]; 
                arr.erase(arr.begin());
                n-=1;
                break;
            }

            for (int i = 0; i <n ; i++)
            {
                if ((a+arr[i]-3)%4==0)
                {
                   arr.erase((arr.begin()+i));
                   n-=1;
                   break;
                }else
                {
                    losecount++;  
                }  
                
            }
           if (losecount==arr.size()||arr.size()==0)
                    {
                       break; 
                    } 
            
        }
        
        if (losecount==arr.size())
        {
            cout<<"Alice"<<endl;
        }else if(arr.size()==0)
        {
           cout<<"Bob"<<endl;
        }
        
        
    }
    
    return 0;
}//all testcases passed