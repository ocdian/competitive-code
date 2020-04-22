#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int pos = 0;
    string a,b;
    cin >> a >> b;
    for (int i=0; i < b.size(); i++) {
        if (b[i]==a[pos]) pos++;
    }
    cout << pos+1 << "\n";
    return 0;
}