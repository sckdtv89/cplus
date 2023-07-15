#include<iostream>

using namespace std;

long long GCD(long long a, long long b){
	if(b == 0){
		return a;
	}
	return GCD(b, a%b);
}

int main(){
	int t;
	cin >> t;
	while(t > 0){
		long long a, b;
		cin >> a >> b;
		long long UCLN = GCD(a,b);
		long long BCNN = a*b;
		BCNN = BCNN/UCLN;
		cout << BCNN << " " << UCLN << endl;
		t--;
	}
	return 0;
}
