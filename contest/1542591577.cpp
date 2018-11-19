#include <iostream>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <cstdio>
#include <fstream>
#include <map>
#include <vector>
//#include <unordered_map>
//#include <unordered_set>
#include <stack>
#include <set>
#include <queue>
#include <list>
using namespace std;
typedef long long LL;
const int maxn=100005;
char s[5],ss[5];
bool a[300],b[300];
int main()
{
    scanf("%s",s);
    int n;
    scanf("%d",&n);
    bool jud=false;
    for(int i=0;i<n;++i)
    {
        scanf("%s",ss);
        if(strcmp(s,ss)==0) jud=true;
        a[ss[0]]=true;
        b[ss[1]]=true;
    }
    if((jud)||(a[s[1]]&&b[s[0]])) puts("YES");
    else puts("NO");
	return 0;
}
