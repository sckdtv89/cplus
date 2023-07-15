#include<iostream>

using namespace std;

void matrixSpiral(int a[][103], int n, int m){
	int k = 0;
	int tren = 0;
	int trai = 0;
	int phai = m-1;
	int duoi = n-1;
	while(k < n*m){
		for(int i = trai; i <= phai; i++){
			cout << a[tren][i] << " ";
			k++;
		}
		tren++;
		if(k < n*m){
			for(int i = tren; i <= duoi; i++){
				cout << a[i][phai] << " ";
				k++;
			}
			phai--;
		}
		if(k < n*m){
			for(int i = phai; i >= trai; i--){
				cout << a[duoi][i] << " ";
				k++;
			}
			duoi--;
		}
		if(k < n*m){
			for(int i = duoi; i >= tren; i--){
				cout << a[i][trai] << " ";
				k++;
			}
			trai++;
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
		matrixSpiral(a,n,m);
		cout << endl;
	}
	return 0;
}
