#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll a,b,t;
    cin >> t;
    while (t--) {
        cin >> a >> b;
        bool pos = false;
        if (a==b) pos = true;
        else {
            if (a < b) {
                if (a==1 || a == 3) pos = false;
                else if (a == 2 && b != 3) pos = false;
                else {
                    while (a < b && a > 1) {
                        if (a % 2 == 0) a = (a*3)/2;
                        else a--;
                    }
                    while (a > b) {
                        a--;
                    }
                }
            }
            else {
                while (a > b)
                {
                    a--;
                }
                
            } 
            if (a==b) pos = true;
            else pos = false;
        }
        if (pos) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}