#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tilew,tileh,a;
    int numtilew=0;
    int numtileh=0;
    cin>>tilew>>tileh>>a;
    for (int i = 1; ;i++)
    {
       
        if (i*a>=tilew)
        {
            numtilew=i;
            break;
        }
         
    }

    for (int j = 1; ; j++)
    {
        
        if (j*a>=tileh)
        {
            numtileh=j;
            break;
        }
    }
    
    cout<<numtilew*numtileh;
    return 0;
}