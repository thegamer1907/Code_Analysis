

#include <cstring>
#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <memory.h>
#include <cassert>
#include <complex>

using namespace std;
//const long long OO=4e18;
//const int MAX=100000<<2;
//int dx[8]={1,-1,0,0,1,-1,1,-1};
//int dy[8]={0,0,-1,1,1,-1,-1,1};
int n , a[200000] ;
long long ans;

int main(){
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	ans = 0;
	long long f,s;
	f=s=0;
	int ed = n-1;
	for(int i=0;i<n;i++){
	f+=a[i];
	while(s<f && ed>i){
		s+=a[ed--];
	}
	if(f==s){
	ans=f;
	}
	}
	cout<<ans<<endl;
	return 0;
}