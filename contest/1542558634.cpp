#include<bits/stdc++.h>
/**Define file I/O **/
#define f_input freopen("input.txt","r",stdin)
#define f_output freopen("output.txt","w",stdout)
/**Define memory set function**/
#define mem(x,y) memset(x,y,sizeof(x))
/**Define function and object**/
#define SQR(x) ((x)*(x))
#define DIS(a,b,c,d) sqrt(SQR(a-c)+SQR(b-d))
/**Define constant value**/
#define ERR 1e-9
#define pi (2*acos(0))
#define pb push_back
#define mp make_pair
#define M 1000000007
/**Define input**/
/** priority_queue<int,vector<int>, prioritycom > pq **/
/**  set<int>::iterator it **/
using namespace std;
/**Typedef**/
typedef long long int ll;
const int INF=0x7FFFFFFF;
/**Template & structure**/
struct prioritycom{bool operator()(const int& l, const int& r){return l < r;}};/// priority queue compare function
template<typename T>T lcm(T a, T b){return a / __gcd(a,b) * b;}
template<class T>T bigmod(T n,T p,T m){if(p==0)return 1;if(p%2==0){T t=bigmod(n,p/2,m);return (t*t)%m;}return (bigmod(n,p-1,m)*n)%m;}
template <class string> ll strton(string s){ll won;stringstream ss;ss<<s;ss>>won;return won;}/// convert string to number
template <class T> string ntostr(T n){stringstream ss;ss << n;return ss.str();}/// convert a number to string
template<class T> inline T mod(T n,T m){return (n%m+m)%m;}   ///For Positive Negative No.
template<class T> bool isprime(T n){if(n%2==0){if(n==2)return true;else return false;}T m=sqrt(n);for(T i=3; i<=m; i+=2){if(n%i==0)return false;}return true;}
bool isvowel(char ch){ch=toupper(ch);if(ch=='A'||ch=='U'||ch=='I'||ch=='O'||ch=='E') return true;return false;}
bool isconsonant(char ch){if (isalpha(ch) && !isvowel(ch))return true;return false;}
/******************************End******************************/

int main()
{
    int f=0,g=0,h=0,n;
    string p,s;
    cin>>p;
    scanf("%d",&n);
    while(n--)
    {
        cin>>s;
        if(s[0]==p[0]&&s[1]==p[1])
            f=1;
        if(s[0]==p[1])
            g=1;
        if(s[1]==p[0])
            h=1;
    }
    if(f||(g&&h))
        printf("YES\n");
    else printf("NO\n");
}

