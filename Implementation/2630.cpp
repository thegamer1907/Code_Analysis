#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define fastread ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define PI (atan(1)*4)
#define X first
#define Y second
#define mp make_pair
#define pb push_back
map<char , int >m;
int main()
{
   ll a,b,c,d = -1;
   cin>>a>>b>>c;
   if(a+b+c>d)
   d=a+b+c;
   if(a*(b+c)>d)
   d=a*(b+c);
   if((a+b)*c>d)
   d=(a+b)*c;
   if(a*b*c>d)
   d=a*b*c;
   cout<<d<<endl;
 return 0; 
}