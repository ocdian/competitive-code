#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n,k;
    cin >> n >> k;
    int lo = 0, hi = n+1;
    while (lo < hi) {
        int mid = lo + (hi-lo)/2;
        int lines = 0;
        long long it = 1;
        while (true) {
            lines += mid/it;
            if (mid/it==0) break;
            it *= k;
        }
        if (lines >= n) hi = mid;
        else lo = mid+1;
    }
    cout << hi << "\n";
    return 0;
}