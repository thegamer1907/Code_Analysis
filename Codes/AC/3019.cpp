#include <iostream>
#include <vector>
using namespace std;
 
 
  vector<int> zfunction(string s){
	vector<int> z(s.size());
	for(int i = 1, l = 0, r = 0; i < s.size(); i++){
		//i > r -> no match
		if(i > r){
			l = r = i;
			while(r < s.size() && s[r-l] == s[r])
				r++;
			z[i] = r-l;
			r--;
		}
		else{
			int k = i - l;
			if(z[k] < r-i+1)
				z[i] = z[k];
			else{
				l = i;
				while(r < s.size() && s[r-l] == s[r])
					r++;
				z[i] = r-l;
				r--;
			}
		}
	}
	return move(z);
}
 
int main() {
	cin.tie(0);
	cin.sync_with_stdio(0);
	string s;
	cin >> s;
	vector<int> z = zfunction(s);
	vector<vector<int>> occ(s.size()+1);
	for(int i = 0; i < z.size(); i++)
		occ[z[i]].push_back(i);
	int best = -1;
	for(int i = z.size(), ok = 0; i >= 1; i--){
		for(int index : occ[i]){
			if(index + i == s.size())
				if(ok || occ[i].size() > 1){
					best = index;
					i = 0;
					break;
				}
			ok = 1;
		}
	}
	if(best == -1)
		cout << "Just a legend";
	else
		for(int i = 0; i < z[best]; i++)
			cout << s[i];
	return 0;
}