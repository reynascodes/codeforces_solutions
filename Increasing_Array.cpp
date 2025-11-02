#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    int movecount=0;
    cin >> n;
    vector<int>arr(n);
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    for (int i = 1; i < n; i++)
    {
       if (arr[i]<arr[i-1])
       {
        movecount=movecount+arr[i-1]-arr[i];
        arr[i]=arr[i-1];
       }
       
    }
    cout<<movecount;
    
    return 0;
}