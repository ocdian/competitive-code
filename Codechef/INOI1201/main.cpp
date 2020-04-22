#include <bits/stdc++.h>
/*
Algorithm:
-Let a,b,c be the time taken by the three tasks for each person
-Store each person in a vector as (b+c, a) pairs
-Sort that vector from largest to smallest b+c value
-Since each person will take a total a+b+c time plus the amount of time taken by each person before him on the computer
We need to let the people with the bigger b+c value go on the computer first, otherwise they'll take more time
-Loop through each person, out = max(out, ai+bi+ci + t), t += ai
-Output out 
*/
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    vector<pair<int,int>> v;
    int a,b,x=0,c,n,out=0;
    cin >> n;
    while (n--) {
        cin >> a >> b >> c;
        v.push_back(make_pair(b+c,a));
    }
    sort(v.begin(),v.end());
    for (int i=v.size()-1; i >= 0; i--) {
        out = max(out, v[i].first+v[i].second+x);
        x += v[i].second;
    }
    cout << out;
    return 0;
}