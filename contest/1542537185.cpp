#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;
string pw,a[110];
int n;
int main()
{
    cin>>pw;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        cin>>a[i];
    bool flag=false;
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
        {
            string temp=a[i]+a[j];
            if(temp.find(pw)!=temp.npos)
                flag=true;
        }
    if(flag)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}

      	 		      	 	 	 	   				