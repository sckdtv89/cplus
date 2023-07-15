#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector <string> check;

int main()
{
 	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	string p = "@ptit.edu.vn";	
	string s;
	getline(cin, s);
	string ans = "";
	while(s[s.size() - 1] == ' '){
		s.erase(s.size() - 1, s.size() - 2);
	}
	for(int i = s.size()-1; i >= 0; i--){
		ans = s[i] + ans;
		if(s[i] == ' '){
			break;
		}
	}
	int tmp = ans.size();
	s = " " + s;
	for(int i = 1; i < s.size()-tmp; i++){
		if(s[i - 1] == ' ' && s[i] != ' '){
			ans = ans + s[i];
		}
	}
	if(ans[0] == ' '){
		ans.erase(0, 1);
	} 
	for(int i = 0; i < ans.size(); i++){
		if(ans[i] >= 'A' && ans[i] <= 'Z'){
			ans[i] += 32;
		} 
	}
	int dem = 1;
	for(int i = 0; i < check.size(); i++){
		if(ans == check[i]){
			dem++;
		}
	}
	if(dem != 1){
		check.push_back(ans);
		ans = ans + char(dem + 48);
	}
	else check.push_back(ans);
	cout << ans << p << endl;	
return 0;
}

