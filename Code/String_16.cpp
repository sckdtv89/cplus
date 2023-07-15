#include <iostream>

using namespace std;

long long C[23][23];

int main(){
	for(int i = 0 ; i <= 22; i++){
		for(int j = 0 ; j <= i; j++){
			if(j == 0 || j == i){
				C[i][j] = 1;
			}	
			else{
				C[i][j] = (C[i-1][j-1] + C[i-1][j]);
			}	
		}	
	}	
	int t;
	cin >> t;
	while(t--){
		int n, r, b, g;
		cin >> n >> r >> b >> g;
		int k = n - (r + b + g);
		long long ans = 0;
		for(int i = 0; i <= k; i++){
			for(int j = 0; j <= k-i; j++){
				ans = ans + C[n][r+i]*C[n-r-i][b+j];
			}
		}
		cout << ans << endl;
	}
	return 0;
}

