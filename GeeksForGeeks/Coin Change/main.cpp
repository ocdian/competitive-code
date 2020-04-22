/*
In the recursive staircase problem, we have a staircase, we have a target step on the staircase and
we have a collection of possible steps we can take from each position. In how many ways can we reach the target
step?
For example, let's say we are at step 0 (which is the ground) and  we want to go to step 4. We can move up 
1 step, 2 steps or 3 steps. 
-For convinience, we'll consider solution(0) = 1
-We start with taking 1 step at a time, let's ask ourselves:
    -Can I reach step 1 by taking 1 step? If so, at what position should I already be? The answer is position 1-1 = 0, 
    so solution(1) += solution(0), because for each possible way to access step 0, we can move up 1 step and become at step 1.
    -Can I reach step 2 by taking 1 step? Yes, if I was at position 1. So solution(2) += solution(1)
    -Can I reach step 3 by taking 1 step? Yes, if I was at position 2. So solution(3) += solution(2)
    -Can I reach step 4 by taking 1 step? Yes, if I was at position 3. So solution(4) += solution(3)
    Now we have: solution(0) = solution(1) = solution(2) = solution(3) = solution(4) = 1
-Let's take 2 steps at a time:
    -Can I reach step 1 by taking 2 steps? No. Because 1-2 = -1 which isn't a valid position. 
    -Can I reach step 2 by taking 2 steps? Yes, if I was at position 0. So solution(2) += solution(0)
    -Can I reach step 3 by taking 2 steps? Yes, if I was at position 1. So solution(3) += solution(1)
    -Can I reach step 4 by taking 2 steps? Yes, if I was at position 2. So solution(4) += solution(2)
-We repeat for steps 3 and 4 and take the final solution for 4, which is solution(4) = 4
-In code, this can  be represented as follows:
solution[0] = 1
for each i from i to N-1 //N is the number of possible steps, stored in array A
    //j is the current target position, note that we can't access a position if we go a number of steps that is higher
    //than it, so we always loop starting from the current number of steps, as smaller steps won't be affected 
    for each j from Ai to target 
        solution[j] += solution[j-Ai]
return solution[target]
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t,n,s;
    cin >> t;
    while (t--) {
        cin >> n;
        int a[n];
        for (int i=0; i < n; i++) cin >> a[i];
        cin >> s;
        int dp[s+1];
        fill_n(dp, s+1, 0);
        dp[0] = 1;
        for (int i=0; i < n; i++) 
            for (int j=a[i]; j <= s; j++)
                dp[j] += dp[j-a[i]];
        cout << dp[s] << "\n";
    }
    return 0;
}