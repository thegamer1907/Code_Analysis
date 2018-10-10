#include<bits/stdc++.h>

using namespace std;

#define fRead(x)  freopen(x,"r",stdin)
#define fWrite(x) freopen (x,"w",stdout)

#define LL long long
#define ULL unsigned long long
#define ff first
#define ss second
#define pb push_back
#define INF 2e16
#define PI acos(-1.0)
#define mk make_pair
#define pii pair<int,int>
#define pll pair<LL,LL>


#define min3(a,b,c) min(a,min(b,c))
#define max3(a,b,c) max(a,max(b,c))
#define min4(a,b,c,d) min(a,min(b,min(c,d)))
#define max4(a,b,c,d) max(a,max(b,max(c,d)))
#define SQR(a) ((a)*(a))
#define FOR(i,a,b) for(int i=a;i<=b;i++)
#define ROF(i,a,b) for(int i=a;i>=b;i--)
#define REP(i,b) for(int i=0;i<b;i++)
#define MEM(a,x) memset(a,x,sizeof(a))
#define ABS(x) ((x)<0?-(x):(x))

#define scanI(a) scanf("%d",&a)
#define scanI2(a,b) scanI(a) , scanI(b)
#define scanI3(a,b,c) scanI(a), scanI(b), scanI(c)
#define scanI4(a,b,c,d) scanI(a), scanI(b), scanI(c), scanI(d)

#define scanL(a) scanf("%I64d",&a)
#define scanL2(a,b) scanL(a) , scanL(b)
#define scanL3(a,b,c) scanL(a), scanL(b), scanL(c)
#define scanL4(a,b,c,d) scanL(a), scanL(b), scanL(c), scanL(d)

#define SORT(v) sort(v.begin(),v.end())
#define REV(v) reverse(v.begin(),v.end())

#define FastRead ios_base::sync_with_stdio(0);cin.tie(nullptr);

bool Check(int N,int pos) { return (bool)(N&(1<<pos)); }
int Set(int N,int pos) { return (N|(1<<pos)); }

LL BigMod(LL B,LL P,LL M){LL R=1;while(P>0){if(P%2==1){R=(R*B)%M;}P/=2;B=(B*B)%M;}return R;}

const int N=1e6;
int kmp[N+5];
string str;

void genKMP()
{
    int m = str.length(), k;
    kmp[0] = -1;
    for (int i = 1; i <= m; i++)
    {
        k = kmp[i - 1];
        while (k >= 0)
        {
            if (str[k] == str[i - 1])
                break;
            else
                k = kmp[k];
        }
        kmp[i] = k + 1;
    }
}

int main()
{
    cin >> str;
    genKMP();
    int len = str.size();
    int found = 0;
    string s;
    if(kmp[len]!=0)
    {
        FOR(i,1,len-1)
        {
            if(kmp[i]==kmp[len]){found=1;break;}
        }
        if(!found)
        {
            str = str.substr(len-kmp[len],kmp[len]);
            len = str.size();
            genKMP();
            if(kmp[len]!=0)found=1;
        }
    }
    if(found)
    {
        for(int i = 0;i<kmp[len];i++)cout << str[i];
    }else{
        cout << "Just a legend";
    }
}