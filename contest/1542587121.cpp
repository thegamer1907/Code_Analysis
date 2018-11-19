#include<iostream>
#include<string>
using namespace std;
int main()
{
    bool f1=false,f2=false;
    string pass;
    cin>>pass;
    int n,i,j;
    scanf("%d",&n);
    string s[n],res="";
    for(i=0;i<n;i++)
    {
        cin>>s[i];
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<2;j++)
        {
            if(j==0&&(s[i][j]==pass[j]&&s[i][j+1]==pass[j+1]))
            {
                f1=true;
                f2=true;
                break;
            }
            else if(j==0&&s[i][j]==pass[1]) f2=true;
            else if(j==1&&s[i][j]==pass[0]) f1=true;

        }
        if(f1&&f2) break;
    }
    if (f1&&f2) {
        printf("YES");
    }
    else printf("NO");
        return 0;
}
