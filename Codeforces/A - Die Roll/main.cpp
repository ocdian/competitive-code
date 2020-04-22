#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int w,y,div=1;
    cin >> w >> y;
    int a = 7-max(w,y);
    if (a % 2 == 0) div = 2;
    if (a % 3 == 0) div = 3;
    if (a % 6 == 0) div = 6;
    a /= div;
    int b = 6 / div;
    cout << a << "/" << b << "\n"; 
    return 0;
}