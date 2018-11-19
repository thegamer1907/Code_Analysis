#include <iostream>

using namespace std;

int h,m,s,x,y,a,b;

int main()
{
    cin>>h>>m>>s>>a>>b;
    a%=12;h%=12;b%=12;
    x=min(a,b);
    y=max(a,b);
    if(x<=h&&h<y&&x*5<=m&&m<y*5&&x*5<=s&&s<y*5||
    (x>h||y<=h)&&(y*5<=m||x*5>m)&&(y*5<=s||x*5>s))cout << "YES";
    else
    cout<<"NO";
    return 0;
}
