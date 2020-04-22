#include <bits/stdc++.h>
using namespace std;
vector<int> shops;
int n;
int BinarySearch(int x) {
    int l = 0, r = n;
    while (l<r) {
        int mid = l + (r-l)/2;
        if (shops[mid]>x) r = mid;
        else l = mid+1;
    }
    return l;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    int q,x;
    for (int i=0; i < n; i++) {
        cin >> x;
        shops.push_back(x);
    }
    sort(shops.begin(), shops.end());
    cin >> q;
    while (q--) {
        cin >> x;
        cout << BinarySearch(x) << "\n";
    }
    
    return 0;
}