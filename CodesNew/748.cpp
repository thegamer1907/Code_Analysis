#include<iostream>
#include<string.h>
#include<string.h>
#include<algorithm>
char str[10000][10000];
using namespace std;
int main()
{
    int x,y;
    while(cin>>x>>y)
    {

        for(int i=0;i<x+y;i++)
        {
            cin>>str[i];
        }
        if(x>y)cout<<"YES"<<endl;
        else if(x<y)cout<<"NO"<<endl;
        else
        {
            int sum=0;
            for(int i=0;i<x+y;i++)
            {
                for(int j=i+1;j<x+y;j++)
                {
                    if(strcmp(str[i],str[j])==0&&str[i][1]!='@')
                    {
                        sum++;
                        str[j][1]='@';
                    }
                }
            }
            if(sum%2==0)cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
        }
        memset(str,'\0',sizeof(str));
    }
}