#include<iostream>
#include<vector>

using namespace std;

vector<int> matrixSpiral(int a[][103], int n, int m){
	int k = 0;
	int tren = 0;
	int trai = 0;
	int phai = m-1;
	int duoi = n-1;
	vector<int> v;
	while(k < n*m){
		for(int i = trai; i <= phai; i++){
			v.push_back(a[tren][i]);
			k++;
		}
		tren++;
		if(k < n*m){
			for(int i = tren; i <= duoi; i++){
				v.push_back(a[i][phai]);
				k++;
			}
			phai--;
		}
		if(k < n*m){
			for(int i = phai; i >= trai; i--){
				v.push_back(a[duoi][i]);
				k++;
			}
			duoi--;
		}
		if(k < n*m){
			for(int i = duoi; i >= tren; i--){
				v.push_back(a[i][trai]);
				k++;
			}
			trai++;
		}
	}
	return v;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, m, k;
		cin >> n >> m >> k;
		int a[n][103];
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> a[i][j];
			}
		}
		vector<int> result = matrixSpiral(a,n,m);
		cout << result[k-1] << endl;
	}
	return 0;
}
