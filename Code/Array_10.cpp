#include<iostream>
#include<stack>

using namespace std;

int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s;   
		cin >> s;
		stack<int> st;
		for(int i = 0 ; i <= s.size(); i++){
			st.push(i+1);
			if(s[i] == 'I' || i == s.size()){
				while(!st.empty()){
					cout << st.top();
					st.pop();
				}
			}
		}
		cout << endl;	
//		string result = "";
//		for(int i = 0; i <= s.length(); i++){
//			result = result + '1';
//		}
//		int i = 0;
//		int index = 0;
//		while(i < s.length()){
//			if(s[i] == 'I'){
//				char c = '0' + i + 2;
//				for(int j = i+1; j < result.length(); j++){
//					result[j] = c;
//				}
//				index = i+1;
//			}
//			else{
//				for(int j = index; j <= i; j++){
//					result[j] = result[j] + 1;
//				}
//			}
//			i++;
//		}
//		cout << result << endl;
	}
	return 0;
}
