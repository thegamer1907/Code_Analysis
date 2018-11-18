/*input
5
01
10
101
11111
0
3
1 2
6 5
4 4
*/
#include <bits/stdc++.h>
using namespace std;
bitset<1055> bs[205][12];
string s[205];
pair<string,string> p[205];
int main(){
	ios_base::sync_with_stdio(0);
	int n,m;

	cin>>n;
	for(int i=1;i<=n;++i){
		cin>>s[i];
		bs[i][0] = 1;
		for(int x=0;x<s[i].size();++x)
			for(int y=x,run=0;y<s[i].size();++y){
				run=run*2 + s[i][y]-'0';
				if(y-x+1<11)
					bs[i][y-x+1].set(run);
				else break;
			}
		
		p[i].first = s[i].substr(0,15);
		p[i].second = s[i].substr(max(0,(int)s[i].size()-15),15);
	}

	cin>>m;
	for(int q=n,l,r;++q<=n+m && cin>>l>>r;){
		for(int i=0;i<11;++i) bs[q][i]=bs[l][i]|bs[r][i];
		s[q]=p[l].second + p[r].first;
		for(int x=0;x<s[q].size();++x){
			for(int y=x,run=0;y<s[q].size();++y){
				run=run*2 + s[q][y]-'0';
				if(y-x+1<11)
					bs[q][y-x+1].set(run);
				else break;
			}
		}

		if(p[l].first.size()<15){
			string tmp = s[l] + p[r].first;
			p[q].first = tmp.substr(0,15);
		} else p[q].first = p[l].first;

		if(p[r].second.size()<15){
			string tmp = p[l].second + s[r];
			p[q].second = tmp.substr(max(0,(int)tmp.size()-15),15);
		} else p[q].second = p[r].second;

		for(int i=11;i--;) 
			if(bs[q][i].count()==1<<i){
				cout<<i<<'\n';
				goto end;
		}
		cout<<"lol\n";
		end:;
	}
}