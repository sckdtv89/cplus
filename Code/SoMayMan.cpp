#include<iostream>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		long long n;
		cin >> n;
		if(n % 100 == 86){
			cout << "1";
		}
		else{
			cout << "0";
		}
		cout << endl;
	}
	return 0;
}
