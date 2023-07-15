#include<iostream>
#include<vector>

using namespace std;

vector<int> maxNumber(int m, int s){
	vector<int> v;
	int a[m] = {0};
	int n = s;
	for(int i = 0; i < m; i++){
		for(int j = 9; j >= 0; j--){
			if(n-j >= 0){
				a[i] = j;
				n = n - j;
				break;
			}
		}
		if(a[i] == 0){
			break;
		}
	}
	for(int i = 0; i < m; i++){
		v.push_back(a[i]);
	}
	return v;
}

vector<int> minNumber(int m, int s){
	vector<int> v;
	int a[m] = {0};
	int n = s;
	for(int i = m-1; i >= 0; i--){
		for(int j = 9; j >= 0; j--){
			if(n - j >= 0){
				a[i] = j;
				n = n-j;
				break;
			}
		}
		if(a[i] == 0){
			break;
		}
	}
	if(a[0] == 0){
		a[0] = 1;
		for(int i = 1; i < m; i++){
			if(a[i] != 0){
				a[i] = a[i] - 1;
				break;
			}
		}
	}
	for(int i = 0; i < m; i++){
		v.push_back(a[i]);
	}
	return v;
}

int main(){
	int m, s;
	cin >> m >> s;
	if(m == 1 && s == 0){
		cout << "0 0";
	}
	else{
		if((s > 9*m) || (s == 0)){
			cout << "-1 -1";
		}
		else{
			vector<int> minResult = minNumber(m, s);
			for(int i = 0; i < minResult.size(); i++){
				cout << minResult[i];
			}
			cout << " ";
			vector<int> maxResult = maxNumber(m, s);
			for(int i = 0; i < maxResult.size(); i++){
				cout << maxResult[i];
			}
		}
	}
	return 0;
}
