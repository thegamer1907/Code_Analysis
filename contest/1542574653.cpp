#include<bits/stdc++.h>
using namespace std;
const int maxk=11;
int toInt(string s){
	int x=0;
	for(int i=0;i<s.length();i++)
		x=x<<1|(s[i]-'0');
	return x;
}
struct Info{
	string pre,suf;
	bool sep;
	set<int>S[maxk];
	int mxk;
	Info(){
		sep=0;
	}
	Info(string s){
		pre=s;sep=0;
		mxk=0;
		suf="";
		
		for(int l=1;l<maxk;l++){
			S[l].clear();
			for(int i=0;i+l<=s.length();i++){
				S[l].insert(toInt(s.substr(i,l)));
			}
			if(S[l].size()==(1<<l)){
				mxk=l;
			}
		}
	}

	void print(){
		cerr<<"pre="<<pre<<endl;
		cerr<<"suf="<<suf<<endl;
		cerr<<"sep="<<sep<<endl;
		cerr<<"mxk="<<mxk<<endl;
	}
}str[222];

bool fixpre(string &s){
	if(s.length()>maxk){
		s=s.substr(0,maxk);
		return true;
	}
	return false;
}
bool fixsuf(string &s){
	if(s.length()>maxk){
		s=s.substr(s.length()-maxk,maxk);
		return true;
	}
	return false;
}

void mergeTo(Info &ls,Info &rs,Info &ans){
	
	string mid=ls.suf+rs.pre;
	if(!ls.sep)mid=ls.pre+mid;
	if(!rs.sep)mid=mid+rs.suf;

	if(ls.sep&&rs.sep){
		ans.pre=ls.pre;
		ans.suf=rs.suf;
		ans.sep=1;
	}else if(ls.sep){
		ans.pre=ls.pre;
		ans.suf=ls.suf+rs.pre+rs.suf;
		fixsuf(ans.suf);
		ans.sep=1;
	}else if(rs.sep){
		ans.pre=ls.pre+ls.suf+rs.pre;
		ans.suf=rs.suf;
		fixpre(ans.pre);
		ans.sep=1;
	}else{
		ans.pre=ls.pre+ls.suf+rs.pre+rs.suf;
		ans.suf=ls.pre+ls.suf+rs.pre+rs.suf;
		if(ans.pre.length()>2*maxk){
			fixpre(ans.pre);
			fixsuf(ans.suf);
			ans.sep=1;
		}else if(ans.pre.length()<=2*maxk){
			string tmp=ans.pre;
			ans.pre=tmp.substr(0,tmp.length()/2);
			ans.suf=tmp.substr(tmp.length()/2,(tmp.length()+1)/2);
		}else{
			ans.suf="";
		}
	}
	
	
	ans.mxk=max(ls.mxk,rs.mxk);
	for(int k=ans.mxk;k<maxk;k++){
		ans.S[k]=ls.S[k];
		for(auto y:rs.S[k])
			ans.S[k].insert(y);
		for(int i=0;i+k<=mid.length();i++){
			ans.S[k].insert(toInt(mid.substr(i,k)));
		}
		if(ans.S[k].size()==(1<<k))
			ans.mxk=k;
	}

}


int n,m;
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		string s;cin>>s;
		str[i]=Info(s);
	}
	cin>>m;


	for(int i=n+1;i<=n+m;i++){
		int a,b;cin>>a>>b;
		mergeTo(str[a],str[b],str[i]);
		printf("%d\n",str[i].mxk);
	}
	return 0;
}