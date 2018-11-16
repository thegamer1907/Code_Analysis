#include <bits/stdc++.h>
#define PI acos(-1.0)
#define eps 1e-9
#define ll long long
#define ull unsigned long long
#define nl printf("\n")
#define spc printf(" ")
#define sf scanf
#define pf printf
#define INF (LL)1e15
#define mod 1e9+7
#define FI freopen("input.txt","r",stdin)
#define FO freopen("output.txt","w",stdout)
///#define safeMod(a, m) ((((a)%(m))+(m))%(m))/*handling negative sign of remainder*/
///#define isValid(n,m,nx,ny)nx>=0&&nx<n&&ny>=0&&ny<m
///#define triangle_area(a,b,m,n,x,y) (a*(n-y)+m*(y-b)+x*(b-n))
///#define dis_without_sqrt(x,y,x1,y1) (x-x1)*(x-x1)+(y-y1)*(y-y1)
///int ax[]={1, 1, -1, -1, 2, 2, -2, -2}; //knight moves
///int ay[]={2,-2,  2, -2, 1,-1,  1, -1}; //knight moves
/*bool structCompare(struct_name first,struct_name second)
{
    return first.variable_name<second.variable_name //sorts element in increasing order
}*/

using namespace std;

//int dx[]={1,-1,0,0,1,-1,1,-1};//eight direction
//int dy[]={0,0,1,-1,1,-1,-1,1};//eight direction

///int setb(int n,int pos){return n=n | (1 << pos);}
///int resb(int n,int pos){return n=n & ~(1 << pos);}
///int togb(int n,int pos){return n=n ^ (1 << pos);}
///bool checkb(int n,int pos){return (bool)(n & (1 << pos)); }
///lsb T = (S & (-S)),log2(T);
///inline bool isEq(double a, double b){return abs(a - b) < eps;}
///inline bool isEq(double a, double b, double eps){return abs(a - b) < eps;}
///inline double toRad(double deg){return deg*PI/180;}
///inline double toDeg(double rad){return rad*180/PI;}

const int S=12345;
int main()
{
    //FI;
    //FO;
    //ios_base::sync_with_stdio(0); cin.tie(0);
    string s;
    while(cin>>s)
    {
        int siz=s.size();
        string t=s;
        bool flag1=false,flag2=false;
        for(int i=0;i<siz-1;i++)
        {
            if(s[i]=='A'&&s[i+1]=='B')
            {
                s[i]='C';
                s[i+1]='D';
                flag1=true;
                break;
            }
        }

        for(int i=0;i<siz-1;i++)
        {
            if(s[i]=='B'&&s[i+1]=='A')
            {
                flag2=true;
                break;
            }
        }

        if(flag1&&flag2)puts("YES");
        else
        {
            bool nflag1=false,nflag2=false;
            for(int i=0;i<siz-1;i++)
            {
                if(t[i]=='B'&&t[i+1]=='A')
                {
                    t[i]='C';
                    t[i+1]='D';
                    nflag1=true;
                    break;
                }
            }

            for(int i=0;i<siz-1;i++)
            {
                if(t[i]=='A'&&t[i+1]=='B')
                {
                    nflag2=true;
                    break;
                }
            }
            if(nflag1&&nflag2)puts("YES");
            else puts("NO");
        }
    }
    return 0;
}
