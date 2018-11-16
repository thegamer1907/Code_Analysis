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
	int n,t; 
	char s[200];
	cin>>n>>t;
	cin>>s;
	while(t--)
	{
		for(int i=strlen(s)-1;i>0;i--)
		{
			if(s[i]=='G'&&s[i-1]=='B')
			{
				s[i]^=s[i-1];
				s[i-1]^=s[i];
				s[i]^=s[i-1];
				--i; 
			}
		}
	}
	cout<<s;
    return 0;
}