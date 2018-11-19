#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <vector>
#include <stack>
#include <queue>
#include <map>
#include <set>
#include<list>
#include <bitset>
#include <climits>
#include <algorithm>
#define gcd(a,b) __gcd(a,b)
#define FIN	freopen("input.txt","r",stdin)
#define FOUT 	freopen("output.txt","w",stdout)
typedef long long LL;
const LL mod=1e9+7;
const int INF=0x3f3f3f3f;
const double PI=acos(-1.0);
using namespace std;
char str1[10];
char str2[10];
int main(){
	while (scanf("%s",str1)!=EOF){
		int n;
		scanf ("%d",&n);
		int flag1=0,flag2=0;
		for (int i=0;i<n;i++){
			scanf ("%s",str2);
			if (str1[0]==str2[1]){
				flag2=1;
			}
			if (str1[1]==str2[0]){
				flag1=1;
			}
			if (str1[0]==str2[0]&&str1[1]==str2[1]){
				flag1=flag2=1;
			}
		} 
		if (flag1&&flag2) printf ("YES\n");
		else printf ("NO\n");
	}
	return 0;
} 