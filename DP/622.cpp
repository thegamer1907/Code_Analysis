
 #include<iostream>
using namespace std;
int main()
{
string s;
int a[100005],n,i,l,r;
cin>>s>>n;
a[0]=0;
for(i=0;i<s.length()-1;i++) a[i+1]=a[i]+(s[i]==s[i+1]);
for(i=1;i<=n;i++)
{
cin>>l>>r;
cout<<a[r-1]-a[l-1]<<endl;
}
return 0;
}