#include<bits/stdc++.h>

#define fi first
#define se second
#define pb push_back

using namespace std;

typedef long long ll;
typedef pair<int,int>ii;
typedef pair<int,ii> iii;
typedef pair<ii,ii>iiii;

int dua[30],ans[205];
set<int>ls[205][20];
string suf[205],pre[205];

string getSuf(string x){
	string ret="";
	for(int i = (int)(x.length())-1;i>=0;i--){
		if(ret.length()==20)break;
		ret=x[i]+ret;
	}
	return ret;
}

string getPre(string x){
	string ret="";
	for(int i = 0;i<(int)x.length();i++){
		if(i==20)break;
		ret+=x[i];
	}
	return ret;
}

void solve(string s,int idx,int fr){
	int mx=s.length();
	mx=min(mx,10);
	for(int i = fr;i<=mx;i++){
		int r=i,l=0;
		int now=0;
		for(int j=0;j<r;j++){
			now*=2;now+=s[j]-'0';
		}
		
		ls[idx][i].insert(now);
		
		while(r<(int)s.length()){
			now-=dua[i-1]*(s[l]-'0');
			now*=2;now+=s[r]-'0';
			l++;r++;
			ls[idx][i].insert(now);
		}
	}
}

int main(){
	dua[0]=1;for(int i = 1;i<30;i++)dua[i]=dua[i-1]*2;
	int n;cin>>n;
	vector<string>ar;
	
	memset(ans,0,sizeof ans);
	
	for(int i = 0;i<n;i++){
		string a;cin>>a;
		ar.pb(a);solve(a,i,1);
		
		for(int j =10;j>=1;j--){
			if(dua[j]==(int)ls[i][j].size()){
				ans[i]=j;
				break;
			}
		}
		
		suf[i]=getSuf(a);
		pre[i]=getPre(a);
	}
	
	int m;cin>>m;
	for(int i = n;i<m+n;i++){
		int a,b;cin>>a>>b;a--;b--;
		int mx=max(ans[a],ans[b]);
		
		string nx=suf[a]+pre[b];
		
		if(ar[a].length()+ar[b].length()<=300){
			string temp=ar[a]+ar[b];
			suf[i]=getSuf(temp);
			pre[i]=getPre(temp);
			ar.pb(temp);
		}else{
			suf[i]=suf[b];
			pre[i]=pre[a];
			if(ar[a].length()>ar[b].length())ar.pb(ar[a]);
			else ar.pb(ar[b]);
		}
		
		int sz=i;
				
		for(int j=mx+1;j<=10;j++){
			set<int> &tmp=ls[sz][j];
			for(set<int>::iterator it=ls[a][j].begin();it!=ls[a][j].end();it++){
				tmp.insert(*it);
			}
			for(set<int>::iterator it=ls[b][j].begin();it!=ls[b][j].end();it++){
				tmp.insert(*it);
			}
		}
		
		
		solve(nx,sz,1);
		ans[sz]=mx;
		for(int j = 10;j>mx;j--){
			if(dua[j]==ls[sz][j].size()){
				ans[sz]=j;
				break;
			}
		}
		
		cout<<ans[sz]<<endl;
		
	}
	
}
