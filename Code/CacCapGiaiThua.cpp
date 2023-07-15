#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;


vector<int> split(long long n){
	vector<int> result;
	while(n != 0){
		int m = n % 10;
		switch(m){
			case 2:{
				result.push_back(2);
				break;
			}
			case 3:{
				result.push_back(3);
				break;
			}
			case 4:{
				result.push_back(3);
				result.push_back(2);
				result.push_back(2); 
				break;
			}
			case 5:{
				result.push_back(5); 
				break;
			}
			case 6:{
				result.push_back(3);
				result.push_back(5); 
				break;
			}
			case 7:{
				result.push_back(7); 
				break;
			}
			case 8:{
				result.push_back(2);
				result.push_back(2);
				result.push_back(2);
				result.push_back(7);
				break;
			}
			case 9:{
				result.push_back(3);
				result.push_back(3);
				result.push_back(2);
				result.push_back(7);
				break;
			}
		}
		n = n/10;
	}
	return result;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		long long a;
		cin >> a;
		vector<int> result = split(a);
		sort(result.begin(), result.end(), greater<int>());
		for(int i = 0; i < result.size(); i++){
			cout << result[i];
		}
		cout << endl;
	}
	return 0;
}
