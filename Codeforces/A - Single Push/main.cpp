#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        bool pos = true;
        int n,l=-1,r=-1,k=-1;
        cin >> n;
        vector<int> a(n);
        vector<int> b(n);
        for (int i=0; i < n; i++) cin >> a[i];
        for (int i=0; i < n; i++) cin >> b[i];
        for (int i=0; i < n; i++) {
            if (a[i]!=b[i]) {
                //k can't be negative -> b can't be small than a
                if (b[i]<a[i]) {
                    pos = false;
                    break;
                }
                else {
                    //no bounds defined yet 
                    if (l==-1) {
                        l = i;
                        r = i;
                        k = b[i]-a[i];
                        
                    }
                    else {
                        //difference is not the same, range [l,r] is not a continuos segment
                        if (b[i]-a[i]!=k || b[i-1]-a[i-1]!=k) {
                            pos = false;
                            break;
                        }
                        else {
                            r = i;
                        }
                    }
                }
            }
        }
        if (pos) cout << "YES\n";
        else cout << "NO\n";
    }
    
    return 0;
}