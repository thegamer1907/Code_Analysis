//Allah vorosha
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,count1=0,count2=0;
    char a[101];
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]=='1')
            {
                count1++;
                count2=0;
            }
            else
            {
                count2++;
                count1=0;
            }
            if(count1>=7||count2>=7)
            {
                printf("YES\n");
                return 0;
            }
    }
    printf("NO\n");
    return 0;
}
