#include<iostream>
#include<cmath>
 
using namespace std;

long long xuli1(long long n){
	int a[20];
	int i = 0;
	while(n > 0){
		a[i] = n % 10;
		n = n/10;
		i++;
	}
	for(int j = i-1; j >= 0; j--){
		if(a[j] == 6){
			n = n*10 + 5;
		}
		else{
			n = n*10 + a[j];
		}
	}
	return n;
}

long long xuli2(long long n){
	int a[20];
	int i = 0;
	while(n > 0){
		a[i] = n % 10;
		n = n/10;
		i++;
	}
	for(int j = i-1; j >= 0; j--){
		if(a[j] == 5){
			n = n*10 + 6;
		}
		else{
			n = n*10 + a[j];
		}
	}
	return n;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		long long  a,b;
		cin >> a >> b;
		cout << xuli1(a) + xuli1(b) << " ";
		cout << xuli2(a) + xuli2(b) << endl;
	}
	return 0;
}
 
