//Let X be the expected maximum number of dots after tossing N times
//E(X) = 1*E(1) + 2*E(2) + 3*E(3) + 4*E(4).....+ M*E(M)
//E(i) where 1 <= i <= M, is equal to the number of possibilites where i was the maximum values, this can be calculated 
//as so: (i^n - i-1^n)/(m^n), equation can be clarified with the grid:
// 1 2 3 4 5 6 
//When we toss one time, out of six possible maximum outcomes, one possibilty had 3 as the max
//1/6 = (3^1-2^1)/6^1 = 3-2/6 = 1/6
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    double m,n,ans = 0;
    cin >> m >> n;
    for (double i=1; i <= m; i++) {
        double E = pow((i/m),n) - pow(((i-1)/m),n);
        //cout << E << endl;
        ans += E*i;
    }
    cout << setprecision(12) << fixed << ans << "\n";
    return 0;
}