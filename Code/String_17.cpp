#include<iostream>
#include<cstring>

using namespace std;

int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin, s);
		while(s.length() > 0){
			char c = s[0];
			s = s.erase(0, 1);
			int count = 1;
			int index = s.find(c);
			while(s.length() > 0 && index >= 0){
				count++;
				s = s.erase(index, 1);
				index = s.find(c);
			}
			if(count == 1){
				cout << c;
			}
		}
		cout << endl;
	}
	return 0; 
}
