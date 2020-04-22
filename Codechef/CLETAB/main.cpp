/*
-If a customer is already seated, ignore
-otherwise increase answer:
    -if there's empty table, fill it with that person
    -if there isn't remove person with the maximum distance from the current position (furthest in the future)
    and replace them with current customer
*/
#include <bits/stdc++.h>
using namespace std;
int last_request[401];
bool isSitting[401];
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n,m, ans = 0, it = 0;
        cin >> n >> m;
        int customers[m], tables[n];
        for (int i=0; i < m; i++) {
            cin >> customers[i];
            last_request[customers[i]] = i;
            isSitting[customers[i]] = false;
        }
        for (int i=0; i < m; i++) {
            int currentCustomer = customers[i];
            if (isSitting[currentCustomer]) continue;
            ans++;
            isSitting[currentCustomer] = true;
            if (it < n) {
                tables[it] = currentCustomer;
                it++;
            }
            else {
                bool evicted = false;
                for (int it = 0; it < n; it++) {
                    int sittingCustomer = tables[it];
                    if (last_request[sittingCustomer]<i) {
                        evicted = true;
                        isSitting[sittingCustomer] = false;
                        tables[it] = currentCustomer;
                        break;
                    }
                }
                if (!evicted) {
                    int max_dist = -1, delPos = -1;
                    for (int it = 0; it < n; it++) {
                        int sittingCustomer = tables[it];
                        //get the furthest in the future, the person with the furthest request
                        //is NOT the same as furthest in the future, so we can't use last_request, which means this commented
                        //code is wrong. We instead need to find the furthest order from our current order
                        /*
                        if (max_dist < last_request[sittingCustomer]) {
                            max_dist = last_request[sittingCustomer];
                            delPos = it;
                        }
                        */
                        int currentDist = 0;
                        for (int pos = i+1; pos < m; pos++) {
                            if (customers[pos]==sittingCustomer) break;
                            else currentDist++;
                        }
                        if (currentDist>max_dist) {
                            max_dist = currentDist;
                            delPos = it;
                        }
                    }
                    int delPer = tables[delPos];
                    isSitting[delPer] = false;
                    tables[delPos] = currentCustomer;
                } 
            }
        }
        cout << ans << "\n";
    }
    return 0;
}
/*
Algorithm:
-This problem is an application of the optimal caching algorithm, which is as follows:
In a computer, we have two types of memory: large or small. It's always faster to obtain data
from the smaller memory (let's call it the cache), but the cache can't hold all the data that
might be requested in the future. Suppose we have a list of the data that will be requested. 
If data is requested and it already exists in the cache, then no problem. otherwise if it doesn't
already exist in the cache, we need to store it. If there's empty space, we store it there, otherwise
we have to replace it with one of the existing data in the cache.
So we know that we waste the least time when requested data is already in the cache, so it makes sense
to try to keep the data with the largest amount of future requests always existing in the cache. So when we need
to store data in the cache and there's no space, we need to avoid evicting the data that will be requested again in
the near future and instead replace with the data that is not needed until the furthest point of the future, i.e. the
data requested in the furthest point in the future.  
How does this apply to this problem?
We have tables. The tables are like the cache, and customers which are like the data. The lists of orders are
similar to the list of requests. We need to put customers on a limited amount of tables, if a customer orders and is already
seated then we don't need to clean, otherwise we need to put him on a table and clean it. So to minimize the number of times
we need to clean, we have to make sure the customers who order again in the near future are always already seated, so when someone 
who isn't already seated shows up and there's no space, we always replace him with the seated customer who is the last one
to order again (maybe even doesn't order again). In other words, we need to find the customer who has the furthest order from
the current customer, and evict him. Note that we don't replace with the person with the furthest LAST order, but
rather with the person with the furthest current order from now, i.e. the person with the maximum distance from the current
position. 
Replacing with the person who orders less in the future is not correct, even if the customer who orders last has a larger number 
of requests in the future than a person who ordered before him it would still be optimal to replace him. This example proves this:
1
2 10
1 2 3 1 3 1 3 1 3 2 2 2 2 2
Replacing the customer who orders less times in the future:
–
1-
12
32
12
32
12
32
12
32
That's 9 cleaning jobs.
Optimal approach (replacing with customer who orders last in the future, 2):
–
1- (cleaned 1 time)
12 (cleaned 2 times)
13 (cleaned 3 times)
13
13
13
23 (cleaned 4 times)
23
23
23
23
Thats just 4 jobs.
Note: This algorithm is also known as furthest in the future, which, when we need to evict, always evicts the data
which is requested in the furthest point of the future because we won't need it again until later in the future,
while replacing with data that is closer to the current time will not be optimal, because we'll need to add it again
when it's requested. 
*/
