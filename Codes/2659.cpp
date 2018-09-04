#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;

const int oo=0x7fffffff;
const ll  OO=0x7fffffffffffffff;

//#include "debug.h"
//#include "geometry.h"
//#include "mint.h"
//#include "prime.h"
//#include "matrix.h"
//#include "rmq_lazy.h"
//#include "string_algo.h"
//#include "graphs.h"
//#include "RNG.h"
//#include "lin_fit.h"

vector<int> pi;
void kmp_pre(string P){
	pi.resize(P.size()+1);
	for(int i=1,l=pi[1]=0; i<P.size(); i++){
		while(P[i]!=P[l] and l>0) l=pi[l];
		if(P[i]==P[l])l++;
		pi[i+1]=l;
}}

void kmp(string T,string P){
	for(int i=0,l=0; i<T.size(); i++){
		while(T[i]!=P[l] and l>0) l=pi[l];
		if(T[i]==P[l])l++;
		if(l==P.size()){
			//cout<<"match in ["<< i+1-l << ", " << i+1 << ")"<<endl;
			cout<<"Match? "<<T.substr(i+1-l,P.size())<<endl;
			l=pi[l];
}}}

int main(){
	ios_base::sync_with_stdio(false);
	string P,T;
	cin>>P;
	kmp_pre(P);
	for(int l=pi[P.size()];l>0;l=pi[l]){
		for(int i=1;i<P.size();i++)
			if(pi[i]==l)
				return cout<<P.substr(0,l)<<endl,0;
	}
	cout<<"Just a legend"<<endl;
	return 0;
}