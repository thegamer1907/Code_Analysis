#include <iostream>

using namespace std;

int main()
{
int n ,k,c=0,m;
int y,h;
cin>>n>>k;
for(int i=1;i<=n;i++){
    cin>>m;
    if(m!=y)
     h=i;
    if((i<=k||(y==m&&h<=k))&&m>0)
    c++;
     y=m;

}
cout<<c;
    return 0;
}
