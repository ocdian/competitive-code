#include <bits/stdc++.h>
using namespace std;
int c,d;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i=0; i < n; i++) cin >> a[i];
    int i = 0, j = n-1;
    int t = 1;
    while (i <= j) {
        int x;
        if (a[i]>a[j]) {
            x = a[i];
            i++;
        } 
        else {
            x = a[j];
            j--;
        }
        if (t) c += x;
        else d += x;
        t = 1-t; 
    }
    cout << c << " " << d << "\n";
    return 0;
}