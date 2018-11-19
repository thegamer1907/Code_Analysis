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

	int h,m,s,t1,t2;
	cin>>h>>m>>s>>t1>>t2;
	h*=3600;
	h+=m*60;
	h+=s;
	h%=(3600*12);

	m*=60*12;
	m+=s*12;

	s*=60*12;

	t1*=3600;
	t1%=3600*12;
	t2*=3600;
	t2%=3600*12;

	vector<int> a;
	a.push_back(h);
	a.push_back(m);
	a.push_back(s);
	sort(a.begin(),a.end());
	a.push_back(a[0]);
	int r1 = 2;
	for(int i=0;i+1<3;i++){
		if(t1>a[i]&&t1<a[i+1]){
			r1 = i;
			break;
		}
	}
	int r2 = 2;
	for(int i=0;i+1<3;i++){
		if(t2>a[i]&&t2<a[i+1]){
			r2 = i;
			break;
		}
	}
	if(r1!=r2){
		cout<<"NO"<<endl;
	}else{
		cout<<"YES"<<endl;
	}



	return 0;
}
