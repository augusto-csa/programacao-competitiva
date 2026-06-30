#include <bits/stdc++.h>

using namespace std;

int main() {
  int usb, file;
  vector<int> array;

  cin >> usb >> file;

  for(int i = 0; i < usb; i++) {
    int a; cin >> a;
    array.push_back(a);
  }
  
  sort(array.begin(), array.end(), std::greater<int>());

  int count = 0, sum = 0;
  for(int i = 0; i < array.size(); i++) {
    sum += array[i];
    count++;
    if(sum >= file) break;
  }
  
  cout << count << endl;
  return 0;
}