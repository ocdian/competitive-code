#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX(x,y,z) max(x, max(y,z))
#define MIN(x,y,z) min(x, min(y,z))
const int N = 1e5;
const int S = 1e6;
int n,k;
ll ans1,ans2;
bool checker(vector<int> a) {
    for (int i=1; i <= n; i++) {
        for (int j=i+1; j <= n; j++) {
            if (a[i]+a[j]<k)
                ans2++;
        }
    }
    return (ans1==ans2);
}
int findLastNumber(ll x, vector<int> a) {
    int l = 0, r = n+1;
    while (l < r) {
        int mid = l + (r-l+1)/2;
        if (a[mid]<=x) l = mid;
        else r = mid-1;
    }
    return (l <= n && l > 0)?l:-1;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> k;
    vector<int> a(n+1);
    for (int i=1; i <= n; i++) cin >> a[i];
    sort(a.begin(), a.end());
    for (int i=1; i <= n; i++) {
        if (a[i] >= k) break;
        int z = findLastNumber(k-1-a[i], a);
        //cout << a[i] << " " << a[z] << "\n";
        ans1 += (z > i)?z-i:0;
    }
    //if (checker(a)) cout << "Correct answer!\n";
    //cout << ans2 << " ";
    cout << ans1 << "\n";
    return 0;
}