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
        string s1,s2;
        cin>>n>>s1>>s2;
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
        if (s1==s2){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }

        
    }
    
    return 0;
}//all testcases passed