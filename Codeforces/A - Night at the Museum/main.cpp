#include <bits/stdc++.h>
using namespace std;
int ans;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string s;
    cin >> s;
    char pos = 'a';
    for (int i=0; i < s.size(); i++) {
        char c = s[i];
        int d1 = abs(c-pos);
        int d2 = (pos > c)?'z'-pos+1+c-'a':pos-'a'+1+'z'-c;
        pos = c;
        ans += min(d1,d2);
    }
    cout << ans << "\n";
    return 0;
}