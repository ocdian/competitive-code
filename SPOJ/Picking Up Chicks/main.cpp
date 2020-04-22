/*
Algorithms:
-We first check if it's possible for k chicks to reach the barn in time. 
-We can find the position of each chick after t seconds by using the function: f(x) = vt + x (x is the initial position, 
f(x) is the final position)
-We check the number of chicks that can reach the end, if that number is larger than or equal to k, we continue, 
otherwise we stop and print impossible
-Next, we start iterating. Each time a fast chicks finds a slow chicks, it will have to slow down and follow the speed of
the slow one, thus decreasing the number of chicks that arrive. So, whenever a chick that can make it to the barn catches up
to a chick that can't, we need to swap them, so we increase the answer.
-Output the answer
-Note: we iterate from the last chick, because if we iterate from the start, we might find chicks that can't finish
and increase the number of swaps, while there's no need to do that because the fast chick is the last one, so we
only increase the number of swaps when we encounter a fast chick, because we might not need to increase them at all
Consider this example, we have 4 chicks, the first three can't finish and the last one can
If we increase swaps everytime we encounter a slow chick, and add that number to the total answer when we reach 
the last chick we get a total answer of 3
While if we iterate from the end, we'll have a total answer of 0
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t, caseNum=0;
    cin >> t;
    while (t--) {
        int v,chicks, reqChicks, barnPos, time,numOfChicks=0;
        cin >> chicks >> reqChicks >> barnPos >> time;
        int x[chicks], canFinish[chicks];
        for (int i=0; i < chicks; i++) cin >> x[i];
        for (int i=0; i < chicks; i++) {
            cin >> v;
            if (((v*time)+x[i])>=barnPos) {
                numOfChicks++;
                canFinish[i] = 1;
            }
            else canFinish[i] = 0;
        }
        cout << "Case #" << ++caseNum << ": ";
        if (numOfChicks < reqChicks) {
            cout << "IMPOSSIBLE\n";
            continue;
        }
        numOfChicks = 0;
        int ans = 0, swaps = 0;
        for (int i=chicks-1; i >= 0; i--) {
            if (canFinish[i]) {
                ans += swaps;
                numOfChicks++;
            }
            else swaps++;
            if (numOfChicks==reqChicks) {
                cout << ans << "\n";
                break;
            }
        }
    }    
    return 0;
} 