#include<iostream>

using namespace std;

void twirlMatrix(int a[][103], int n, int m){
	int b[n][m];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			b[i][j] = a[i][j];
		}
	}
	int tren = 0;
	int trai = 0;
	int phai = m-1;
	int duoi = n-1;
	while(tren < duoi && trai < phai){
		for(int i = trai+1; i <= phai; i++){
			b[tren][i] = a[tren][i-1];
		}
		for(int i = tren+1; i <= duoi; i++){
			b[i][phai] = a[i-1][phai];
		}
		for(int i = phai-1; i >= trai; i--){
			b[duoi][i] = a[duoi][i+1];
		}
		for(int i = duoi - 1; i >= tren; i--){
			b[i][trai] = a[i+1][trai];
		}
		tren++;
		trai++;
		phai--;
		duoi--;
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cout << b[i][j] << " ";
		}
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, m;
		cin >> n >> m;
		int a[n][103];
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> a[i][j];
			}
		}
		twirlMatrix(a, n , m);
		cout << endl;
	}
	return 0;
}
