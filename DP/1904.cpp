#include <bits/stdc++.h>
using namespace std;
string str;
int main()
{
    cin>>str;
    int len=str.size();
    if(len<=3) puts("NO");
    else
    {
        int a=str.find("AB");
        int b=str.find("BA",a+2);
        int c=str.find("BA");
        int d=str.find("AB",c+2);
        if(a!=-1&&b!=-1||c!=-1&&d!=-1) puts("YES");
        else puts("NO");
    }
    return 0;
}
