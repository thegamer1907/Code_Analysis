/*when the going gets tough the tough gets going  */
/*we are what we repeatedly do , Excellence then is not an act but a habit  - aristotle */
/*The best way to predict the future is to create it - abraham lincoln*/
/*First think , second believe , third dream and finally dare - walt disney*/
/*It is during our darkest moments that we must focus to see the light */
/*Nothing is impossible the word itself says "i'm fucking possible man just try me again and again until i seem impossible "*/
/*Dont judge each day by the harvest you reap but by the seeds you plant */
/*Do not dwell in the past, do not dream of the future, concentrate the mind on the present moment*/
/*Success is not final failure is not fatal : it is the courage to continue that counts */ 
/*the future belongs to those who believe in the beauty of their dreams */
/*The pessimist complains about the wind , the optimist waits for it to change; the realist adjusts the sails  */
/*Believe you can and you are half way there */
/*Everything has beauty but not everyone sees it */
/*Life is not about finding yourself , life is about creating yourself*/
/*You are the average of the 5 people you spend the most time with .........*/
/*Everything is hard before it is easy see for example now the list of examples is very long hahahahahaha...... ......*/
/*I believe in miracles .......*/
/*Dare to dream , believe in it and live it */
/*The woods are lovely, dark, and deep, But I have promises to keep, 
And miles to go before I sleep, And miles to go before I sleep.*/
/*Practice as if you have never won, and play as if you have never lost.*/
/*A master failed more times than a beginner has even tried.*/
#include<iostream>
#include<string.h>
//#include <boost/multiprecision/cpp_int.hpp>
#include<deque> 
#include<set>
#include<algorithm>
#include<vector>
#include<stack>
#include<queue>
#include<map>
#include<math.h>
#include<cstdio>
#include<limits.h>
#include<iomanip>
#include<stdlib.h>
#define lli long long 
#define pb push_back
#define mp make_pair
#define pii pair<int , int > 
#define pll pair<lli , lli >
#define PQM priority_queue < lli , vector<lli> , less<lli> > 
#define PQm priority_queue <lli ,  vector<lli> , greater<lli > > 
#define fu( i , a  , n ) for ( int i = a ; i <=n ; i++  )
#define fd( i ,  n , a ) for (int i = n ; i >=a ;i--)
#define rep(i,n) for ( int i = 0 ; i < n;  i++)
#define fst  ios_base::sync_with_stdio(false);cin.tie(NULL);
#define left (2 * ind ) + 1 
#define right (2 * ind ) + 2 
#define pn printf("\n")
#define pi(n) printf("%d" , n ) 
#define pl(n) printf("%I64d" , n )
#define ii(n) scanf("%d" , &n)
#define il(n) scanf("%lld" , &n )
#define ic(n) cin>>n
#define f0 fflush(stdout) 
#define srndfunc srand(chrono:: steady_clock:: now().time_since_epoch().count()) ;
#define pr printf
#define modn 1000000007
#define inf 99999999
#define Pi 3.14159265358979323846264338327950
#define ci cpp_int
#define wt while (t--)

 
using namespace std ;
//using namespace boost:: multiprecision ;
int dx[8] = {0 , -1 , 0  ,  1 , -1 , -1 , 1 , 1 };
int dy[8] = {1 , 0 ,  -1  , 0 , 1 , -1 , 1 ,-1 } ;
int main()
{
    fst ; 
 lli   int t , n , m  ,r , nb ,ns , nc , pb , ps ,pc ; 
    string str ;
    cin>> str ;
    cin>> nb >> ns >> nc ;
    cin>> pb >> ps >> pc ;
    cin>> r ;
    lli ab = 0  , as = 0 , ac = 0;
    rep(i , str.size() ){
        if (str[i] =='B') ab++;
        if (str[i] =='S') as++;
        if (str[i] == 'C') ac++ ;
    }


    lli ans = 0 , lo = 0 , hi = 10000000000000, ans1 = 0 ; 
   
  
    while (lo <= hi ){
        lli mid = (lo + hi ) / 2LL ;
        lli tb = min(mid * ab - nb , mid*ab ), ts = min(mid * as - ns , mid*as  ) , tc = mid * ac - nc ;
        tb = max(0LL ,tb ) ;
        ts = max(0LL , ts ) ;
        tc = max(0LL , tc ) ;
        lli tot = tb * pb + ts * ps + tc * pc ;
        if (tot  <= r ){
            ans = max(ans , mid  ) ;
            lo = mid + 1LL ;
        }
        else
        {
            hi = mid - 1LL ;
        }
    }



    cout<<ans + ans1<<"\n" ;

return 0 ; 
    

}