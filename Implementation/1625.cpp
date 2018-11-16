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
    int flag=0,a1=0,a0=0;
    char a;
    while(~scanf("%c",&a))
    {
        if(a=='1')
        {
            a1++;
            a0=0;
        }
        else
        {
            a0++;
            a1=0;
        }
        if(a0>=7||a1>=7)
            flag=1;
    }
    if(flag)
        printf("YES");
    else
        printf("NO");
    return 0;
}