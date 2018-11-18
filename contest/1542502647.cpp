#include<cstdio>
#include<iostream>
#include<vector>
using namespace std;

bool ans=0;
int main()
{
    int n;
    char x,y;
    int flag=0;
    int flag2=0;
    cin>>x;
    cin>>y;
    cin>>n;
    char a;
    char b;

    if(x==y) {
        for(int i=0; i<n; i++) {
            getchar();
            cin>>a>>b;
            if(a==x&&b==x)
                ans=1;
            if(b==x)
                flag=1;
            if(a==y)
                flag2=1;
            if(flag2==1&&b==x)
                ans=1;
            if(flag==1&&a==y)
                ans=1;
        }
    } else {
        for(int i=0; i<n; i++) {
            getchar();
            cin>>a>>b;
            if(a==x&&b==y)
                ans=1;
            if(b==x)
                flag=1;
            if(a==y)
                flag2=1;
            if(flag2==1&&b==x)
                ans=1;
            if(flag==1&&a==y)
                ans=1;
        }
    }
    if(ans)
    cout<<"YES";
    else
        cout<<"NO";
}
