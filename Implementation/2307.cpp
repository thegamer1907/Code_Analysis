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
	char ch, pre;
	int n, cnt;
	
	while (scanf("%d", &n) != EOF){
		getchar();
		cnt = 0;
		for (int i = 0; i < n; i++){
			if (i == 0){
				scanf("%c", &pre);
			}
			else{
				scanf("%c", &ch);
				if (ch == pre){
					cnt++;
				}
				else{
					pre = ch;
				}
			}
		}
		printf("%d\n", cnt);
	}
	
    return 0;
}
