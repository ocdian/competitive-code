#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n,cnt=0;
    cin >> n;
    while (n--)
    {
        int sum = 0;
        int x;
        for (int i=0; i < 3; i++) {
            cin >> x;
            sum += x;
        }
        if (sum >= 2) cnt++;
    }
    cout << cnt << "\n";
    return 0;
}