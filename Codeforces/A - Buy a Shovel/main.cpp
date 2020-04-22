#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int it=1,k,r;
    cin >> k >> r;
    int p = k;
    while (p%10 && p%10 != r) {
        p += k;
        it++;
    }
    cout << it << "\n";
    return 0;
}