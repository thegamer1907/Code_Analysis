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
#define maxx 1005
#define minn 1e5
#define pi 3.1415926
 
using namespace std;

int main()
{   
	int k, n, m;
	
	while (scanf("%d%d%d", &k, &n, &m) != EOF){
		if ((1+m)*m/2*k > n){
			printf("%d\n", (1+m)*m/2*k-n);
		}
		else{
			printf("0\n");
		}
	}
	
    return 0;
}
