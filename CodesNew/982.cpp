#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> PI;
map<string,int> dic;
string str,pb[1010],eb[1010];
int main(){
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>str;
		pb[i]=str;
		dic[str]++;
	}
	for(int i=0;i<m;i++){
		cin>>str;
		eb[i]=str;
		dic[str]++;
	}
	int two=0,pbcnt=0,ebcnt=0;
	for(int i=0;i<n;i++){
		if(dic[pb[i]]==2) two++;
		else pbcnt++;
	}
	for(int i=0;i<m;i++){
		if(dic[eb[i]]==1) ebcnt++;
	}
	pbcnt+=(two+1)/2;
	ebcnt+=two/2;
	puts(pbcnt>ebcnt?"YES":"NO");
	return 0;
}