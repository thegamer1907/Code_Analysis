#include<stdio.h>
#include<iostream>
#include<string>
#define MaxN 10000+100
using namespace std;
int symbol[MaxN][2]={0};
string symbols[MaxN][2];
int tlen=0;
void Initialize(int now,int len,string &s1,string &s2)
{
    if(now==len)
    {
            symbols[tlen][0]=s1;
            symbols[tlen++][1]=s2;
        return ;
    }
    s1[now]='0';
    s2[now]='0';
    Initialize(now+1,len,s1,s2);
    s1[now]='0';
    s2[now]='1';
    Initialize(now+1,len,s1,s2);
    s1[now]='1';
    s2[now]='0';
    Initialize(now+1,len,s1,s2);
}
int main()
{
    int n,k;
    scanf("%d %d",&n,&k);
    string s1,s2;
    for(int i=0;i<k;i++)
    {
        s1+='0';
        s2+='0';
    }
    Initialize(0,k,s1,s2);
    while(n--)
    {
        string s;
        for(int i=0;i<k;i++)
        {
            int num;
            scanf("%d",&num);
            if(num)
                s+='1';
            else
                s+='0';
        }
        
        for(int i=0;i<tlen;i++)
        {
            if(s==symbols[i][0])
                symbol[i][0]=1;
            if(s==symbols[i][1])
                symbol[i][1]=1;
        }
    }
    int i;
    for(i=0;i<tlen;i++)
    {
        if(symbol[i][0]==1 && symbol[i][1]==1)
            break;
    }
    if(i<tlen)
        cout << "YES";
    else
        cout <<"NO";
    cout << endl;
    return 0;
}
