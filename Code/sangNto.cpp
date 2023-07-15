#include<iostream>
#include<vector>

using namespace std;

vector<int> sieve(int n){
	vector<int> result;
	int isPrime[n+1];
	for(int i = 0; i <= n; i++){
		isPrime[i] = true;
	}
	isPrime[0] = false;
	isPrime[1] = true;
	for(int i = 2; i*i <= n; i++){
		if(isPrime[i]){
			for(int j = i*i; j <= n; j = j+i){
				isPrime[j] = false;
			}
		}
	}
	for(int i = 2; i <= n; i++){
		if(isPrime[i]){
			result.push_back(i);
		}
	}
	return result;
}

int main(){
	int n;
	cin >> n;
	vector<int> prime = sieve(n);
	for(int i = 0; i < prime.size(); i++){
		cout << prime[i] << " ";
	}
	cout << endl;
}
