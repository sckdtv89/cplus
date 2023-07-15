#include<iostream>
#include<set>

using namespace std;

int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s;
		cin >> s;
		set<char> s1;
		for(int i = 0; i < s.length(); i++){
			s1.insert(s[i]);
		}
		int n = s1.size();
		int mmax = s.length();
		for(int i = 0; i <= s.length()-n; i++){
			set<char> s2;
			for(int j = i; j < s.length(); j++){
				s2.insert(s[j]);
				int len = j-i+1;
				if(s2.size() == n){
					if(len < mmax){
						mmax = len;
					}
					break;
				}
				if(len >= mmax){
					break;
				}
			}
		}
		cout << mmax << endl;
	}
	return 0;
}
