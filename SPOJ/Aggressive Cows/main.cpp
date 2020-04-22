#include <bits/stdc++.h>
using namespace std;
#define ll long long 
ll findMinimumDistance(vector<ll> a, ll tot) {
    int n = a.size();
    ll l = 0, h = a[n-1]-a[0];
    while (l < h) {
        ll mid = l + (h-l+1)/2;
        int last_used = a[0];
        int cows = 1;
        for (int i=1; i < n; i++) {
            if (a[i]-last_used>=mid) {
                cows++;
                last_used = a[i];
            }
        }
        if (cows >= tot) l = mid;
        else h = mid-1;    
    }
    return l;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n,tot,maxDist=0;
        cin >> n >> tot;
        vector<ll> stalls(n);
        for (int i=0; i < n; i++) {
            cin >> stalls[i];
        }
        sort(stalls.begin(), stalls.end());
        cout << findMinimumDistance(stalls, tot) << "\n";    
    }
    return 0;
}