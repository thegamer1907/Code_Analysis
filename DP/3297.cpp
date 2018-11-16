#include<bits/stdc++.h>
using namespace std;

void build_failure(string &x, int *fa){
	int i = 0;
	int j = 1;
	fa[0] = 0;
	while(j<x.size()){
		if(x[i] == x[j]) {
			fa[j] = i+1;
			i++;
			j++;
		}
		else if(i!=0){
			i = fa[i-1];
		}
		else{
			fa[j] = 0;
			j++;
		}
	}
	return;
}

string s;
string srev;
int fa1[1000005], fa2[1000005];

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> s;
	srev = s;
	reverse(srev.begin(),srev.end());
	build_failure(s,fa1);
	build_failure(srev,fa2);
//	for(int i=0;i<s.size();i++) printf("%d ",fa1[i]);
//	printf("\n");
//	cout << srev << endl;
	reverse(fa2,fa2+s.size());
//	for(int i=0;i<s.size();i++) printf("%d ",fa2[i]);
//	printf("\n");
	int ans = 0;
	for(int i=1;i<s.size()-1;i++){
		if(fa1[i]==0) continue;
		if(fa1[i] == fa2[i-fa1[i]+1]) ans = max(ans,fa1[i]);
	}
//	printf("%d\n",ans);
	for(int i=0;i<ans;i++) cout << s[i];
	if(ans == 0) cout << "Just a legend";
	cout << endl;
	return 0;
}
