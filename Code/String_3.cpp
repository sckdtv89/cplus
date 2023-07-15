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
		long long sum = 0;
		int n = s.length();
		if(s[n-1] == '1'){
			sum = 1;
		}
		for(int i = n-2; i >= 0; i--){
			if(s[i] == '1'){
				if((n-i-2) % 4 == 0){
					sum = sum + 2;
				}
				else{
					if((n-i-2) % 4 == 1){
						sum = sum + 4;
					}
					else{
						if((n-i-2) % 4 == 2){
							sum = sum + 8;
						}
						else{
							sum = sum + 6;
						}
					}
				}
			}
		}
		if(sum % 5 == 0){
			cout << "Yes" << endl;
		}
		else{
			cout << "No" << endl;
		}
	}
	return 0;
}
