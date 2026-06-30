#include <bits/stdc++.h>

using namespace std;

int main() {
  int t; cin >> t;

  while(t--){
    int n; cin >> n;
    vector<int> candies(n);

    for(int i = 0; i < n; i++){
      cin>>candies[i];
    }

    sort(candies.begin(), candies.end());
    
    int menor = candies[0];
    int sum = 0;

    for(int i = 1; i < n; i++){
      sum += abs(candies[i] - menor);
    }

    cout << sum << "\n";
  }

  return 0;
}