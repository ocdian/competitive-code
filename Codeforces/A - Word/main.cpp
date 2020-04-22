#include <bits/stdc++.h>
using namespace std;
int a,b;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string s;
    cin >> s;
    for (int i=0; i < s.size(); i++) {
        char x = s[i];
        if (islower(x)) a++;
        else b++;
    }
    bool l = false;
    if (a>=b) l = true;
    for (int i=0; i < s.size(); i++) {
        s[i] = (l)?(char)tolower(s[i]):(char)toupper(s[i]);
    }
    cout << s << "\n";
    return 0;
}