/* ***********************************************
Author        :axp
Created Time  :2017/10/5 15:07:37
TASK		  :A.cpp
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
const int N = 100+10;
int n,m;
int T;
string ar[N];

int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    string p;
	cin>>p>>n;
	for(int i=0;i<n;i++)
	{
		cin>>ar[i];
		if(ar[i]==p)
		{
			puts("YES");
			return 0;
		}
	}
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
		{
			if(ar[i][1]==p[0] && ar[j][0]==p[1])
			{
				puts("YES");
				return 0;
			}
		}
	puts("NO");
    return 0;
}
