#include<iostream>
#include<cstring>
#include<algorithm>

using namespace std;


int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin, s);
		int sum = 0;
		sort(s.begin(), s.end());
		for(int i = 0; i < s.length(); i++){
			if(s[i] >= '0' && s[i] <= '9'){
				sum = sum + (s[i] - '0');
			}
			else{
				cout << s[i];
			}
		}
		cout << sum << endl;
	}
	return 0;
}
