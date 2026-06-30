#include <bits/stdc++.h>

using namespace std;

int main(){
    int f, d, q;
    cin >> f >> d >> q;
    int cost = 0;

    for(int i = 1; i < q + 1; i++){
    	cost += i*f;
	}
    
    cost -= d;
    if(cost <= 0){
    	cout << "0";
	} else {
		cout << cost;
	}
    return 0;
}