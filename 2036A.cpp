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
        int a ,b,melcount;
        cin>>melcount;
        int array[100];
        int nocount=0;
        for (int i = 0; i < melcount; i++)
        {
            cin>>array[i];
        }
        
        for (int i = 0; i < melcount-1; i++)
        {
            if (abs(array[i]-array[i+1])!=5 && abs(array[i]-array[i+1])!=7)
            {
                nocount++;
            }
        }
        if (nocount==0)
        {
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
        
        
        
    }
    
    return 0;
}//all testcases passed