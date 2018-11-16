#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    int t;
     char ara[55];
    scanf("%d%d",&a,&t);
    scanf("%s",ara);
    for(int i=0; i<t; i++)
    {
        for(int j=0; j<a; j++)
        {
            if(ara[j]=='B'&& ara[j+1]=='G')
            {
                ara[j]='G';
                ara[j+1]='B';

                j++;
            }
        }
    }
   puts(ara);
}

