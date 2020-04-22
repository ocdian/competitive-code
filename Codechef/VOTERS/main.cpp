#include <bits/stdc++.h>
using namespace std;
map<int,int> m1;
map<int,int> m2;
map<int,int> m3;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    set<int> s;
    int n1,n2,n3,x;
    cin >> n1 >> n2 >> n3;
    while (n1--) {
        cin >> x;
        s.insert(x);
        m1[x]++;
    }
    while (n2--) {
        cin >> x;
        s.insert(x);
        m2[x]++;
    }
    while (n3--) {
        cin >> x;
        s.insert(x);
        m3[x]++;
    }
    vector<int> out;
    set<int>::iterator it;
    for (it = s.begin(); it != s.end(); it++) {
        int cnt1 = m1[*it], cnt2 = m2[*it], cnt3 = m3[*it];
        if ((cnt1 > 0 && cnt2 > 0) || (cnt1 > 0 && cnt3 > 0) || (cnt2 > 0 && cnt3 > 0))
            out.push_back(*it);
    }
    cout << out.size() << "\n";
    for (int i=0; i < out.size(); i++) cout << out[i] << "\n";
    return 0;
}