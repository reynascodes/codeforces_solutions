#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int divisorcount;
    int no,a;
    cin>>no;
    for ( a= 1; a<=no; a++)
    {
       divisorcount=0;
    
    for ( int i = 1; i <= a; i++)
    {
        if (a%i==0)
        {
            divisorcount++;
        }
        
    }

    if (divisorcount==2)
    {
       cout<< a <<" ";
    }
    
}
    return 0;
}