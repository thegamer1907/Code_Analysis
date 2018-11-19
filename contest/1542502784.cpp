#include "iostream"
using namespace std;
struct C
{
    char x,y;
};
C ch[105];
int main()
{
    int n,flag1,flag2,flag3;
    char x,y,a,b;
    flag1=flag2=flag3=0;
    cin>>x>>y>>n;
    for(int i=0;i<n;i++){
        cin>>a>>b;
        if(b==x) flag1=1;
        if(a==y) flag2=1;
        if(a==x&&b==y) flag3=1;
    }
    if(flag3||flag1&&flag2) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}