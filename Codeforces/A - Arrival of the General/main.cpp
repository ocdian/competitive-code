#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n,minI = 0,maxI=0;
    cin >> n;
    vector<int> a(n);
    for (int i=0; i < n; i++) {
        cin >> a[i];
        if (a[i]<=a[minI]) minI = i; 
    }  
    int t = 0;
    for (int i=minI; i < n-1; i++) {
        int temp = a[i+1];
        a[i+1] = a[i];
        a[i] = temp;
        t++;
    }
    for (int i=0; i < n; i++) {
        if (a[i]>a[maxI]) maxI = i;
    }
    
    cout << maxI + t << "\n";
    return 0;
}