#include<iostream>

using namespace std;

int mergeNumber(int n){
	int result = 0;
	while(n > 0){
		result += n % 10;
		n = n/10;
	}
	return result;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		while(n >= 10){
			n = mergeNumber(n);
		}
		cout << n << endl;
	}
	return 0;
}
