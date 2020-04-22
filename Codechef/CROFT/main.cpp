/*
Algorithm:
-First we pick a number that determines the winner. This number is equal to LaraScore - JonahScore
If this number is positive Lara wins, if it's negative Jonah wins and if it's 0 it's a tie. Each time
Lara plays this number increase by A[i], and each time Jonah plays this number decreases by B[i], let's call
that number the global score
-We pick the greedy parameter. We need to make sure that we either pick a number that will increase the global 
score, or pick a number that blocks the other user from decreasing the global score the most, so we sort the 
arrays by A[i]+B[i] descendingly, as we need the maximum value for A[i]+B[i], as this value will have the most
impact on the global score
-We alternate between players starting from Lara and pick winner based on the global score
*/
#include <bits/stdc++.h>
#define pii pair<int,int>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        multiset<pii, greater<pii>> ms;
        int n;
        cin >> n;
        int a[n], b[n];
        for (int i=0; i < n; i++) 
            cin >> a[i];
        for (int i=0; i < n; i++) {
            cin >> b[i];
            ms.insert(make_pair(a[i]+b[i],i));
        }
        int score = 0;
        int turn = 1;
        multiset<pii, greater<pii>>::iterator it;
        for (it = ms.begin(); it != ms.end(); it++) {
            pii temp = *it;
            int i = temp.second;
            if (turn) score += a[i];
            else score -= b[i];
            turn = 1 - turn;
        }
        if (score==0) cout << "Tie\n";
        else if (score > 0) cout << "First\n";
        else cout << "Second\n";
    }
    return 0;
}