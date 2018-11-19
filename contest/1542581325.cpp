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

	int n,k;
	cin>>n>>k;
	vector<int> cnt(1<<k,0);
	for(int i=0;i<n;i++){
		int x = 0;
		for(int j=0;j<k;j++){
			int y;
			cin>>y;
			x*=2;
			x+=y;
		}
		cnt[x]++;
	}
	if(cnt[0]>0){
		cout<<"YES"<<endl;
		return 0;
	}
	for(int i=0;i<(int)cnt.size();i++){
		for(int j=0;j<(int)cnt.size();j++){
			if((i&j)==0){
				if(cnt[i]>0&&cnt[j]>0){
					cout<<"YES"<<endl;
					return 0;
				}
			}
		}
	}

	cout<<"NO"<<endl;


	return 0;
}
