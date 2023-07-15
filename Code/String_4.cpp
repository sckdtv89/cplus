#include<iostream>

using namespace std;

int solve(string s, int k){
	int count = 0;
	for(int i = 0; i < s.length(); i++){
		int n = 0;
		for(int j = i; j < s.length(); j++){
			int c = s[j] - '0';
			n = (n*10 + c) % k;
			if(n == 0){
				count++;
			}
		}
	}
	return count;
}

int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin, s);
		cout << solve(s,8) - solve(s,24) << endl;
	}
	return 0;
}
