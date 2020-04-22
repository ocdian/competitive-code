#include <bits/stdc++.h>
using namespace std;
//there are two possible answers, either apply operation 1 as many times as possible, 
//then apply operation 2 with c and the remainder of b, or apply operation 2 as many times
//as possible, and then apply operation 1 with a and the remainder of b, the answer is the
//maximum result of of these two
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int a,b,c,t;
    cin >> t;
    while (t--) {
        cin >> a >> b >> c;
        int temp = b, sum1, sum2;
        sum1 = min(a,b/2)*3;
        temp -= min(a,b/2)*2;
        sum1 += min(temp,c/2)*3;
        sum2 = min(b,c/2)*3;
        b -= min(b,c/2);
        sum2 += min(a,b/2)*3;
        cout << max(sum1, sum2) << "\n";
    }
    return 0;
}