#include <algorithm>
//#include <typeinfo>
#include <stdlib.h>
#include <string.h>
#include <iostream>
//#include <numeric>
#include <cstring>
#include <ctype.h>
//#include <sstream>
//#include <iomanip>
#include <cstdio>
#include <math.h>
#include <string> 
#include <vector>
//#include <time.h>
#include <queue>
#include <stack>
#include <map>
//#include <set> 
using namespace std;
int main()
{
	int a=0,b=0,c=0;
	int n,q,w,e;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>q>>w>>e;
		a+=q;
		b+=w;
		c+=e;
	}
	if(a==0&&b==0&&c==0)
	cout<<"YES";
	else
	cout<<"NO";
    return 0;
}
