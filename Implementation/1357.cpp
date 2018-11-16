#include<bits/stdc++.h>
using namespace std;
#define forinc(i,a,b) for(int i=a;i<=b;++i)
#define fordec(i,a,b) for(int i=a;i>=b;--i)
#define forv(i,a) for(auto &i:a)
void read(int &x)
{
    x=0; char c=getchar();
    while(c<'0'||c>'9') c=getchar();
    while('0'<=c&&c<='9')
    {
        x=x*10+c-'0';
        c=getchar();
    }
}
int n,t;
string s;
int main()
{
       ios_base::sync_with_stdio(false);
       cin.tie(0);
       cout.tie(0);
       cin>>n>>t;
       cin>>s;
       while(t--)
       {
           int i=0;
           while(i<=n-2)
           {
               if(s[i]=='B'&&s[i+1]=='G') swap(s[i],s[i+1]),i+=2;
               else i++;
           }
       }
       cout<<s;
}
