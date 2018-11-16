#include <algorithm>
#include <stack>
#include <istream>
#include <stdio.h>
#include <map>
#include <math.h>
#include <vector>
#include <iostream>
#include <queue>
#include <string.h>
#include <set>
#include <cstdio>
#define FR(i,n) for(int i=0;i<n;i++)
#define MAX 2005
#define mkp pair <int,int>
using namespace std;
const int maxn = 4e5 + 40;
typedef long long ll;
const int  inf = 0x3fffff;
void read(int &x) {
	char ch; bool flag = 0;
	for (ch = getchar(); !isdigit(ch) && ((flag |= (ch == '-')) || 1); ch = getchar());
	for (x = 0; isdigit(ch); x = (x << 1) + (x << 3) + ch - 48, ch = getchar());
	x *= 1 - 2 * flag;
}


int main() {
    int n,Max;
    int ans=0;
    read(n);read(Max);
    for(int i=0;i<n;i++){
        int val;
        read(val);
        if(val>Max)ans+=2;
        else ans+=1;
    }
    cout<<ans<<endl;
    return 0;
}
