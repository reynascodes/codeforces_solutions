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
        int n,k;
        cin>>n>>k;        
        vector<int>a(n);
        for (int i = 0; i < n; i++)
        {
           cin>>a[i] ;
        }
        vector<int>copy;
        copy=a;
        sort(a.begin(), a.end());
        if((k<2)&&(copy!=a)){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
        }
        
        
    }
    
    return 0;
}
//all test cases passes