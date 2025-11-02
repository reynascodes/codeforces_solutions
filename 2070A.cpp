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
     cin>>n;
     int blockcount=n/15;
     int numcheck=blockcount*15;
     int fizzbuzz=3*blockcount;
     for (int i = numcheck; i <= n  ; i++)
     {
        if (i%5==i%3)
        {
            fizzbuzz++;
        }
    }
     
     cout<<fizzbuzz<<endl;
        
    }
    
    return 0;
}//all testcases passed