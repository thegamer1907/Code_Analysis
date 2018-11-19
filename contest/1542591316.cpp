#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<iostream>
#include<algorithm>
#include<stack>
#include<queue>
#include<vector>
#include<set>
#include<map>
#include<bitset>
#include<string>
#define nl n<<1
#define nr (n<<1)|1
#define fi first
#define se second
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int>P;
const int INF=0x3f3f3f3f;
const ll INFF=0x3f3f3f3f3f3f3f3f;
const double pi=acos(-1.0);
const double eps=1e-9;
const ll mod=1e9+7;
int read()
{
    int x=0,f=1;char ch=getchar();
    while(ch<'0' | ch>'9') {if(ch=='-') f=-1;ch=getchar();}
    while(ch>='0' && ch<='9') {x=x*10+ch-'0';ch=getchar();}
    return x*f;
}
void Out(int aa)
{
    if(aa>9)
        Out(aa/10);
    putchar(aa%10+'0');
}
string s,str;
int main()
{
    int n;
    cin>>s>>n;
    int f1=0,f0=0;
    getchar();
    int flag=0;
    for(int i=1;i<=n;i++)
    {
        cin>>str;
        if(str[0]==s[0]&&str[1]==s[1])
        {
            flag=1;
           // break;
        }
        if(str[0]==s[1])
        {
            f1=1;
        }
        if(str[1]==s[0])
        {
            f0=1;
        }
        if(f1&&f0)
        {
            flag=1;
            //printf("YES\n");
            //break;
        }
    }
    if(flag)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
