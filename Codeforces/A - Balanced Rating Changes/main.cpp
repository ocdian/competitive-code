#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n,x;
    bool up = true;
    cin >> n;
    while (n--) {
        cin >> x;
        if (x%2) {
            double y = x;
            double result;
            if (up) result = ceil(y/2);
            else result = floor(y/2);
            up = !up;
            if (result==-0) result = 0;
            cout << result;
        } 
        else cout << x/2;
        cout << "\n";
    }
    return 0;
}