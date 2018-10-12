#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
/* Input - Output */
template<typename T>
inline void out(T a)
{
	int i=0;
	char s[20];
	if(a==0) s[i++]='0';
	if(a<0) putchar('-'),a=-a;
	while(a>0) s[i++]=a%10+'0',a/=10;
	--i;
	while(i>=0) putchar(s[i--]);
	putchar(' ');
}
inline void out(const char *s)
{
	int n=strlen(s);
	for(int i=0;i<n;i++) putchar(s[i]);
	putchar(' ');
}
inline void out(char *s)
{
	int n=strlen(s);
	for(int i=0;i<n;i++) putchar(s[i]);
	putchar(' ');
}
inline void out(string s)
{
	int n=s.length();
	for(int i=0;i<n;i++) putchar(s[i]);
	putchar(' ');
}
inline void out(double n) { printf("%.15lf ",n); }
inline void out() { putchar('\n'); }
inline void in(double &n) { scanf("%lf",&n); }
inline void in(string &s) { cin>>s; }
template<typename T>
inline void in(T &n)
{
	register T c=getchar();
	n=0;
	bool neg=false;
	for(;((c<48 || c>57) && c!='-'); c=getchar());
	if(c=='-') neg=true,c=getchar();
	for(;(c>47 && c<58);c=getchar()) n=(n<<1)+(n<<3)+c-48;
	if(neg) n*=-1;
}
inline void in(char *s)
{
	register char c=0;
	register int i=0;
	while(c<33) c=getchar();
	while(c!='\n') s[i]=c,c=getchar(),i++;
	s[i]='\0';
}
/*...........................*/
const int MAXN=1e5+5;
int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	int n;
	in(n);
	ll x,mx=0,sum=0;
	for(int i=0;i<n;i++)
		in(x),mx=max(mx,x),sum+=1LL*x;
	n--;
	ll ans=(sum%n==0) ? sum/n : sum/n+1;
	ans=max(ans,mx);
	out(ans),out();
	return 0;
}