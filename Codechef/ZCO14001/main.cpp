#include <bits/stdc++.h>
using namespace std;
vector<int> a(100001);
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n,h;
    cin >> n >> h;
    for (int i=0; i < n; i++) cin >> a[i];
    bool crane = false;
    int pos = 0;
    int x;
    while (true) {
        cin >> x;
        if (x == 1) {
            if (pos >= 1) pos--;
        }
        else if (x == 2) {
            if (pos < n-1) pos++;
        }
        else if (x == 3) {
            if (a[pos]>=1 && !crane) {
                crane = true;
                a[pos]--;
            } 
        }
        else if (x == 4) {
            if (crane && a[pos]+1<=h) {
                crane = false;
                a[pos]++;
            }
        }
        else break;
    }
    for (int i=0; i < n; i++) cout << a[i] << " ";
    cout << "\n";
    return 0;
}