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
        int b,k,a;
        cin>>b>>k>>a;
        a=2*a+1;
        int diglegnth=0;
        while (true)
        {
           diglegnth=diglegnth+b; 
            if (diglegnth>=a)
            {
                cout<<"NO"<<endl;
                break;
            }
           diglegnth=diglegnth+k; 

        if (diglegnth>=a)
            {
                cout<<"YES"<<endl;
                break;
            }
        }
        
        
    }
    
    return 0;
}//wrong ans, need to solve again later!
