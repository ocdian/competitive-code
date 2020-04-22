#include <bits/stdc++.h>
using namespace std;
/*
-Special Sum for (i,j) is calculated as follows:
    -If i==j, ss(i,j) = a[i]
    -If i < j, ss(i,j) = a[i] + a[j] + pre[j-1] - pre[i] = (a[i]-pre[i]) + a[j] + pre[j-1]
    -If i > j, ss(i,j) = pre[j-1] + a[j] + a[i] + suffix[i+1] = (a[i]+suffix[i+1]) + a[j] + pre[j-1]
Suppose we already have the term inside the parentheses maximized, then we only need to loop through every possible 
j and compare it with current max output
How do we maximimize this term? For (a[i]-pre[i]), let diff[i] = max(diff[i-1], a[i] - pre[i]), this way we guarantee that
every i stores the maximum difference found up to index i, and so we can access that maximum value using diff[j-1], which is
the maximum value i can be in case i < j
For (a[i]+suffix[i+1]), let maxsuffix[i] = max(maxsuffix[i+1], a[i]+suffix[i+1]), this way we guarantee that every i stores
the largest suffix reached so far, and so we can access the maximum value for (a[i]+suffix[i+1]) using suffix[j+1], which stores
the maximum suffix for each i that is larger than j
-Output the maximum value reached 
*/
#define ll long long
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    ll out = INT_MIN, a[n+1], b[n+1], suffix[n+1], pre[n+1], diff[n+1], maxSuffix[n+1];
    pre[0] = 0;
    diff[0] = INT_MIN;
    for (int i=1; i <= n; i++) { 
        cin >> a[i];
        out = max(out, a[i]);
    }
    for (int i=1; i <= n; i++) {
        cin >> b[i];
        pre[i] = pre[i-1] + b[i];
        diff[i] = max(diff[i-1], a[i]-pre[i]);
    }
    suffix[n] = maxSuffix[n] = b[n];
    for (int i=n-1; i>=1; i--) { 
        maxSuffix[i] = max(maxSuffix[i+1], a[i]+suffix[i+1]);
        suffix[i] = suffix[i+1] + b[i];
    }
    for (int j=2; j <= n; j++) out = max(out, diff[j-1]+a[j]+pre[j-1]); 
    for (int j=1; j < n; j++) out = max(out, maxSuffix[j+1]+a[j]+pre[j-1]);
    cout << out << "\n";
    return 0;
}