#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k, q = 0;
    cin >> n >> k;
    int a[n];

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int comparasion = a[k-1];

    for(int i = 0; i < n; i++) {
        if(a[i] >= comparasion && a[i] > 0) {
            q++;
        }
    }
    
    cout << q;
    return 0;
}
