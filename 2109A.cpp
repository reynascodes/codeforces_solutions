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
        int playercount;
        bool found=false;
        bool allone=true;
        cin>>playercount;
        int array [1000];
        for ( int i =0 ; i < playercount ; i++)
        {
            cin>>array[i];
        }

        for (int i = 0; i < playercount; i++)
        {
            if (array[i]!=1)
           {
            allone=false;
            
           }
        }
        
        for (int i = 0; i < playercount-1; i++)
        {
           
           if(array[i]==0 && array[i+1]==0 ){
            found=true;
            break;
           } 
           
         
        }
         if (found || allone)
        {
            cout<<"YES"<<endl;
        } else
        {
            cout<<"NO"<<endl;
        }
        
        
    }
    
    return 0;
}//all testcases passed