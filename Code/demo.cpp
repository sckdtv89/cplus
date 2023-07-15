#include<iostream>
#include<cstring>
#include<vector>

using namespace std;

vector<string> split(string str, string sep){
       char* cstr=const_cast<char*>(str.c_str());
       char* current;
       vector<std::string> arr;
       current=strtok(cstr,sep.c_str());
       while(current != NULL){
           arr.push_back(current);
           current=strtok(NULL, sep.c_str());
       }
       return arr;
}

int main(){
	int t;
	cin >> t;
	fflush(stdin);
	while(t--){
		string s;
		getline(cin, s);
		vector<string> result = split(s, " ");
		cout << result.size() << endl;
	}
	return 0;
}
