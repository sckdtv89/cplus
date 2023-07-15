#include<iostream>

using namespace std;

bool isLuckyNumber(string s){
	if(s == "0") return false;
	int sum = 0;
	for(int i = 0; i < s.length(); i++){
		int c = s[i] - '0';
		sum += c;
	}
	if(sum % 9 == 0){
		return true;
	}
	return false;
}

int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s;
		cin >> s;
		if(isLuckyNumber(s)){
			cout << "1" << endl;
		}
		else{
			cout << "0" << endl;
		}
	}
	return 0;
}
