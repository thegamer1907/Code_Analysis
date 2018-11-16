#include<cstdio>
#include<cstring>
#include<string>
#include<algorithm>
#include<iostream>
#include<cmath>
#include<cstdlib>
#include<ctime>
#include<map>
#include<queue>
#include<vector>
#include<stack>
#include<set>
#define pa pair<int,int>
#define INF 0x3f3f3f3f
#define inf 0x3f
#define fi first
#define se second
#define mp make_pair
#define ll long long
#define ull unsigned long long
#define pb push_back

using namespace std;

inline ll read()
{
    long long f=1,sum=0;
    char c=getchar();
    while (c<'0' || c>'9')
    {
        if (c=='-') f=-1;
        c=getchar();
    }
    while (c>='0' && c<='9')
    {
        sum=sum*10+c-'0';
        c=getchar();
    }
    return sum*f;
}
const int MAXN=1000010;
char s[MAXN];
int z[MAXN],n;
void get_z()
{
    int l=0,r=0;
    for (int i=1;i<n;i++)
    {
        if (i>r)
        {
            l=i,r=i;
            while (r<n && s[r-l]==s[r]) r++;
            z[i]=r-l,r--;
        }
        else
        {
            int k=i-l;
            if (z[k]<r-i+1) z[i]=z[k];
            else if (z[k]==r-i+1)
            {
                l=i;
                while (r<n && s[r-l]==s[r]) r++;
                z[i]=r-l,r--;
            } else {
                l=i;
                z[i]=r-l+1;
            }
        }
    }
}
int main()
{
    scanf("%s",s);
    n=strlen(s);
    get_z();
    int maxx=0,pos=0;
    for (int i=1;i<n;i++)
    {
        if (z[i]==n-i && maxx>=n-i)
        {
            pos=i;
            break;
        }
        maxx=max(maxx,z[i]);
    }
    if (!pos) printf("Just a legend");
    else for (int i=0;i<n-pos;i++) putchar(s[i]);
    return 0;
}
