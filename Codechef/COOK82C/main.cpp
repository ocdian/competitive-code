#include <bits/stdc++.h>
using namespace std;
/*
Algorithm:
-Input numbers and sort them descendingly 
-Maintain two queues, one contains results of divisions, one contains original numbers (q1,q2)
-For each query:
    -Input query number
    -Loop from current count of queries to that number, each time, picking the larger out of q1,q2
    -Divide that larger number, pop it from its queue and add its division to q2
    -Output number after completing loop
(Note: >>1 is bit shifting, a faster method of dividing by 2)
*/
#define ll long long
ll a[1000001], temp, val;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    queue<ll> q1,q2;
    int n,m,cnt=1;
    scanf("%d %d" , &n , &m) ;
    for(int i = 0 ;i<n ;i++) scanf("%lld" , a+i) ;
    sort(a,a+n);
    for (int i=n-1; i >= 0; i--) q1.push(a[i]);
    while (m--) {
        scanf("%lld",&temp);
        for (;cnt<=temp;cnt++) {
            if (q1.front()>=q2.front()) {
                val = q1.front();
                q1.pop();
            }
            else {
                val = q2.front();
                q2.pop();
            }
            q2.push(val>>1);
        }
        cout << val << "\n";
    }
    return 0;
}