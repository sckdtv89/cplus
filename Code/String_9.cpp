#include<iostream>

using namespace std;

int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin,s);
		int maxx = 0;
		int n = s.length();
		int i = 0;
		while(i < n){
			int m = 0;
			while((i < n) && (s[i] >= '0' && s[i] <= '9')){
				int c = s[i] - '0';
				m = m*10 + c;
				i++;
			}
			i++;
			if(m > maxx){
				maxx = m;
			}
		}
		cout << maxx << endl;
	}
	return 0;
}
