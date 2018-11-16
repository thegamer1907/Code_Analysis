/*
A possible implementation
The first few steps are just BST routine
Node deletion algorithm
Specifically, we're going to have a search
And assume that the target node does exist
So we call the removeAt routine
Remove the node physically
Next, we're still going through a for cycle
Ancestral ancestors traversing deleted nodes
Please pay special attention to our starting point
The father of the deleted node
Instead of inserting it like that
It can start directly from its grandfather
Then, in the course of the whole traversal
Each of us discovers an unbalanced ancestor G
Make a proper rotation adjustment to the ancestor
The three nodes involved in rotation are still G
And the taller kid, P
And the higher grandson V down there
And whether it's unbalanced or rotated
We all need to update the height of this ancestor
You can see that in the worst case
Really need to do logn times
You might as well take the control logic of the previous insert operation
Make a contrast here
No, there's nothing
Tricks to terminate the traversal process ahead of time
Because in the worst case
We really need to leave everything behind
Deal with all generations of ancestors
Since then, we can successfully end the algorithm
And return
So far you may find out
Here's the rotation
We haven't given a specific implementation of it
It's exactly what we suggested
Single spin and double spin in that way?
Interestingly enough, the answer is negative
*/
using namespace std;
#include<deque>
#include<stdint.h>
#include<set>
#include<stack>
#include <iostream>
#include <algorithm>
#include<cmath>
#include<cstring>
#include<cstdio>
#include<cstdlib>
#include<vector>
#include<iomanip>
#include<iostream>
#include<cstdio>
#include<algorithm>
#include<queue>
#include<cstring>
#include<map>
#define sqr(x) (x)*(x)
#define sort stable_sort
#define ll long long
#define mp make_pair
#define pb push_back
#define in insert
#define mtr(x,y,z) mp(mp(x,y),z)
#define fi first
#define se second
#define lch(x) ((x)<<1)
#define rch(x) (((x)<<1)|1)
#define all(x) (x).begin(),(x).end()
#define fpi(x) freopen(x,"r",stdin);
#define fpo(x) freopen(x,"w",stdout);
#define fprio fpi("in.txt");fpo("out.txt"):
#define fast ios::sync_with_stdio(false);
void readi(int &x)
{
	int v=0,f=1;
	char c=getchar();
	while (!isdigit(c)&&c!='-') c=getchar();
	if (c=='-') f=-1; else v=v*10+c-'0';
	while (isdigit(c=getchar())) v=v*10+c-'0';
	x=v*f;
}
void readll(ll &x)
{
	ll v=0ll,f=1ll;
	char c=getchar();
	while (!isdigit(c)&&c!='-') c=getchar();
	if (c=='-') f=-1; else v=v*10+c-'0';
	while (isdigit(c=getchar())) v=v*10+c-'0';
	x=v*f;
}
void readc(char &x)
{
	char c;
	while ((c=getchar())==' ');
	x=c;
}
void writes(string s){puts(s.c_str());}
void writeln(){writes("");}
void writei(int x)
{
	if (!x) putchar('0');
	char a[25];
	int top=0;
	while (x)
	{
		a[++top]=(x%10)+'0';
		x/=10;
	}
	while (top)
	{
		putchar(a[top]);
		top--;
	}
}
void writell(ll x)
{
	if (!x) putchar('0');
	char a[25];
	int top=0;
	while (x)
	{
		a[++top]=(x%10)+'0';
		x/=10;
	}
	while (top)
	{
		putchar(a[top]);
		top--;
	}
}
/*************************************************/
int fa[100005],n,m,i,j,x;
set<int> s;
int find(int x)
{
	if (fa[x]==x) return x;
	return fa[x]=find(fa[x]);
}
int main()
{
	cin>>n;
	for (i=1;i<=n;i++) fa[i]=i;
	for (i=1;i<=n;i++)
	{
		cin>>x;
		fa[find(x)]=find(i);
	}
	for (i=1;i<=n;i++) s.in(find(i));
	cout<<s.size();
	return 0;
}