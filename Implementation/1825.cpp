#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <ctime>
#include <set>
#include <map>
#include <string>
#include <vector>
#include <queue>
#include <stack>
#include <iomanip>
#define zero 1e-7
#define esp 1e-6
#define inf 0x3f3f3f3f
#define maxx 100005
#define minn 1e5
#define pi 3.1415926
 
using namespace std;

int main()
{   
	int a, b, c;
	int n, x, y, z;
	
	while (scanf("%d", &n) != EOF){
		x = y = z = 0;
		for (int i = 0; i < n; i++){
			scanf("%d%d%d", &a, &b, &c);
			x = x+a;
			y = y+b;
			z = z+c;
		}
		if (x==0 && y==0 && z==0){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
	
    return 0;
}
