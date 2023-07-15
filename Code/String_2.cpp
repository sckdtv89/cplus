#include<iostream>
#include<cstring>

using namespace std;

int main(){
	int t;
	cin >> t;
	fflush(stdin);
	while(t--){
		string s;
		cin >> s;
		long long s1 = 0, s2 = 0;
		for(int i = 0; i < s.length(); i++){
			if(i % 2 == 0){
				s1 += s[i]-'0';
			}
			else{
				s2 += s[i]-'0';
			}
		}
		if((s2-s1) % 11 == 0){
			cout << "1" << endl;
		}
		else{
			cout << "0" << endl;
		}
	}
	return 0;
}
