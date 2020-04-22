#include <bits/stdc++.h>
#define pii pair<int,int> 
using namespace std;
//s[i]/e[i] is invalid when equal to INT_MAX
int s[1000001]; //s[i] stores the largest number less than or equal to i, during which v is open
int e[1000001]; //e[i] stores the smallest number, larger than or equal to i, during which w is open
bool v[1000001]; //v[i] is true if the v wormhole is open at time i
bool w[1000001]; //w[i] is true if the w wormhole is open at time i
int maxS, maxE; //largest start time, largest finish time
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int out = INT_MAX; //output
    vector<pii> contests; //stores start time and finish time for each contest
    int n,x,y; //number of contests, number of v times, number of w times
    cin >> n >> x >> y;
    for (int i=0; i < n; i++) {
        int u,v; //start time, finish time for current contest
        cin >> u >> v;
        contests.push_back(make_pair(u,v));
        maxS = max(maxS, u);
        maxE = max(maxE, v);
    }
    //set current value for e[maxE] as invalid, as we didn't test it yet
    e[maxE] = INT_MAX;
    while (x--) {
        int vi;
        cin >> vi;
        v[vi] = true;
    }
    while (y--) {
        int wi;
        cin >> wi;
        w[wi] = true;
        if (wi>=maxE) e[maxE] = min(e[maxE],wi); //update e[maxE] during input
        //to store the smallest time that is larger than maxE during which w is open
    }
    //if v is open at time 1, then s[1] = 1, otherwise s[1] = INT_MAX (invalid)
    s[1] = (v[1]) ? 1:INT_MAX;
    //for each possible start time i in range [i,maxS], s[i] is i if v is open at time i
    //otherwise s[i] = s[i-1]; 
    for (int i=2; i <= maxS; i++) s[i] = (v[i]) ? i:s[i-1];
    //for each possible end time i in range [maxE-1,1] , e[i] is i if w is open at time i
    //otherwise e[i] = e[i+1]
    for (int i=maxE-1; i >= 1; i--) e[i] = (w[i]) ? i:e[i+1];
    //for each contest, find out the least amount of time needed to participate in that contest
    //to do that, find the largest time instance less than or equal to the start time of the current
    //contest (same as s[i]), and find the smallest time instance larger than or equal to the end time 
    //of the current contest (same as e[i]), the answer will be the difference between those two values
    //(e[endTime]-s[startTime]+1), and the final output is the least time taken by a contest
    for (int i=0; i < n; i++) {
        int start = contests[i].first;
        int end = contests[i].second;
        //if there exists a time during which v is open and a time during which w is opened
        //that can be used to go to the current contest, update the final output
        if (s[start]!=INT_MAX && e[end]!=INT_MAX)
            out = min(out, e[end]-s[start]+1);
    } 
    cout << out << "\n";
    return 0;
}