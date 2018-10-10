#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <iostream>
#include <sstream>
#include <algorithm>
#include <string>
#include <queue>
#include <map>
#include <vector>
using namespace std;
const int maxn = 1e6+10;
const int maxm = 1e4+10;
const int inf = 0x3f3f3f3f;
const double epx = 1e-10;
typedef long long ll;
int n,m;
int solve(int x)
{
    int sum=0;
    while(x)
    {
        sum+=x%10;
        x/=10;
    }
    return sum;
}
int main()
{
    cin>>n;
    int cnt=0;
    while(n)
    {
        cnt++;
        if(solve(cnt)==10)
            n--;
    }
    cout<<cnt<<endl;
}
