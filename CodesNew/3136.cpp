#include <algorithm>
#include <cstdio>
#include <iostream>
#include <cfloat>
#include <climits>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <queue>
#include <sstream>
#include <stack>
#include <time.h>
#include <vector>
#include <complex>
#include <map>
#include <set>
#include <iomanip>
#include <math.h>
#include <stdlib.h>
#include <list>
#include <utility>
#include <memory>
#include <cstring>
#include <fstream>
#include <numeric>
#include <assert.h>
#include <bits/stdc++.h>
using namespace std;
int n,k;
int a[300004];
vector <int> v;
int main(){
	cin>>n>>k;
	int ans1=0,l_,r_;
	for (int i=0;i<n;i++){
		cin>>a[i];
		if (a[i]==0) v.push_back(i); 
	}
	if (k==0){
		int bigst=0;
		int l;
		for (int i=0;i<n;i++){
			if (i==0 || a[i-1]==0) l=i;
			if (a[i]==1) bigst=max(bigst,i-l+1);   
		}
		cout<<bigst<<endl;
		for (int i=0;i<n;i++)
			cout<<a[i]<<" ";
		return 0;
	}
	if (v.size()<=k){
		cout<<n<<endl;
		for (int i=0;i<n;i++)
			cout<<"1 ";
		return 0;
	}
	for (int i=0;i+k<=v.size();i++){
		int l,r;
		if (i==0) l=0;
		else l=v[i-1]+1;
		if (i+k==v.size()) r=n-1;
		else r=v[i+k]-1;
		if (r-l+1>ans1){
			ans1=r-l+1;
			l_=l;
			r_=r;
		}
	}
	cout<<ans1<<endl;
	for (int i=0;i<n;i++){
		if (l_<=i && i<=r_)
			cout<<"1 ";
		else cout<<a[i]<<" ";
	}
	return 0;
}