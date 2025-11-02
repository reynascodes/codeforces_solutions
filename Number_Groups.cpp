#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int k;
    cin>>k;
    int n=k-1;
    int nosterm=n*(n+1)/2;
    int sub=nosterm*nosterm;
    int full=(nosterm+k)*(nosterm+k);
    int ans= full-sub;
    cout<<ans<<endl;
    return 0;
}