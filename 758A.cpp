#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    int array[100];
    int currency;
    int ans=0;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>array[i];
    }

    int maxelement=array[0];

    for (int i = 1; i < n; i++)
    {
        if (array[i]>maxelement)
        {
            maxelement=array[i];
        }    
    }
    
    for (int i = 0; i < n; i++)
    {
       currency= maxelement-array[i];
       ans+=currency;
    }

    cout<<ans;
    
    return 0;
}//all testcases passed