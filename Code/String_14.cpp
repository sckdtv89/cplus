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
		cout << v.size() << endl;
	}
	return 0;
}
