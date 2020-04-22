#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 65000;
int ans1,ans2,n,k;
bool checker(vector<int> a) {
    for (int i=1; i <= n; i++) {
        for (int j=i+1; j <= n; j++) {
            if (abs(a[j]-a[i])>=k) ans2++;
        }
    }
    return (ans1 == ans2);
}
int binarySearch(ll x, vector<int> a) {
    int l = 0, r = n+1;
    while (l < r) {
        int mid = l + (r-l)/2;
        if (a[mid]>=x) r = mid;
        else l = mid+1;
    }
    return (r<=n)?r:-1;
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
        int pos = binarySearch(a[i]+k, a);
        if (pos > 0) ans1 += n-pos+1;
    }
    //if (checker(a)) cout << "Correct Answer!\n";
    //cout << ans2 << "\n";
    cout << ans1 << "\n";
    return 0;
}