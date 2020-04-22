#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n,p=0,ans=0;
    cin >> n;
    for (int i=0; i < n; i++) {
        int x;
        cin >> x;
        if (x==-1)  {
            if (p>0) p--;
            else ans++; 
        }
        else p += x;
    }
    cout << ans << "\n";
    return 0;
}