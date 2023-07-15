#include<iostream>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n*n];
		int total = 0;
		for(int i = 0; i < n*n; i++){
			cin >> a[i];
			total = total + a[i];
		}
		int maxx = 0;
		for(int i = 0; i < n*n; i = i+n){
			int sum = 0;
			for(int j = i; j < i+n; j++){
				sum = sum + a[j];
			}
			if(sum > maxx){
				maxx = sum;
			}
		}
		for(int i = 0; i < n; i++){
			int sum = 0;
			for(int j = i; j < n*n; j = j+n){
				sum = sum + a[j];
			}
			if(sum > maxx){
				maxx = sum;
			}
		}
		cout << maxx*n-total << endl;
	}
	return 0;
}
