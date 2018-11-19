#include<iostream>
#include<cstdio>
#include<algorithm>
#include<iomanip>
#include<cstring>
#include<ctime>
using namespace std;
char y1,y2;
char ch[105][3];
int n,a1=0,a2=0;
int main()
{
    cin>>y1>>y2;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>ch[i][1]>>ch[i][2];
        if(ch[i][1]==y1&&ch[i][2]==y2)
        {
            cout<<"YES"<<endl;
            return 0;
        }
        if(ch[i][2]==y1)a1=1;
        if(ch[i][1]==y2)a2=1;
    }
    if(a1&&a2) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}

