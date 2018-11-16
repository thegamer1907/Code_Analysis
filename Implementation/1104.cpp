//NOT AEPTED
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    scanf("%d %d ",&n,&k);
    char str[n+1],bx[500]= {0};
    gets(str);
    char t;
    int i,j,s=0;
    // cout<<strlen(str)<<endl;
    for(j=0; j<k; j++)
    {
        for(i=0; i<strlen(str); )
        {
            if(str[i]!='G'&&str[i+1]=='G')
            {
                bx[i]=str[i+1];
                bx[i+1]=str[i];
                i=i+2;
            }
            else
            {
                bx[i]=str[i];
                i=i+1;
            }
        }
        for(s=0;s<strlen(str);s++)
            str[s]=bx[s];
    }
    for(i=0; i<strlen(bx); i++)
        printf("%c",bx[i]);
    return 0;

}
