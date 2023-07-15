#include<iostream>
#include<sstream>
#include<cstring>
#include<vector>

using namespace std;

int main(){
	string s;
	getline(cin, s);
	vector<string> v;
	stringstream ss(s);
	string token;
	while(ss >> token){
		v.push_back(token);
	}
	cout << v.size() << endl;
	for(int i = 0; i < v.size(); i++){
		cout << v[i] << " ";
	}
	
	return 0;
}
