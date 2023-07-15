#include<iostream>
#include<cstring>
#include<sstream>
#include<vector>

using namespace std;

int main(){
	string s;
	getline(cin, s);
	for(int i = 0; i < s.length(); i++){
		s[i] = tolower(s[i]);
	}
	vector<string> v;
	string token;
	stringstream ss(s);
	while(ss >> token){
		v.push_back(token);
	}
	for(int i = 0; i < v.size()-1; i++){
		if(v[i][0] >= 'a' && v[i][0] <= 'z'){
			v[i][0] = v[i][0] - 32;
		}
	}
	for(int i = 0; i < v[v.size()-1].length(); i++){
		v[v.size()-1][i] = v[v.size()-1][i] - 32;
	}
	for(int i = 0; i < v.size()-1; i++){
		if(i == v.size()-2){
			cout << v[i] << ", ";
		}
		else{
			cout << v[i] << " ";
		}
	}
	cout << v[v.size()-1];
	return 0;
}
