#include <bits/stdc++.h>

//#include <ext/pb_ds/assoc_container.hpp> // Common file
//#include <ext/pb_ds/tree_policy.hpp> // Including tree_order_statistics_node_update

#define rep(i,n) for(i=1;i<=n;i++)
#define Rep(i,n) for(i=0;i<n;i++)
#define For(i,a,b) for(i=a;i<=b;i++)

#define pb(x) push_back(x)
#define sz(x) x.size()

#define mem(ara,val) memset(ara,val,sizeof(ara))
#define eps 1e-9

#define si(x) scanf("%d",&x)
#define sii(x,y) scanf("%d %d",&x,&y)
#define siii(x,y,z) scanf("%d %d %d",&x,&y,&z)
#define sl(x) scanf("%lld",&x)
#define sll(x,y) scanf("%lld %lld",&x,&y)
#define slll(x,y,z) scanf("%lld %lld %lld",&x,&y,&z)
#define ss(ch) scanf("%s",ch)
#define pi(x) printf("%d",x)
#define pii(x,y) printf("%d %d",x,y)
#define piii(x,y,z) printf("%d %d %d",x,y,z)
#define pl(x) printf("%lld",x)
#define pll(x,y) printf("%lld %lld",x,y)
#define plll(x,y,z) printf("%lld %lld %lld",x,y,z)
#define ps(ch) printf("%s",ch)
#define Afridi 0
#define NL printf("\n")
#define debug(x) printf("wow  %d !!\n",x)
#define Max 200005
#define MAX 10005
#define INF (LL)1e15
//#define mod 1000000007
#define un(x) x.erase(unique( x.begin() , x.end() ), x.end())

#define FI freopen("in.txt","r",stdin)

#define D(x) cout << #x << " = " << x << endl
#define DD(x,y) cout << #x << " = " << x << "   " << #y << " = " << y << endl

typedef long long LL;
typedef unsigned long long ULL;
typedef unsigned int ui;

using namespace std;

LL bigmod(LL b,LL p,LL m)
{
    if(p == 0)return 1;
    LL my = bigmod(b,p/2,m);
    my*=my;my%=m;
    if(p & 1)my*=b,my%=m;
    return my;
}
LL setb(LL n,LL pos){return n=n | (1 << pos);}
LL resb(LL n,LL pos){return n=n & ~(1 << pos);}
bool checkb(LL n,LL pos){return (bool)(n & (1 << pos));}

int n;
char str[505][505];
vector < pair<int,LL> > v[505];

void show(int idx)
{
	for(int i = 0; i < sz(v[idx]); i++)
	{
		printf("%d-%lld  ",v[idx][i].first,v[idx][i].second);
	}
	NL;
}

LL get_val(int idx,int l,int r)
{
	LL ret = 0;
	for(int i = l; i <= r; i++)
	{
		int my = str[idx][i] - '0';
		ret *= 2;
		ret += my;
	}
	return ret;
}

struct info
{
	char pref[555],suff[555];
	int plen,slen;
	int len;
	void show()
	{
		printf("pref %s  suff %s\n",pref,suff);
	}
};
info bra[10005];

void init()
{
	int k;
	rep(k,n)
	{
		int len = strlen(str[k]);
		for(int i = 0; i < len; i++)
		{
			for(int j = i; j < len; j++)
			{
				LL val = get_val(k,i,j);
				v[k].pb( make_pair(j-i+1,val) );
			}
		}
		sort(v[k].begin(),v[k].end());
		un(v[k]);
		//show(k);

		///add prefix
		for(int i = 0; i < min(len,40); i++) bra[k].pref[i] = str[k][i];
		bra[k].plen = min(len,40);
        ///add suffix
        int st = max(0,len-40);
        for(int i = max(0,len-40); i < len; i++) bra[k].suff[i-st] = str[k][i];
        bra[k].slen = min(40,len);

        bra[k].len = len;

        //bra[k].show();
	}
}

void Merge(int x,int y,int idx)
{
	info tmp;
	mem(tmp.pref,0);
	mem(tmp.suff,0);
	for(int i = 0; i < sz(v[x]); i++) v[idx].pb( v[x][i] );
	for(int i = 0; i < sz(v[y]); i++) v[idx].pb( v[y][i] );

    char c[555];
    int l = 0;
    for(int i = 0; i < bra[x].slen; i++) c[l++] = bra[x].suff[i];
    for(int i = 0; i < bra[y].plen; i++) c[l++] = bra[y].pref[i];
    c[l] = 0;
    for(int i = 0; i < l; i++)
    {
		int curlen = 0;
		LL curval = 0;
		for(int j = i; j < l; j++)
		{
			int my = c[j] - '0';
			curlen++;
			curval *= 2;
			curval += my;
			if( curlen <= 20 ) v[idx].pb( make_pair(curlen,curval) );
		}
    }
    sort( v[idx].begin() , v[idx].end() );
    un( v[idx] );
    //show(idx);
    //printf("c %s\n",c);

	///prefix
	for(int i = 0; i < bra[x].plen; i++) tmp.pref[i] = bra[x].pref[i];
	if( bra[x].plen < 40 )
	{
		int need = 40 - bra[x].plen;
		need = min(need,bra[y].plen);
		int st = bra[x].plen;
		for(int i = 0; i < need; i++) tmp.pref[st+i] = bra[y].pref[i];
		tmp.plen = bra[x].plen + need;
	}
	else tmp.plen = bra[x].plen;
	///suffix
	int now = 0;
	if( bra[y].slen < 40 )
	{
		int need = 40 - bra[y].slen;
		need = min(need,bra[x].slen);
		int st = bra[x].slen - need;
		for(int i = st; i < bra[x].slen; i++) tmp.suff[i-st] = bra[x].suff[i];
		now = need;
		tmp.slen = need + bra[y].slen;
	}
	else tmp.slen = bra[y].slen;
	for(int i = 0; i < bra[y].slen; i++) tmp.suff[now++] = bra[y].suff[i];

	/*for(int i = 0; i < min(40,bra[x].len); i++) tmp.pref[i] = bra[x].pref[i];
	int need = 40 - bra[x].len;
	if( need < 0 ) need = 0;
	int st = bra[x].len;
	for(int i = 0; i < min(bra[y].len,need); i++) tmp.pref[st+i] = bra[y].pref[i];*/



    /*///pref suff
    if( bra[x].plen + bra[y].slen < 100 )
    {
		//D("HI");
		for(int i = 0; i < min(40,l); i++ ) tmp.pref[i] = c[i];
		tmp.plen = min(40,l);
		int st = max(0,l-40);
		for(int i = max(0,l-40); i < l; i++ ) tmp.suff[i-st] = c[i];
		tmp.slen = min(40,l);
    }
    else
    {
        strcpy(tmp.pref,bra[x].pref);
        tmp.plen = bra[x].plen;
        strcpy(tmp.suff,bra[y].suff);
        tmp.slen = bra[y].slen;
    }*/

	bra[idx] = tmp;
	//bra[idx].show();
}

int Q(int x,int y,int idx)
{
	Merge(x,y,idx);
	int ret = 0;
	int prv = 0,cur = 1;
	for(int i = 1; i <= 20; i++)
	{
		cur *= 2;
        int l = prv;
        int r = prv + cur;
        if( sz(v[idx]) < r ) return ret;

        if( v[idx][l].first == i && v[idx][l].second == 0 && v[idx][r-1].first == i && v[idx][r-1].second == (cur-1) ) ret = i;
        else return ret;

        prv = r;
 	}
 	return ret;
}

int main()
{
	//FI;
	int i,q,x,y;
	si(n);
	rep(i,n) ss(str[i]);
	init();
	si(q);
	rep(i,q)
	{
		sii(x,y);
		int ret = Q(x,y,n+i);
		pi(ret); NL;
	}
	return 0;
}
