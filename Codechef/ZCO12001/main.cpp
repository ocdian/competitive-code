#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX(x,y,z) max(x, max(y,z))
#define MIN(x,y,z) min(x, min(y,z))
int nestingDepth, depthFirstPos, maxLength, lengthFirstPos;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n,l=0,o=0,c=0,d=0;
    cin >> n;
    for (int i=1; i <= n; i++) {
        l++;
        int x;
        cin >> x;
        if (x == 1) {
            o++;
            d++;
        }
        else {
            c++;
            if (d > nestingDepth) {
                nestingDepth = d;
                depthFirstPos = i-1;
            }
            d--;
        }
        if (o == c) {
            if (maxLength < l) {
                maxLength = l;
                lengthFirstPos = i - l + 1;
            }
            l = 0;
        }
    }
    cout << nestingDepth << " " << depthFirstPos << " " << maxLength << " " << lengthFirstPos << "\n";
    return 0;
}