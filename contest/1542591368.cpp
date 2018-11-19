#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cctype>
#include<algorithm>
#include<cmath>
#include<vector>
#include<string>
#include<queue>
#include<list>
#include<stack>
#include<set>
#include<map>
#define ll long long
#define ull unsigned long long
#define db double
//#define rep(i,n) for(int i = 0;i < n; i++)
//#define rep(i,n) for(int i = 0;i < n; i++)
//#define rep(i,a,b) for (int i=(a),_ed=(b);i<=_ed;i++)
#define rep(i,n) for(int i = 0;i < n; i++)
//#define rep(i,a,b) for(int i=(a);i<(b);++i)
#define fil(a,b) memset((a),(b),sizeof(a))
#define cl(a) fil(a,0)
#define pb push_back
#define mp make_pair
#define exp 2.7182818
#define PI 3.141592653589793238462643383279502884
#define inf 0x3f3f3f3f
#define fi first
#define se second
#define eps 1e-6
#define MOD 1000000007ll
using namespace std;



namespace fastIO{
    #define BUF_SIZE 100010
    #define OUT_SIZE 1000000
    bool IOerror=0;
    inline char nc(){
        static char buf[BUF_SIZE],*p1=buf+BUF_SIZE,*pend=buf+BUF_SIZE;
        if(p1==pend){
            p1=buf; pend=buf+fread(buf,1,BUF_SIZE,stdin);
            if (pend==p1){IOerror=1;return -1;}
        }return *p1++;
    }
    inline bool blank(char ch){return ch==' '||ch=='\n'||ch=='\r'||ch=='\t';}
    inline int read(char *s){
        char ch=nc();
        for(;blank(ch);ch=nc());
        if(IOerror)return 0;
        for(;!blank(ch)&&!IOerror;ch=nc())*s++=ch;
        *s=0;
        return 1;
    }
    inline int RI(int &a){
        char ch=nc(); a=0;
        for(;blank(ch);ch=nc());
        if(IOerror)return 0;
        for(;!blank(ch)&&!IOerror;ch=nc())a=a*10+ch-'0';
        return 1;
    }
    struct Ostream_fwrite{
        char *buf,*p1,*pend;
        Ostream_fwrite(){buf=new char[BUF_SIZE];p1=buf;pend=buf+BUF_SIZE;}
        void out(char ch){
            if (p1==pend){
                fwrite(buf,1,BUF_SIZE,stdout);p1=buf;
            }*p1++=ch;
        }
        void flush(){if (p1!=buf){fwrite(buf,1,p1-buf,stdout);p1=buf;}}
        ~Ostream_fwrite(){flush();}
    }Ostream;
    inline void print(char x){Ostream.out(x);}
    inline void println(){Ostream.out('\n');}
    inline void flush(){Ostream.flush();}
    char Out[OUT_SIZE],*o=Out;
    inline void print1(char c){*o++=c;}
    inline void println1(){*o++='\n';}
    inline void flush1(){if (o!=Out){if (*(o-1)=='\n')*--o=0;puts(Out);}}
    struct puts_write{
        ~puts_write(){flush1();}
    }_puts;
};
using namespace fastIO;


#define sign(x) ((x)>eps?1:((x)<-eps?(-1):(0)))
struct point2
{
    double x,y;
    ll val;
    point2(){}
    point2(double _x,double _y)
    {
        x=_x,y=_y;
    }
    point2 operator-(const point2 &ne)
    {
        return point2(x-ne.x,y-ne.y);
    }
    point2 operator+(const point2 &ne)
    {
        return point2(x+ne.x,y+ne.y);
    }
    point2 operator*(const double t)
    {
        return point2(x*t,y*t);
    }
    double operator*(const point2 &o)
    {
        return val*o.val;
    }
};
struct line2
{
    point2 a,b;
    line2(){}
    line2(point2 _a,point2 _b)
    {
        a=_a;
        b=_b;
    }
};
struct circle2 
{ 
    point2 ini;
    point2 d;
    point2 o; 
    double r; 
    double v;
    circle2(){} 
    circle2(point2 _ini,point2 _d,point2 _o,double _r,double _v)
    { 
        ini=_ini;v=_v;o=_o; r=_r; v=_v;
    } 
};
double dmult(point2 a,point2 b)
{
    return a.x*b.x+a.y*b.y;
}
double xmult(point2 a,point2 b)
{ 
    return a.x*b.y-a.y*b.x; 
} 
double xmult(point2 o,point2 a,point2 b) 
{ 
    return (a.x-o.x)*(b.y-o.y)-(b.x-o.x)*(a.y-o.y); 
} 
double xmult(double x1,double y1,double x2,double y2) 
{ 
    return x1*y2-x2*y1; 
}
double xmult(line2 x,line2 y){ return xmult(x.b-x.a,y.b-y.a); }
double length(point2 v)
{
    return sqrt(v.x*v.x+v.y*v.y);
}
double dist(point2 a,point2 b)
{
    return length(a-b);
}
double dist2(point2 a,point2 b)
{
    return dmult(a-b,a-b);
}


bool cmp(point2& a,point2& b)    
{    
    return atan2(a.y,a.x)<atan2(b.y,b.x);
}

double mysqrt(double x) { return max(0.0, sqrt(x)); }
int sgn(double x)
{
    if(fabs(x) < eps) return 0;
    if(x < 0)return -1;
    else return 1;
}


int main(void) 
{
    //freopen("input.in","r",stdin);
    //freopen("output.out","w",stdout);
    string in;
    int n;
    string a[105];
    cin>>in;
    cin>>n;
    for(int i=1;i<=n;++i)
    {
        cin>>a[i];
    }
    int flag=0;
    for(int i=1;i<=n;++i)
    {
        if(a[i]==in) {printf("YES\n");flag=1;break;}

    }
    if(!flag)
    {
    for(int i=1;i<=n;++i)
    {
        for(int j=1;j<=n;++j)
        {
            if((a[i][1]==in[0]&&a[j][0]==in[1])||(a[j][1]==in[0]&&a[i][0]==in[1]))
            {
                printf("YES\n");
                flag=1;
                break;
            }
        }
        if(flag) break;
    }
    }
    if(!flag) printf("NO\n");
    return 0;
}