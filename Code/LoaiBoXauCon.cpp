#include<iostream>
#include<cstring>

using namespace std;

int main(){
	string s1, s2;
	getline(cin, s1);
	getline(cin, s2);
	int index = s1.find(s2);
	while(index != -1){
		s1.erase(index, s2.length()+1);
		index = s1.find(s2);
	}
	cout << s1 << endl;
	return 0;
}
