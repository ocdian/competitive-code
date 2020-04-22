#include <bits/stdc++.h>
using namespace std;
int cnt;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    string prev;
    cin >> prev;
    cnt++;
    n--;
    while (n--) {
        string a;
        cin >> a;
        if (prev[1]==a[0]) cnt++;
        prev = a;
    }
    cout << cnt << "\n";
    return 0;
}