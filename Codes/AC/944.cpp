#include <bits/stdc++.h>
using namespace std;

int n, k, tk;
string s;
int i, l, r;
deque<int>q;

int main(){
	cin >> n >> k;
	cin >> s;
	//case a
	tk = k;
	int mx = 0;
	
		l = 0; r = 0;
		while(l < n){
			r = max(r, l);
			while(r < n){
				if(s[r] != 'a' && q.size() < k){q.push_back(r);}
				else if(s[r] != 'a' && q.size() >= k)break;
				r++;
			}
			mx = max(mx, r - l);
			l++;
			while(q.size() > 0){
				int x = q.front();
				if(x < l)q.pop_front();
				else break;
			}
		}
		
		
	//case b
	k = tk;
		l = 0; r = 0;
		while(l < n){
			r = max(r, l);
			while(r < n){
				if(s[r] != 'b' && q.size() < k){q.push_back(r);}
				else if(s[r] != 'b' && q.size() >= k)break;
				r++;
			}
			mx = max(mx, r - l);
			l++;
			while(q.size() > 0){
				int x = q.front();
				if(x < l)q.pop_front();
				else break;
			}
		}
	
	cout << mx << endl;
	return 0;
}