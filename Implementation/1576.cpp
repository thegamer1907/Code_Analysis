#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,j,i,count=1;
    char str[1000];
    cin>>str;
    j=strlen(str);
    for(i=0;i<j-6;i++)
    {
        for(a=i+1;a<i+7;a++)
        {
            if(str[i]==str[a]) count++;
        }
        if(count>=7)
        {   cout<<("YES");
            return 0;
           
        }
       
        count=1;
            
    }
        cout<<("NO");
        return 0;
}