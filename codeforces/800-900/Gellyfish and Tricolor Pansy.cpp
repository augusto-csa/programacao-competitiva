#include<bits/stdc++.h>

typedef long long ll;
using namespace std;

int main(int argc, char** argv) {
	int n; cin >> n;
	vector<string> v;
	for(int i = 0; i < n; i++){
		ll gellyfishHp; cin >> gellyfishHp;
		ll florHp; cin >> florHp;
		ll gellyfishKnightHp; cin >> gellyfishKnightHp;
		ll florKnightHp; cin >> florKnightHp;
		int menorGelly;
		int menorFlor;
		
		if (florKnightHp <= florHp){
			menorFlor = florKnightHp;
		} else {
			menorFlor = florHp;
		}
		if(gellyfishKnightHp <= gellyfishHp){
			menorGelly = gellyfishKnightHp;
		} else {
			menorGelly = gellyfishHp;
		}
		
		if(menorFlor > menorGelly){
			v.push_back("Flower");
		} else {
			v.push_back("Gellyfish");
		}
	}
	
	for(int i = 0; i < n; i++){
		cout << v[i] << endl;
	}
}
