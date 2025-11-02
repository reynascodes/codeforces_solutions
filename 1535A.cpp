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
        int array[4], resulta, resultb;
        for (int i = 0; i <4; i++)
        {
            cin>>array[i];
        }
        if (array[0]>array[2]&& array[1]>array[3])
        {
            cout<<"NO"<<endl;
        } else if(array[2]>array[0]&& array[3]>array[1])
        {
            cout<<"NO"<<endl;
        }else
        {
            cout<<"YES"<<endl;
        }
            
    }
    
    return 0;
}//all testcases passed