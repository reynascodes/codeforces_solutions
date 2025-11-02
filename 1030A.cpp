#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    int easycount=0;
    cin>>n;
    int array[99];
    for ( int i = 0; i < n; i++)
    {
        cin>>array[i];
    }
    
    for (int i = 0; i < n; i++)
    {
        int test=array[i];
        if (test==0)
        {
            easycount++;
        }
        
    }
    if (easycount==n)
    {
        cout<<"EASY";
    }else{
        cout<<"HARD";
    }
    
    return 0;
}//all testcases passed