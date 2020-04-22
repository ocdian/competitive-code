#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int m,s;
    cin >> m >> s;
    if (m*9 < s || (s==0 && m > 1)) {
        cout << -1 << " " << -1;
    }
    else if (m==1 && s < 10)  {
        cout << s << " " << s;
    }
    else {
        string a = "", b = "";
        int sum = 0;
        int temp = s;
        while (sum + 9 <= temp)
        {
            temp -= 9;
            a += '9';
        }
        int rem = temp - sum;
        if (rem != 0) a += '0'+rem;
        while (a.size() < m)
        {
            a += '0';
        }
        b = a;
        reverse(a.begin(), a.end());
        if (a[0]=='0') {
            a[0] = '1';
            for (int i=1; i < a.size(); i++) {
                if (a[i]!='0') {
                    int digit = a[i]-'0';
                    a[i] = '0'+(digit-1);
                    break;
                }
            }
        }
        cout << a << " " << b;
    }
    cout << "\n";
    return 0;
}