#include <cstdio>
#include <iostream>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <algorithm>
using namespace std;

char a[5];
char b[105][5];

int main()
{
	scanf("%s", a + 1);
	int n;
	int u = 0, uu = 0, v = 0, vv = 0;
	cin >>n;
	int flag = 0;
	for (int i = 1; i <= n; i++){
		scanf("%s", b[i] + 1);
		/*	if (b[i][1] == a[1]){
			if (b[i][2] = a[2]) flag == 5;
			v = 1;
			}
			else vv = 1;
			if (b[i][2] == a[2])   u = 1;
			else uu = 1;
			}
		 */
	if (b[i][1] == a[1] && b[i][2] == a[2]) flag = 1;
	if (b[i][1] == a[2]) uu = 1;
	if (b[i][2] == a[1]) vv = 1;
	}

if (flag || uu + vv == 2)
	cout <<"YES\n";
	else cout <<"NO\n";
	}


		 					 			 			   		   				