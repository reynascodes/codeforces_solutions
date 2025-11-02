#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int even=0;
    int odd=0;
    int pos=0;
    int neg=0;

    int tc;
    cin >> tc;

    int array[1000];
    for ( int i = 0 ; i<tc ; i++)
      {
        cin>>array[i];

    }
    for ( int i = 0 ; i<tc ; i++)
    { int val= array[i];
        if (val%2==0)
        {
            even++;
        }else {
            odd++;
        }
        
        if(val>0){
            pos++;
        }else if(val<0){
            neg++;
        }
        
        
    }

    cout<<"Even: "<<even<<endl;
    cout<<"Odd: "<<odd<<endl;
    cout<<"Positive: "<<pos<<endl;
    cout<<"Negative: "<<neg<<endl;

    return 0;
} 
 