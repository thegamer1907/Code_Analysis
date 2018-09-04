#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(0);
	string s;
	cin>>s;
	int l = s.length(),maxme = 0,ans;
	vector<int> pf(l);
	pf[0] = 0;
	for (int i=1;i<l;i++){
		int j = pf[i-1];
		while (j>0 && s[i] != s[j]) j = pf[j-1];
		if (s[i] == s[j]) j++;
		pf[i] = j;
		if (i!=l-1) maxme = max(maxme,pf[i]);
	}
	ans = pf[l-1];
	while (ans > maxme) ans = pf[ans-1];
	if (ans) cout<<s.substr(0,ans)<<"\n";
	else cout<<"Just a legend\n";
	return 0;
}
