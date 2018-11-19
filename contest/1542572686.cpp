#include <bits/stdc++.h>
using namespace std;
//#define isequal(x,y)  abs((x-y)/y)<.001
#define valid(nx,mx,n,m) nx>=0&&nx<n&&mx>=0&&mx<m
#define mem(a,b)      memset(a, b, sizeof (a))
#define pb            push_back
#define mp            make_pair
#define sz            size()
#define kohli         0
//#define ll            long long
#define si(x)         scanf("%lld",&x)
#define vsort(v)      sort(v.begin(),v.end())
#define usort(x,n)    sort(x,x+n,greater<int>())
#define nl            printf("\n")
#define pi(x)         printf("%d",x)
#define ps(ch)        printf("%s",ch)
#define pll(x)        printf("%lld",x)
#define gcd(a,b)      __gcd(a,b)
#define lcm(a,b)      (a*(b/gcd(a,b)))
#define mod           1000000007
#define sp            printf(" ");
#define Pi            acos(-1)
#define inf           229496729
#define mx 1000060
typedef pair<int, int> pr;
const double eps = 1e-9;
//bool isequal(double x, double y)
//{
//	if(abs((x-y)/y)<0.000001)
//		return true;
//	return 0;
//}
//ll power(ll a, ll b)
//{
//	ll sum = 1;
//	for(int i=0;i<b;i++)
//		sum = sum * a;
//	return sum;
//}


///(lower_bound(cst,cst+(n-1),x)-cst)
//int dx[] = {+0,+1,+0,-1};
//int dy[] = {+1,+0,-1,+0};
//int dx[] = {-1,-1,-1,+0,+0,+1,+1,+1};
//int dy[] = {-1,+0,+1,-1,+1,-1,+0,+1};
//int dx[] = {+1,+1,-1,-1,+2,+2,-2,-2}; //knight moves
//int dy[] = {+2,-2,+2,-2,+1,-1,+1,-1}; //knight moves

//struct segment
//{
//	int u;
//	int v;
//} seg[100030];

//struct segment diiv[2000007];
//bool cmp(segment first,segment second)
//{
//	return first.v<second.v;  ///for sort by only first element
//}


bool prime[mx+3];
void sieve()
{
	//mem(prime, false);
	for(int i=4;i<=mx;i+=2)
		prime[i] = true;
	prime[1] = true;
	prime[0] = true;
	int e = sqrt(mx);
	for(int i=3;i<=e;i+=2)
	{
		if(!prime[i])
		{
			//ara[y++] = i;
			for(int j=i*i;j<=mx;j+=(i<<1))
				prime[j] = true;
		}
	}
//	for(int i=1;i<100;i++)
//		if(!prime[i])
//			pi(i),sp;
//	nl;
}
struct segment
{
	int a;
	int b;
}seg[100010];
bool structCompare(segment first,segment second)
{
	if(first.a != second.a)
		return first.a<second.a;  ///first onujaye kre. jodi first
	else							///same hoe jae tkn second onujaye kre
		return first.b > second.b;
}
int vokam(int n)
{
	int cnt = 0;
	while(n>0)
	{
		cnt++;
		n = n & (n-1);
	}
	return cnt;
}
int main()
{
	//sort(seg,seg+1000,structCompare);
//	for(int i=0;i<10;i++)
//		printf("%d\n",seg[i].b);
	//sieve();
    //bitwise();
    //totient();
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    //ios_base::sync_with_stdio(false); cin.tie(NuLL);
    int z,n,k,i,a,b,c,d,aa,aaa,bb,bbb,cc,ccc,dd,ddd,ee,eee,ff,fff,gg,ggg,hh ,hhh , jj , jjj , kk , kkk , ll , lll , mm , mmm , oo , ooo,pp,ppp;
    while(scanf("%d %d",&n,&z)==2)
	{
		aa = aaa = bb= bbb = cc = ccc = dd = ddd = ee = eee = hh = hhh = jj = jjj = kk = kkk = ll = lll = mm = mmm = oo = ooo = 0;
		aa = aaa = bb= bbb = cc = ccc = dd = ddd = ee = eee = ff = fff = gg = ggg = pp = ppp = 0;
		aa = aaa = bb= bbb = cc = ccc = dd = ddd = ee = eee = 0;
		int flag=0;
		if(z==1)
		{
			for(i=0;i<n;i++)
			{
				scanf("%d",&a);
				if(a==1)
					aa++;
				else
					aaa++;
			}
			if(aaa>0)
				flag=1;
		}
		else if(z==2)
		{
			for(i=0;i<n;i++)
			{
				scanf("%d %d",&a,&b);
				if(a==0 && b==0)
					flag=1;
				if(a==1 && b==0)
					aa++;
				if(a==0)
					aaa++;
				if(a==0 && b==1)
					bb++;
				if(b==0)
					bbb++;
			}
			if(aa>0 && aaa>0 || bb>0 && bbb>0)
				flag=1;
		}
		else if(z==3)
		{
			for(i=0;i<n;i++)
			{
				scanf("%d %d %d",&a,&b,&c);
				if(a==0 && b==0 && c==0)
					flag=1;
				if(a==0 && b==0 && c==1)
					aa++;
				if(c==0)
					aaa++;
				if(a==0 && b==1 && c==0)
					bb++;
				if(b==0)
					bbb++;
				if(a==1 && b==0 && c==0)
					cc++;
				if(a==0)
					ccc++;
				if(a==1 && b==1 && c==0)
					dd++;
				if(a==0 && b==0)
					ddd++;
				if(a==1 && b==0 && c==1)
					ee++;
				if(a==0 && c==0)
					eee++;
				if(a==0 && b==1 && c==1)
					ff++;
				if(b==0 && c==0)
					fff++;
			}
			if(aa>0 && aaa>0 || bb>0 && bbb>0 || cc>0 && ccc>0)
				flag=1;
		}
		else
		{
			for(i=0;i<n;i++)
			{
				scanf("%d %d %d %d",&a,&b,&c,&d);
				if(a==0 && b==0 && c==0 && d==0)
					flag=1;
				if(a==0 && b==0 && c==1 && d==1)
					aa++;
				if(c==0 && d==0)
					aaa++;
				if(a==0 && b==1 && c==1 && d==1)
					bb++;
				if(b==0 && c==0 && d==0)
					bbb++;
				if(a==1 && b==0 && c==1 && d==1)
					cc++;
				if(a==0 && c==0 && d==0)
					ccc++;
				if(a==1 && b==1 && c==0 && d==1)
					dd++;
				if(a==0 && b==0 && d==0)
					ddd++;
				if(a==1 && b==1 && c==1 && d==0)
					ee++;
				if(a==0 && b==0 && c==0)
					eee++;
				if(a==0 && b==1 && c==0 && d==1)
					ff++;
				if(b==0 && d==0)
					fff++;
				if(a==0 && b==1 && c==1 && d==0)
					gg++;
				if(b==0 && c==0)
					ggg++;
				if(a==1 && b==0 && c==0 && d==1)
					hh++;
				if(a==0 && d==0)
					hhh++;
				if(a==1 && b==0 && c==1 && d==0)
					jj++;
				if(a==0 && c==0)
					jjj++;
				if(a==1 && b==1 && c==0 && d==0)
					kk++;
				if(a==0 && b==0)
					kkk++;
				if(a==0 && b==0 && c==0 && d==1)
					ll++;
				if(d==0)
					lll++;
				if(a==0 && b==0 && c==1 && d==0)
					mm++;
				if(c==0)
					mmm++;
				if(a==0 && b==1 && c==0 && d==0)
					oo++;
				if(b==0)
					ooo++;
				if(a==1 && b==0 && c==0 && d==0)
					pp++;
				if(a==0)
					ppp++;
			}
			if(aa>0 && aaa>0 || bb>0 && bbb>0 || cc>0 && ccc>0 || dd>0 && ddd>0 || ee>0 && eee>0 && ff>0 && fff>0 || gg>0 && ggg>0 || hh>0 && hhh>0 || jj>0 && jjj>0 || kk>0 && kkk>0 || ll>0 && lll>0 || mm>0 && mmm>0 || oo>0 && ooo>0 || pp>0 && ppp>0)
				flag=1;
		}
		if(flag==1)
			printf("YES\n");
		else
			printf("NO\n");
	}
    return 0;
}
