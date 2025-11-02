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
     int even=0;
     int odd=0;
     int array[100000];
     cin>>n;
     for (int i = 0; i < n; i++)
     {
        cin>>array[i];
     }
     for (int i = 0; i < n; i++)
     {
        int val=array[i];
        if (val%2==0)
        {
            even++;
        }else{
            odd++;
        }
        
     }
     if(n%2!=0){
      cout<<-1<<endl;
     }
     else {
        if(even==odd){
        cout<<0<<endl;
     }else{
      cout<<abs(even-odd)/2<<endl;
     }
    }
        
    }
    
    return 0;
}