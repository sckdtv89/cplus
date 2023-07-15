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
		long long count = 0;
		for(int i = 0; i < s.length(); i++){
			for(int j = i; j < s.length(); j++){
				if(s[i] == s[j]){
					count ++;
				}
			}
		}
		cout << count << endl;
	}
	return 0;
}
