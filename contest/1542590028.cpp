#include <iostream>
#include <iomanip>
#include <fstream>
#include <sstream>
#include <string>
#include <cmath>
#include <cstdio>
#include <cctype>
#include <ctime>
#include <cstdlib>
#include <cstring>
#include <cassert>
#include <cctype>
#include <cerrno>
#include <cfloat>
#include <ciso646>
#include <climits>
#include <clocale>
#include <complex>
#include <csetjmp>
#include <csignal>
#include <cstdarg>
#include <cstddef>
#include <cwchar>
#include <cwctype>
#include <exception>
#include <locale>
#include <numeric>
#include <new>
#include <stdexcept>
#include <limits>
#include <valarray>
#include <set>
#include <vector>
#include <stack>
#include <queue>
#include <deque>
#include <map>
#include <list>
#include <utility>
#include <bitset>
#include <algorithm>
#include <functional>
#define rep(i,n) for(int i=0;i<(n);i++)
#define rep1(i,n) for(int i=1;i<=(n);i++)
#define MP make_pair
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
const int INF=1e9+7;
bool In(int v,int l,int r){
	return v>l&&v<r;
}
int main(){
	int h,m,s,t1,t2;
	scanf("%d%d%d%d%d",&h,&m,&s,&t1,&t2);
	if(h==12)h=0;if(t1==12)t1=0;if(t2==12)t2=0;
	int d[3]={h+h+(m==0&&s==0?0:1),m/5*2+(m%5==0&&s==0?0:1),s/5*2+(s%5==0?0:1)};
	sort(d,d+3);
	t1*=2;t2*=2;
	if(In(t1,d[0],d[1])&&In(t2,d[0],d[1])||In(t1,d[1],d[2])&&In(t2,d[1],d[2])||
		(t1<d[0]||t1>d[2])&&(t2<d[0]||t2>d[2]))printf("YES\n");
	else printf("NO\n");
	return 0;
}
