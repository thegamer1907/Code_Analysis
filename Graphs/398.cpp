#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define fastread ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define PI (atan(1)*4)
#define pb push_back
map<char , int >m;
map<char , int >m1;
int myXOR(int x, int y) 
{ 
   return (x | y) & (~x | ~y); 
} 
int main()
{
    ll n=0,d,i=0,j=0,l=0,r=0,a=0,b=0,c1,c2,p,b2,s1=0,t=0,t1=0,y=0,x=0,s2=0,c=0;
	string s;
	char ch;
	cin>>n>>t;
	vector<int> adj[100001];
	//int a[t],b[t];
   cin>>s;
   for(j=0;j<t;j++)
   {
       for(i=0;i<n;i++)
       {
           if(s[i]=='B' && s[i+1]=='G')
           {
               swap(s[i],s[i+1]);
               i++;
           }
       }
      // cout<<s<<endl;
   }
   cout<<s<<endl;
return 0;
}
  