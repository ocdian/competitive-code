#include <bits/stdc++.h>
using namespace std;
map<char,int> m;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string a;
    int cnt = 0;
    cin >> a;
    for (int i=0; i < a.size(); i++) {
        char c = a[i];
        m[c]++;
        if (m[c]==1) cnt++;
    }
    if (cnt%2) cout << "IGNORE HIM!\n";
    else cout << "CHAT WITH HER!\n";
    return 0;
}