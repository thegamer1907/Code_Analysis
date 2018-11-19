#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    char a,n;
    cin >> a >> n;
    int nn;
    cin >> nn ;
    char c[nn][2];
    for(int i=0;i<nn;i++)
    cin >> c[i][0] >> c[i][1];
    bool fl=false;
    for(int i=0;i<nn;i++)
    if((c[i][0]==a&&c[i][1]==n)||(c[i][0]==n&&c[i][1]==a))
    fl=true;
    if(fl)
    {
        printf("YES\n");
        return 0;
    }
    int pa1=0,pa2=0,pn1=0,pn2=0;
    for(int i=0;i<nn;i++)
    {
        if(c[i][0]==a)
        pa1=1;
        if(c[i][1]==a)
        pa2=1;
        if(c[i][0]==n)
        pn1=1;
        if(c[i][1]==n)
        pn2=1;
        
    }
    if(pa2+pn1==2)
    printf("YES\n");
    else
    printf("NO\n");
    
    
    
    return 0;
}