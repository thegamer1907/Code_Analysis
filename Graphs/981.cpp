#include <iostream>

using namespace std;

int main()
{
    int n,t,i=0;
cin>>n>>t;
int a[n-1];
for(int j=0;j<n-1;j++){
    cin>>a[j];
}


for( i=0;i<t-1;)
        i+=a[i];

        if(i==t-1||(t==2&&a[0]==1))
cout<<"YEs";
else
cout<<"NO";
    return 0;
}
