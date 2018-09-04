#include <stdio.h>
#include <iostream>
#include <string.h>
#include <math.h>
#include <algorithm>
#include <string>
#include <regex>
#include <stdlib.h>
#include <set>
#include <vector>
#include <map>
#define P 1000000007
using namespace std;
map<string,int> mm;
int num[4];
int main(){
	int n,m;
	cin>>n>>m;
	string x;
	for (int i=0;i<n;i++)
		cin>>x,mm[x]+=1;
	for (int i=0;i<m;i++)
		cin>>x,mm[x]+=2;
	
	for (auto iter = mm.begin();iter!=mm.end();iter++){
		num[iter->second]++;
	}
	if (num[1]+num[3]/2+num[3]%2>num[2]+num[3]/2) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	return 0;
}