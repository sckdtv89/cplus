#include<iostream>
#include<cstring>
#include<sstream>
#include<vector>

using namespace std;

int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin, s);
		vector<string> v;
		string token;
		stringstream ss(s);
		while(ss >> token){
			v.push_back(token);
		}
		for(int i = v.size()-1; i >= 0; i--){
			cout << v[i] << " ";
		}
		cout << endl;
	}
	return 0;
}
