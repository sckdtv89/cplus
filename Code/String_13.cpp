#include<iostream>
#include<set>

using namespace std;

int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s;
		int k;
		cin >> s;
		cin >> k;
		int count = 0;
		for(int i = 0; i < s.length(); i++){
			set<char> s1;
			for(int j = i; j < s.length(); j++){
				s1.insert(s[j]);
				if(s1.size() == k){
					count++;
				}
				else{
					if(s1.size() > k){
						break;
					}
				}
			}
		}
		cout << count << endl;
	}
	return 0;
}
