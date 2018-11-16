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
	char ch, ss[105];
	int n, m, flag;
	
	while (gets(ss) != 0){
		n = strlen(ss);
		for (int i = 0; i < n; i++){
			m = flag = 0;
			ch = ss[i];
			while (ss[i]==ch && i<n){
				m++;
				i++;
				if (m == 7){
					flag = 1;
					break;
				}
			}
			if (m == 7){
				break;
			}
			i--;
		}
		if (flag){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
	
    return 0;
}
