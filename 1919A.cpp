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
        int a,b,bigger;
        cin>>a>>b;

        if (a > b) {
        bigger = a;
    } else {
        bigger = b;
    }

        if (a==b)
        {
           cout<<"BOB"<<endl;
        }else if (abs(a-b)==1)
        {
            cout<<"ALICE"<<endl;
        }else if (abs(a-b)>1 && bigger%2==0)
        {
            cout<<"ALICE"<<endl;
        }else if (abs(a-b)>1&& bigger%2!=0)
        {
            cout<<"BOB"<<endl;
        }
        
        else
        {
            cout<<"UK"<<endl;
        }
        
        
        //all testcases passed
        
    }
    
    return 0;
}