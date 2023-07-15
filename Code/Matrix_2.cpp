#include<iostream>
#include<vector>
#include<iterator>
#include<algorithm>
#include<set>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		vector<int> ans;
		int a;
		for(int i = 0; i < n; i++){
			cin >> a;
			ans.push_back(a);
		}
		sort(ans.begin(), ans.end());
		for(int i = 0; i < n-1; i++){
			vector<int> v1;
			int tmp;
			for(int i = 0; i < n; i++){
				cin >> tmp;
				v1.push_back(tmp);
			}
			sort(v1.begin(), v1.end());
			vector<int> v = ans;
			sort(v.begin(), v.end());
			ans.erase(ans.begin(), ans.end());
			set_intersection(v.begin(), v.end(), v1.begin(), v1.end(), back_inserter(ans));
		}
		set<int> s;
		for(int i = 0; i < ans.size(); i++){
			s.insert(ans[i]);
		}
		cout << s.size() << endl;
	}
	return 0;
}
