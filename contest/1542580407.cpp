#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

int main()
{
    char pass[3];
    int n;
    bool f = false,l=false;
    scanf("%s",pass);
    cin>>n;
    char bark[n+1][3];
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%s",bark[i]);
    }
    for(i=0;i<n;i++)
    {
        if(bark[i][1]==pass[0])f = true;
        if(bark[i][0]==pass[1])l = true;
        if(!strcmp(bark[i],pass))
        {
            f = true;
            l = true;
        }
    }
    if(f && l)cout<<"YES";
    else cout<<"NO";
    return 0;
}
