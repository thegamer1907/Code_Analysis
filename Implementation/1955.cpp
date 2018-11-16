#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=0;i--)
#define speed ios_base::sync_with_stdio(false);\
cin.tie(NULL);
using namespace std;
int main()
{
int n,x_input,y_input,z_input,X=0,Y=0,Z=0;
cin>>n;
FORS(i,0,n)
{
    cin>>x_input>>y_input>>z_input;
    X=X+x_input;
    Y=Y+y_input;
    Z=Z+z_input;
}
if(X==0&&Y==0&&Z==0)
    cout<<"YES";
    else
    cout<<"NO";
}
