#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool prime(int n){
    if(n < 2) return false;
    for(int i = 2; i * i <= n; i++){
        if(n % i == 0) return false;
    }
    return true;
}

int main() {
    ll n, k; cin >> n >> k;
    vector<ll> primes;
    for(int i = 0; i <= n; i++){
        if(prime(i)) primes.push_back(i);
    }
    unordered_set<ll> s(primes.begin(), primes.end());

    ll count = 0;
    for(int i = 0; i < primes.size()-1; i++){
        ll soma = primes[i] + primes[i+1] + 1;
        if(s.count(soma)) count++;
    }

    if(count >= k){
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}
