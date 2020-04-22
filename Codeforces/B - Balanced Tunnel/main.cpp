#include <bits/stdc++.h>
using namespace std;
int fined[100010];
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n,x, ans = 0;
    queue<int> q;
    cin >> n;
    for (int i=0; i < n; i++) {
        cin >> x;
        q.push(x);
    }
    for (int i=0; i < n; i++) {
        cin >> x;
        while (fined[q.front()]) q.pop();
        if (x==q.front()) q.pop();
        else { 
            ans++;
            fined[x] = true;
        }
    }
    cout << ans << "\n";
    return 0;
}