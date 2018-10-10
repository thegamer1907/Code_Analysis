#include <bits/stdc++.h>
using namespace std;
const int N = 1e6 + 1;
string s;
int z[N],l,r;
void no(){puts("Just a legend");exit(0);}
int main(){
// 	freopen("readin.txt","r",stdin);
	cin >> s;
	for(int i = 1;i < s.size();i++)
		if(r < i){
			l = r = i;
			while(r < s.size() && s[r] == s[r - l])r++;
			z[i] = r - l;
			r--;
		}
		else{
			int x = i + z[i - l];
			if(x > r){
				l = i;
				while(r && s[r] == s[r - l])r++;
				z[i] = r - l;
				r--;
			}
			else z[i] = z[i - l];
		}
	int mx = 0,had = 0;
	for(int i = 1;i < s.size();i++){
		if(i + z[i] == s.size() && had >= z[i])mx = max(mx,min(had,z[i]));
		had = max(had,z[i]);
	}
	if(!mx)no();
	cout << s.substr(s.size() - mx,mx) << endl;
}