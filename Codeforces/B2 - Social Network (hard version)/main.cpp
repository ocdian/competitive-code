#include <bits/stdc++.h>
using namespace std;
map<int,int> display;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int id,n,k;
    cin >> n >> k;
    queue<int> screen;
    while (n--) {
        cin >> id;
        if (!display[id]) {
            display[id] = true;
            if (screen.size()>=k) {
                display[screen.front()] = false;
                screen.pop();
            }
            screen.push(id);
        }
    }
    cout << screen.size() << "\n";
    vector<int> out;
    while (!screen.empty()) {
        out.push_back(screen.front());
        screen.pop();
    }
    for (int i=out.size()-1; i >= 0; i--) cout << out[i] << " ";
    cout << "\n";
    return 0;
}