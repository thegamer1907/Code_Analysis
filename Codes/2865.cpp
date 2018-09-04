#include <bits/stdc++.h>
 
using namespace std;
 
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define fileio freopen("in.in", "r", stdin),freopen("out.out", "w", stdout);
#define ll int
#define FF first
#define SS second
#define mp make_pair
#define pb push_back
#define pii pair<int,int>
#define pll pair<long long int,long long int>
#define sd(x) scanf("%d",&x)
#define slld(x) scanf("%lld",&x)
#define pd(x) printf("%d\n",x)
#define plld(x) printf("%lld\n",x)
#define pss printf
#define MOD 1000000007
#define INF 1e9
#define eps 0.00001
#define endl '\n'
#define debug(n1) cout<<n1<<endl
string st;
ll c[1000005];
bool c1[1000005];
vector<ll>suf,lcp,inv_suf,temp,temp1;
unsigned char mask[] = { 0x80, 0x40, 0x20, 0x10, 0x08, 0x04, 0x02, 0x01 };
#define tget(i) ( (t[(i)/8]&mask[(i)%8]) ? 1 : 0 )
#define tset(i, b) t[(i)/8]=(b) ? (mask[(i)%8]|t[(i)/8]) : ((~mask[(i)%8])&t[(i)/8])
#define chr(i) (cs==sizeof(int)?((int*)s)[i]:((unsigned char *)s)[i])
#define isLMS(i) (i>0 && tget(i) && !tget(i-1))

const int maxn = 1000005; // max size of string
int sa[maxn];
int rankk[maxn]; 
unsigned char *s;
int nn;
//no need to clear sa,rankk

void getBuckets(unsigned char *s, int *bkt, int nn, int K, int cs, bool end) {
    int i, sum = 0;
    for (i = 0; i <= K; i++)
        bkt[i] = 0;
    for (i = 0; i < nn; i++)
        bkt[chr(i)]++;
    for (i = 0; i <= K; i++) {
        sum += bkt[i];
        bkt[i] = end ? sum : sum - bkt[i];
    }
}
void induceSAl(unsigned char *t, int *SA, unsigned char *s, int *bkt, int nn, int K, int cs, bool end) {
    int i, j;
    getBuckets(s, bkt, nn, K, cs, end);
    for (i = 0; i < nn; i++) {
        j = SA[i] - 1;
        if (j >= 0 && !tget(j))
            SA[bkt[chr(j)]++] = j;
    }
}
void induceSAs(unsigned char *t, int *SA, unsigned char *s, int *bkt, int nn, int K, int cs, bool end) {
    int i, j;
    getBuckets(s, bkt, nn, K, cs, end);
    for (i = nn - 1; i >= 0; i--) {
        j = SA[i] - 1;
        if (j >= 0 && tget(j))
            SA[--bkt[chr(j)]] = j;
    }
}
void SA_IS(unsigned char *s, int *SA, int nn, int K, int cs) {
    int i, j;
    unsigned char *t = (unsigned char *) malloc(nn / 8 + 1);
    tset(nn-2, 0);
    tset(nn-1, 1);
    for (i = nn - 3; i >= 0; i--)
        tset(i, (chr(i)<chr(i+1) || (chr(i)==chr(i+1) && tget(i+1)==1))?1:0);
    int *bkt = (int *) malloc(sizeof(int) * (K + 1));
    getBuckets(s, bkt, nn, K, cs, true);
    for (i = 0; i < nn; i++)
        SA[i] = -1;
    for (i = 1; i < nn; i++)
        if (isLMS(i))
            SA[--bkt[chr(i)]] = i;
    induceSAl(t, SA, s, bkt, nn, K, cs, false);
    induceSAs(t, SA, s, bkt, nn, K, cs, true);
    free(bkt);
    int nn1 = 0;
    for (i = 0; i < nn; i++)
        if (isLMS(SA[i]))
            SA[nn1++] = SA[i];
    for (i = nn1; i < nn; i++)
        SA[i] = -1;
    int nname = 0, prev = -1;
    for (i = 0; i < nn1; i++) {
        int pos = SA[i];
        bool diff = false;
        for (int d = 0; d < nn; d++)
            if (prev == -1 || chr(pos+d) != chr(prev+d) || tget(pos+d) != tget(prev+d)) {
                diff = true;
                break;
            } else if (d > 0 && (isLMS(pos+d) || isLMS(prev+d)))
                break;
        if (diff) {
            nname++;
            prev = pos;
        }
        pos = (pos % 2 == 0) ? pos / 2 : (pos - 1) / 2;
        SA[nn1 + pos] = nname - 1;
    }
    for (i = nn - 1, j = nn - 1; i >= nn1; i--)
        if (SA[i] >= 0)
            SA[j--] = SA[i];
    int *SA1 = SA, *s1 = SA + nn - nn1;
    if (nname < nn1)
        SA_IS((unsigned char*) s1, SA1, nn1, nname - 1, sizeof(int));
    else
        for (i = 0; i < nn1; i++)
            SA1[s1[i]] = i;
    bkt = (int *) malloc(sizeof(int) * (K + 1));
    getBuckets(s, bkt, nn, K, cs, true);
    for (i = 1, j = 0; i < nn; i++)
        if (isLMS(i))
            s1[j++] = i;
    for (i = 0; i < nn1; i++)
        SA1[i] = s1[SA1[i]];
    for (i = nn1; i < nn; i++)
        SA[i] = -1;
    for (i = nn1 - 1; i >= 0; i--) {
        j = SA[i];
        SA[i] = -1;
        SA[--bkt[chr(j)]] = j;
    }
    induceSAl(t, SA, s, bkt, nn, K, cs, false);
    induceSAs(t, SA, s, bkt, nn, K, cs, true);
    free(bkt);
    free(t);
}

vector<int> kasai(string txt, const vector<int> &suffixArr)
{
    int n = suffixArr.size();
    vector<int> lcp(n, 0);
    vector<int> invSuff(n, 0);
    for (int i=0; i < nn; i++)
        invSuff[suffixArr[i]] = i;
    int k = 0;
    for (int i=0; i<n; i++)
    {
        if (invSuff[i] == n-1)
        {
            k = 0;
            continue;
        }
        int j = suffixArr[invSuff[i]+1];
        while (i+k<n && j+k<n && txt[i+k]==txt[j+k])
            k++;
        lcp[invSuff[i]] = k;
        if (k>0)
            k--;
    }
    return lcp;
}
vector<int> buildSA(string ss)
{
    vector<int> temp;
    nn = ss.size();
    s = (unsigned char*) ss.c_str();
    SA_IS(s, sa, nn + 1, 256, 1);
    for(int i=1;i<=nn;i++)
        temp.push_back(sa[i]);
    return temp;
}

int main() {
SPEED;
cin>>st;


ll n=st.length();
for(int i=1;i<=n+1;i++)
inv_suf.pb(0);
temp=buildSA(st);
suf.pb(0);
for(int j=0;j<temp.size();j++)
suf.pb(temp[j]+1),inv_suf[temp[j]+1]=j+1;

temp1=kasai(st,temp);
lcp.pb(0);
for(auto j:temp1)
lcp.pb(j);
ll x=inv_suf[1];
ll m=INF;
for(int i=x-1;i>=1;i--)
{
	m=min(m,lcp[i]);
	if(m!=n-suf[i]+1)
		c[m]++;
	if(m==n-suf[i]+1)
		c1[m]=1,c[m-1]++;
}

m=lcp[x];
for(int i=x+1;i<=n;i++)
{
	if(m!=n-suf[i]+1)
		c[m]++;
	if(m==n-suf[i]+1)
		c1[m]=1,c[m-1]++;
	m=min(m,lcp[i]);
}

ll z=0;
for(int i=n;i>=1;i--)
{
	z+=c[i];
	if(c1[i]&&z)
	{
		cout<<st.substr(n-i,i);
		cout<<endl;
		return 0;
	}
}
cout<<"Just a legend"<<endl;
	return 0;
           } 