//AUTOR:MURRUGARRA JEFFRI ERWIN
//UNIVERSIDAD: UNIVERSIDAD NACIONAL DE TRUJILLO
#include <bits/stdc++.h>

#define REP(i, a) for( int i = 0; i < a; i++ )
#define RFOR(i,x,y) for(int i = x; i>= y; i--)
#define FOR(i,x,y) for (int i = x; i < y; i++)
#define ITFOR(it,A) for(typeof A.begin() it = A.begin(); it!=A.end(); it++)
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define VE vector <int>
#define mset(A,x) memset(A, x, sizeof A)
#define PB push_back
#define ones(x) __builtin_popcount(x)
#define cua(x) (x)*(x)
#define debug(x) cout <<#x << " = " << x << endl
#define adebug(x,n) cout <<#x<<endl; REP(i,n)cout<<x[i]<<char(i+1==n?10:32)
#define mdebug(x,m,n) cout <<#x<<endl; REP(i,m)REP(j,n)cout<<x[i][j]<<char(j+1==n?10:32)
#define LSOne(S) (S&(-S))

using namespace std;

#define ll long long
#define lli long long int
#define PI acos(-1.0)
#define ii pair<int,int>
#define inf_ll (((1LL<<62)-1)<<1)+1
#define inf_i (1<<31)-1

int main(){
/*
   freopen("input.txt", "r", stdin);
   freopen("out.txt", "w", stdout);
*/
    int h,m,s,t1,t2;
    int freq[120];
    mset(freq,0);
    scanf("%d %d %d %d %d",&h,&m,&s,&t1,&t2);
    freq[s*2]=1;
    (m!=0||s!=0)?freq[(((h*5)+1)%60)*2+1]=1:freq[((h*5)%60)*2]=1;
    (s!=0)?freq[((m)%60)*2+1]=1:freq[((m)%60)*2]=1;
    bool band=false;
    t1=((t1*5)%60)*2;
    t2=((t2*5)%60)*2;
    int i=t1;
    while((i+120)%120!=(t2+120)%120)
    {
        band|=freq[(i+120)%120];
        i++;
    }
    band|=freq[(i+120)%120];
    i=t1;
    bool band2=false;
    while((i+120)%120!=(t2+120)%120)
    {
        band2|=freq[(i+120)%120];
        i--;
    }
    band2|=freq[(i+120)%120];
    //debug(band);
    //debug(band2);
    if(band==0||band2==0)
        printf("YES\n");
    else
        printf("NO\n");
/*
    fclose(stdin);
    fclose(stdout);
*/

    return 0;
}


