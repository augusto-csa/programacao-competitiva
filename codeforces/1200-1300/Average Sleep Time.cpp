#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll n, k; cin >> n >> k;

    cout << fixed << setprecision(6);

    vector<ll> v(n);

    for(auto &a : v) cin >> a;

    ll quo = n - k + 1;
    
    if(n == 1){
        cout << (double) v[0]/quo;
        return 0;
    }
    
    ll sum = 0;
    ll left = 0, right = k-1;
    for(int i = 0; i < k; i++){
        sum += v[i];
    }

    ll sumAux = sum;
    while(right < n){
        if(right+1 < n){
            right++;
            sumAux+= v[right];
        } else {
            break;
        }
        sumAux-=v[left];
        left++;
        sum+=sumAux;
    }

    cout << (double) sum/quo;
    
    return 0;
}
