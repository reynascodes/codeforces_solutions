#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    int givensum=0;
    cin >> n;
    vector<int>arr(n);
    for (int i = 0; i < n-1; i++)
    {
        cin>>arr[i];
    }
    int sum= n*(n+1)/2;
    for (int i = 0; i < n-1; i++)
    {
        givensum+=arr[i];
    }
    cout<<sum-givensum;

    return 0;
}