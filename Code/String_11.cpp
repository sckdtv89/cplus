#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main(){	
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s1, s2;
		cin >> s1;
		cin >> s2;
		string result = s1;
		bool flag = false;
		for(int i = 0; i < s1.length(); i++){
			for(int j = i; j < s1.length(); j++){
				string tmp = s1.substr(i,j-i+1);
				string ans = tmp;
				bool check = true;
				for(int k = 0; k < s2.length(); k++){
					int index = tmp.find(s2[k]);
					if(index == -1){
						check = false;
						break;
					}
					tmp.erase(index,1);
				}
				if(check){
					flag = true;
					if(ans.length() < result.length()){
						result = ans;
					}
				}
			}
		}
		if(flag){
			cout << result << endl;
		}
		else{
			cout << "-1" << endl;
		}
	}
	return 0;
}
