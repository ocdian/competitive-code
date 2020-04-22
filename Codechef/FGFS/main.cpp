/*
Algorithm:
-This problem is similar to the activity selection problem
-We always choose the activity with the earliest finish time first, so 
we have time left to the maximum number of remaining activities
-So for each compartment we store the current finish time
-And sort the customers by finish time ascendingly
-We check the current customer, if it has a start time that is >= last_finish[compartment],
then we set last_finish[compartment] to the finish time of this customer and increase answer
*/
#include <bits/stdc++.h>
using namespace std;
#define ppi pair<int,pair<int,int>> //finishTime, <startTime, compartment> 
map<int,int> last_finish;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n,k,t,x,y,z,ans;
    cin >> t;
    while (t--) {
        ans = 0;
        last_finish.clear();
        cin >> n >> k;
        vector<ppi> customers;
        for (int i=0; i < n; i++) {
            cin >> x >> y >> z;
            customers.push_back(make_pair(y,make_pair(x,z)));
        }
        sort(customers.begin(), customers.end());
        for (int i=0; i < customers.size(); i++) {
            int currentStart = customers[i].second.first;
            int currentFinish = customers[i].first;
            int currentComp = customers[i].second.second;
            if (last_finish[currentComp]<=currentStart) {
                ans++;
                last_finish[currentComp] = currentFinish;
            }
        }
        cout << ans << "\n";
    }
    
    return 0;
}