#include <bits/stdc++.h>
using namespace std;


void no(){
	printf("NO\n"); exit(0);
}
void yes(){
	printf("YES\n"); exit(0);
}

const int maxn=100001;
bool ba[maxn];
bool ab[maxn];
int main(){

	string str;
	cin>>str;

	int len=(int)str.length();
	for(int i=0;i<len-1;++i){
		if(str.substr(i,2)=="AB")ab[i+1]=true;
		else if(str.substr(i,2)=="BA")ba[i+1]=true;
	}

	vector<int> both;
	vector<int> a,b;
	for(int i=1;i<=len;++i){
		if(ab[i-1]&&ba[i] || ba[i-1]&&ab[i])both.push_back(i);
		else{
			if(ab[i]&&!ba[i+1])a.push_back(i);
			if(ba[i]&&!ab[i+1])b.push_back(i);			
		}		
	}
	if(a.size() && b.size())yes();
	if(both.size() && (a.size()||b.size()))yes();
	for(int x:both){
		for(int y:both){
			if(abs(x-y)>1)yes();
		}
	}

	no();
}