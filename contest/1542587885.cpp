/* ***********************************************
Author        :axp
Created Time  :2017/10/5 15:14:55
TASK		  :B.cpp
LANG          :C++
************************************************ */

#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <vector>
#include <queue>
#include <set>
#include <map>
#include <string>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

typedef long long ll;
const int inf = 1<<30;
const int md = 1e9+7;
const double eps=1e-8;
int n,m;
int T;
double ar[5];

int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    for(int i=0;i<5;i++)scanf("%lf",&ar[i]);
	if(fabs(ar[0]-12)<eps)ar[0]=0;
	if(fabs(ar[3]-12)<eps)ar[3]=0;
	if(fabs(ar[4]-12)<eps)ar[4]=0;
	ar[0]*=5,ar[3]*=5,ar[4]*=5;
	if(ar[3]>ar[4])swap(ar[3],ar[4]);

	ar[1]+=ar[2]/60.0;
	ar[0]+=ar[1]/12.0;

	//for(int i=0;i<5;i++)cout<<ar[i]<<' ';cout<<endl;
	int st=0;
	for(int i=0;i<3;i++)
		if(ar[3]<ar[i] && ar[i]<ar[4])
			st|=1;
		else
			st|=2;
	if(st==3)puts("NO");
	else puts("YES");
    return 0;
}
