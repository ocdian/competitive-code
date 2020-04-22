#include <bits/stdc++.h>
/*
Algorithm:
-Suppose for item i We earn either A[i] or B[i], we have two cases:
    -A[i] > B[i], if we pick B[i], we lose A[i]-B[i]
    -A[i] < B[i], if we pick A[i], we lose B[i]-A[i]
    In other words, if we pick the smaller value, we lose the difference between 
    it and the larger value, so we want that loss to be as small as possible
-So the parameter for our greedy algorithm is |a[i]-b[i]|, and since we want to 
minimize the difference, it makes sense to always pick the values that will result
in a bigger less if they're not picked, and add them to the sum
-So we store (|a[i]-b[i]|,i) values as pairs in a vector, sort it descendingly
and pick the max out of a[i] or b[i] for each difference when possible. If it's possible
to pick the max value pick it, otherwise pick the other value and add it to the sum.
-Output sum
-Note: We can't store the difference and the max value immediately because we might not be
able to obtain the max value in case it exceeds x or y
*/
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n,x,y, suma=0, sumb=0, ans = 0;
    cin >> n >> x >> y;
    int a[n], b[n];
    vector<pair<int,int>> diffs;
    for (int i=0; i < n; i++) cin >> a[i]; 
    for (int i=0; i < n; i++) {
        cin >> b[i];
        diffs.push_back(make_pair(abs(a[i]-b[i]),i));
    }
    sort(diffs.begin(), diffs.end());
    for (int i=n-1; i >= 0; i--) {
        int index = diffs[i].second;
        if (a[index]>b[index]) {
            if (suma+1<=x) {
                suma++;
                ans += a[index];
            }
            else {
                sumb++;
                ans += b[index];
            }
        }
        else {
            if (sumb+1<=y) {
                sumb++;
                ans += b[index];
            }
            else {
                suma++;
                ans += a[index];
            }
        }
    }
    cout << ans << "\n";
    return 0;
}