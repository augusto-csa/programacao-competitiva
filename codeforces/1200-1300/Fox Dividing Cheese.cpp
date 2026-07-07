// https://codeforces.com/contest/371/problem/B

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl '\n'
#define pb push_back

ll test(ll a, ll x){
    if(a % 2 == 0 && (a/2)%x==0) return a/2;
    else if(a % 3 == 0 && (a/3)%x==0) return a/3;
    else if(a % 5 == 0 && (a/5)%x==0) return a/5;
    else return -1;
}

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);

    ll a, b; cin >> a >> b;

    if(a == b){
        cout << 0;
        return 0;
    }
    
    ll x = gcd(a, b);
    
    ll count = 0;
    while(a != x || b != x){
        if(a!=x){
            a = test(a, x);
            count++;
        }
        if(b != x){
            b = test(b, x);
            count++;
        }

        if(a == -1 || b == -1){
            cout << -1;
            return 0;
        }
    }
    cout << count;
    
    return 0;
}
