#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

int main() {
    ll n, f;
    cin >> n >> f;
    vector<int> v(n);
    ll sum = 0;
    
    for(int &a : v) cin >> a;

    int left = 0;
    int right = 0;
    int maior = 0;

    sum += v[right];
    int count = 1;
    while(right < v.size()){
        if(sum <= f){
            maior = max(maior, count);
        }
        if(sum < f) {
            right++;
            sum+=v[right];
            count++;
        } else {
            sum-=v[left];
            left++;
            count--;
        }
    }

    cout << maior;
    return 0;
}