#include<bits/stdc++.h>
 using namespace std;
#define ll long long
int main()
{
long long int k;
int n,i=1;
cin>>n>>k;
while(k!=0)
{
if(k%2==1)
{
cout<<i;
break;
}
k/=2;
i++;
}
return 0;
}