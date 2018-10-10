#include <bits/stdc++.h>

using namespace std;

#define ff(a,b) for(a = 0 ; a < b ; a++)
#define fft(a,b) for(a = 1 ; a <= b ; a++)
#define pb push_back
#define mp make_pair
#define pf printf
#define db printf("hello\n")
#define bye return 0
#define srt(vec) sort(vec.begin(),vec.end())

typedef long long ll;
typedef unsigned long long ull;

void rd(int &a){scanf("%d",&a);}
void rd(int &a , int &b) {scanf("%d %d",&a,&b);}
void rd(int &a , int &b , int &c) {scanf("%d %d %d",&a,&b,&c);}
void rd(ll &a){scanf("%lld",&a);}
void rd(ll &a , ll &b){scanf("%lld %lld",&a,&b);}
void rd(ll &a , ll &b , ll &c){scanf("%lld %lld %lld",&a,&b,&c);}
void rd(double &a) {scanf("%lf",&a);}
void rd(double &a , double &b){scanf("%lf %lf",&a,&b);}
void rd(double &a , double &b , double &c){scanf("%lf %lf %lf",&a,&b,&c);}

int main()
{
    int n , m , i , lo , hi , mid , com = 0;
    rd(n,m);
    vector <string> pol(n);
    vector <string> ene(m);
    for( i = 0 ; i < n ; i++)
    {
        cin >> pol[i];
    }
    for( i = 0 ; i < m ; i++)
    {
        cin >> ene[i];
    }
    srt(ene);

    for( i = 0 ; i < n ; i++)
    {
        lo = 0;
        hi = m-1;
        while(lo <= hi)
        {
            mid = (lo+hi) / 2;
            if(pol[i] < ene[mid])
            {
                hi = mid - 1;
            }
            else if(pol[i] > ene[mid])
            {
                lo = mid + 1;
            }
            else
            {
                com++;
                break;
            }
        }
    }
    if(com % 2 == 1)
    {
        n++;
    }
    if(n > m)
    {
        pf("YES\n");
    }
    else
    {
        pf("NO\n");
    }

    bye;
}


