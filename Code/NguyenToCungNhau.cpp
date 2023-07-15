#include<iostream>
#include<cmath>

using namespace std;

int GCD(int a, int b){
	if(b == 0) return a;
	return GCD(b, a%b);
}

bool isPrime(int n){
	if(n < 2) return false;
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0) return false;
	}
	return true;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int x;
		cin >> x;
		int count = 0;
		for(int i = 1; i <= x; i++){
			if(GCD(i,x) == 1){
				count++;
			}
		}
		if(isPrime(count)){
			cout << "1" << endl;
		}
		else{
			cout << "0" << endl;
		}
	}
	return 0;
}
