#include <bits/stdc++.h>
using namespace std;
int pos, n;
double correct,cases;
void f(int nums, int position) {
    if (nums==n) {
        cases++;
        if (position == pos) correct++;
        return;
    }
    f(nums+1, position+1);
    f(nums+1, position-1);
}
int main() {
    int initPos = 0;
    string a,b;
    cin >> a >> b;
    for (int i=0; i < a.size(); i++) {
        if (a[i]=='+') pos++;
        else pos--;
        if (b[i]=='+') initPos++;
        else if (b[i]=='-') initPos--;
        else n++;
    }
    f(0, initPos);
    double ans = correct/cases;
    cout << setprecision(12) << fixed << ans << "\n";
    return 0;
}