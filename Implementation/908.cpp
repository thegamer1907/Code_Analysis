#include<stdio.h>
#include<iostream>
#include<cmath>
#include<algorithm>
#include<string.h>
#include<map>
#define f str[i]==
using namespace std;
const int maxn=2e5+10;
int a[maxn];
char str[maxn];
int main()
{
    int n,m;
    cin>>n>>m;
    scanf("%s",str);
    while(m--)
        for(int i=0;i<n-1;i++)
    {
        if(str[i+1]=='G')
            swap(str[i],str[i+1]),i++;
    }
    puts(str);
}
