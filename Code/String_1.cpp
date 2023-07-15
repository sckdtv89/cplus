#include<iostream>
#include<cstring>

using namespace std;

int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s;
		cin >> s;
		int k;
		cin >> k;
		int a[30] = {0};
		for(int i = 0; i < s.length(); i++){
			if(s[i] >= 'a' && s[i] <= 'z'){
				a[s[i]-97]++;
			}
		}
		int count = 0;
		for(int i = 0; i < 26; i++){
			if(a[i]){
				count++;
			}
		}
		if(s.length() < 26){
			cout << "0" << endl;
		}
		else{
			if(count + k >= 26){
				cout << "1" << endl;
			}
			else{
				cout << "0" << endl;
			}
		}
	}
	return 0;
}
