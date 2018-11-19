# include <iostream>
using namespace std;
long long d,a,j,b,y,p,x,i;
string s,k;
int main()
{
   cin>>k>>x;
   for (i=1; i<=x; i++)
   {
   cin>>s;
   if (s==k) {  p=1; y=1; }
   if (s[1]==k[0]) p=1;
   if (s[0]==k[1]) y=1;
     
}
 if (p==1 && y==1) cout<<"YES"; else cout<<"NO";
}