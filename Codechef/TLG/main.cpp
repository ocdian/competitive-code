#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int lead=0,leader,a=0,b=0,x,y,n;
    cin >> n;
    while (n--) {
        cin >> x >> y;
        a += x; 
        b += y;
        if (abs(a-b)>lead) {
            lead = abs(a-b);
            if (a>b) leader = 1;
            else leader = 2;
        }
    }
    cout << leader << " " << lead << "\n";
    return 0;
}