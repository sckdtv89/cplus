#include<iostream>

using namespace std;

int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s;
		cin >> s;
		int d[26] = {0};
		for(int i = 0; i < s.length(); i++){
			d[s[i]-97]++;
		}
		int mmax = d[0];
		for(int i = 1; i < 26; i++){
			if(d[i] > mmax){
				mmax = d[i];
			}
		}
		if(mmax <= s.length()/2){
			cout << "1";
		}
		else{
			cout << "0";
		}
//		if(s.length() % 2 == 0){
//			if(mmax <= s.length()/2){
//				cout << "1";
//			}
//			else{
//				cout << "0";
//			}
//		}
//		else{
//			if(mmax <= (s.length()/2 + 1)){
//				cout << "1";
//			}
//			else{
//				cout << "0";
//			}
//		}
		cout << endl;
	}
	return 0;
}
