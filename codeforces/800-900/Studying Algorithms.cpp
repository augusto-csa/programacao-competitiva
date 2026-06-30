#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, x;
  cin >> n >> x;

  vector<int> array;

  for(int i = 0; i < n; i++) {
    int a; cin >> a;
    array.push_back(a);
  }

  sort(array.begin(), array.end());

  int count = 0, sum = 0;
  for(int i = 0; i < array.size(); i++){
      if(sum + array[i] <= x){
        sum += array[i];
        count++;
      } else {
        break;
      }
    }
    

  cout << count;
  return 0;
}