#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while (tc--) {
        int lamejokes;
        cin >> lamejokes;

        vector<int> lmao(lamejokes, -1); 

        for (int i = 1; i < lamejokes; i += 2) { 
            int main_chick = (i + 1) / 2;                  
            int side_chick = (lamejokes - i - 1 + 1) / 2; 
            lmao[i] = main_chick + side_chick + 1;
        }

        for (int x : lmao) cout << x << " ";
        cout << endl;
    }
    return 0;
}//all testcases passed
