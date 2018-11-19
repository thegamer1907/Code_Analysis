#include <bits/stdc++.h>
using namespace std;


set<string> a;
vector<string> v;
void kkkkk(string &q,int y,int i){
	q="";
	while(y){
		if(y%2){
			q+="1";
		}else{
			q+="0";
		}
		y/=2;
	}
	while(q.size()<i)q+="0";
}
int main() {
	int n,k;
	scanf("%d%d",&n,&k);
	for(int i = 0 ; i < n ; i++){
		string x="";
		for(int j = 0 ; j < k ; j++){
			int z;
			scanf("%d",&z);
			z+='0';
			x+=z;
		}
		a.insert(x);
	}
	for(set<string>::iterator x = a.begin() ; x!=a.end() ; x++ ){
		v.push_back(*x);
	}
	
	int y=v.size(), x = 1<<y;
	vector<string> z;
	for(int i = 0 ; i < x ; i++){
		z.clear();
		string q;
		kkkkk(q,i,y);
		for(int j=0 ; j <y ; ++j){
			if(q[j]-'0')z.push_back(v[j]);
		}
		if(!z.size())continue;
		int qq[4]={};
		int zzz = z.size();
		for(int j = 0 ; j <z.size() ; j++){
			for(int kkk = 0 ; kkk < k ; kkk++){
				if(z[j][kkk]==49)qq[kkk]++;
			}
		}
		int ayoub = 0;
		for(int j = 0 ;  j < k ; j++)ayoub=max(ayoub,qq[j]);
		
		if(ayoub*2<=zzz){
			cout << "YES" << endl;
			return 0;
		}
	}
	cout << "NO" << endl;
	return 0;
}