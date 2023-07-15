#include<iostream>
#include<cstring>
#include<stack>

using namespace std;

int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s;
		cin >> s;
		stack<char> st;
		int i = 0;
		int mmax = 0;
		while(i < s.length()){
			int m = 0;
			if(s[i] == '1' || st.top() == '1' || st.empty()){
				st.push(s[i]);
				i++;
			}
			else{
				while(st.size() > 1 && i < s.length() && s[i] == '0'){
					m = m + 3;
					st.pop();
					st.pop();
					i++;
				}
			}
			if(m > mmax){
				mmax = m;
			}
		}
		cout << mmax << endl;
	}
	return 0;
}
