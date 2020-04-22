#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, cnt=0; 
    string s;
    cin >> n >> s;
    for (int i=0; i < n; i++) 
        if (s[i]=='A') cnt++;
    if (n-cnt==cnt) cout << "Friendship\n";
    else if (n-cnt<cnt) cout << "Anton\n";
    else cout << "Danik\n";
    return 0;
}