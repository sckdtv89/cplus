#include<iostream>
#include<cmath>

using namespace std;

bool isPrime(long long n){
	if(n < 2){
		return 0;
	}
	else{
		for(long long i = 2; i <= sqrt(n); i++){
			if(n % i == 0){
				return false;
			}
		}
	}
	return true;
}

int main(){
	long long a, b;
	cin >> a >> b;
	if(a > b){
		long long tmp = a;
		a = b;
		b = tmp;
	}
	for(long long i = a; i <= b; i++){
		if(isPrime(i)){
			cout << i << " ";
		}
	}
	return 0;
}
