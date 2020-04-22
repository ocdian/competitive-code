#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int k,n,w;
    cin >> k >> n >> w;
    int r = k * (w*(w+1)/2) - n;
    r = (r >= 0)? r:0;
    cout << r << "\n"; 
    return 0;
}