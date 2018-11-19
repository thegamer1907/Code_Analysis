/*
 * test.cpp
 *
 *
 *      Author: Fireworks
 */

#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
#include<queue>
#include<string>
#include<map>
#include<cmath>
#include<bitset>
#include<set>
#include<iomanip>
#include<fstream>
#include<bitset>
#include<cstring>
#include<cstdlib>
#include<complex>
#include<list>
#include<sstream>

using namespace std;

typedef pair<int,int> ii;
typedef pair<int,long long> il;
typedef pair<long long,long long> ll;
typedef pair<ll,int> lli;
typedef pair<long long,int> li;
typedef pair<double,double> dd;
typedef pair<ii,int> iii;
typedef pair<double,int> di;
long long mod = 1000000007LL;
long long base = 10000007;
long long large = 1000000000000000000LL;




int main(){

	string s;
	cin>>s;
	int n;
	cin>>n;
	vector<string> w(n,"");
	for(int i=0;i<n;i++) cin>>w[i];
	bool flag = false;
	for(int i=0;i<n;i++){
		if(w[i]==s) flag = true;
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			string t = w[i]+w[j];
			if(t.substr(1,2)==s) flag = true;
		}
	}
	if(flag){
		cout<<"YES"<<endl;
	}else{
		cout<<"NO"<<endl;
	}



	return 0;
}
