#include <bits/stdc++.h>
using namespace std;
bool primes[1000010];
bool isPrime(int x) {
    for (int i=2; i <= sqrt(x); i++) {
        if (x%i==0) return false;
    }
    return true;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    for (int i=2; i <= 1000000; i++)
        if (isPrime(i)) primes[i] = true;
    int n;
    cin >> n;
    long long x;
    while (n--) {
        cin >> x;
        int s = sqrt(x);
        if (primes[s] && s == sqrt(x)) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}