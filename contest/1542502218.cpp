#include<ctime>
#include<cmath>
#include<cstdio>
#include<cstring>
#include<iostream>
#include<algorithm>
#define rt register int
#define l putchar('\n')
#define ll long long
#define r read()
using namespace std;
inline ll read(){
    ll x = 0; char zf = 1; char ch = getchar();
    while (ch != '-' && !isdigit(ch)) ch = getchar();
    if (ch == '-') zf = -1, ch = getchar();
    while (isdigit(ch)) x = x * 10 + ch - '0', ch = getchar(); return x * zf;
}
void write(ll y){if(y<0)putchar('-'),y=-y;if(y>9)write(y/10);putchar(y%10+48);}
void writeln(const ll y){write(y);putchar('\n');}
int i,j,k,m,n,x,y,z,cnt;
int main(){
	double A,B,C;
	cin>>A>>B>>C;
	B=B/5;
	C=C/5;
	double X,Y;cin>>X>>Y;
	if(X>Y)swap(X,Y);
	if(A>=X&&A<Y)cnt|=1;
	else cnt|=2;
	if(B>=X&&B<Y)cnt|=1;
	else cnt|=2;
	if(C>=X&&C<Y)cnt|=1;
	else cnt|=2;
	if(cnt<3)puts("YES");
	else puts("NO");
	return 0;
}
