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
        int a,b,res;
        cin>>a>>b;
        if(a==b){
            res=0;
        }else if(a%b==0||b%a==0){
            res=1;
        }else{
            res=2;
        }
        cout<<res<<endl;
        
    }
    
    return 0;
}//all testcases passed