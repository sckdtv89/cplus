#include<iostream>

using namespace std;

long long GCD(long long a, long long b){
	if(b == 0){
		return a;
	}
	return GCD(b, a%b);
}

long long LCM(long long a, long long b){
	long long UCLN = GCD(a,b);
	long long result = a*b/UCLN;
	return result;
}

int main(){
	int t;
	cin >> t;
	while(t > 0){
		int n;
		cin >> n;
		long long result = 1;
		for(int i = 1; i <= n; i++){
			result = LCM(result, i);
		}
		cout << result << endl;
		t--;
	}
	return 0;
}
