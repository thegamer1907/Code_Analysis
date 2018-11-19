// 01.12.2017


/*

*/


# include <iostream>
# include <cstdio>
# include <cstring>
# include <string>
# include <cstdlib>
# include <cmath>
# include <iomanip>
# include <vector>
//                 insert, append, size
# include <stack>
//                 push, pop, top, empty
# include <queue>
//                 push, pop, front, empty
# include <map>
# include <list>
//                 push_back, begin, end
# include <algorithm>


# define iabs(x) ( (x) < 0 ? (-(x)) : (x) )
# define sqr(x) ( (x) * (x) )


//# define lint long long int
# define lint __int64

# define fi first
# define se second

# define x XX_
# define y YY_

# define between(a,b,c)   (((a) <= (b)) && ((b) <= (c)))


using namespace std;


typedef pair <int, int> Pair;
typedef pair <int, Pair> Trio;
typedef pair <Pair, Pair> Quattro;


const int N = 200200;
const int M = 20;
const int K = 20;
const int INF = 2000000000;
const double eps = 1e-12;


int k, h, m, s, t1, t2, n, b, c, d;
double ah, am, as, at1, at2;
double hh, mm, ss, tt1, tt2;
bool ok;


int F ();


int main ()
{
# ifndef ONLINE_JUDGE
   freopen ("B.TXT", "r", stdin);
   freopen ("B.OUT", "w", stdout);
# endif

   ios_base::sync_with_stdio (0);

   cin >> h >> m >> s >> t1 >> t2;

   if ( h > 11 ) h -= 12;
   hh = h, mm = m, ss = s;
   tt1 = t1, tt2 = t2;
/*
   ah = (hh/12 + mm/720 + ss/43200)*360;
   am = (mm/60 + ss/3600)*360;
   as = ss/60*360;

   at1 = tt1/12*360;
   at2 = tt2/12*360;
*/
   ah = hh*30 + mm/2 + ss/120;
   am = mm*6 + ss/10;
   as = ss*6;

   at1 = tt1*30;
   at2 = tt2*30;

   if ( at1 > at2 )
      swap (at1, at2);

# ifndef ONLINE_JUDGE
   cout << h << "h " << m << "m " << s << "s    " << t1 << " - " << t2 << endl;
   cout << "ah = " << setiosflags (ios::fixed) << setw (10) << setprecision (5) << ah
	     << "  am = " << setiosflags (ios::fixed) << setw (10) << setprecision (5) << am
		  << "  as = " << setiosflags (ios::fixed) << setw (10) << setprecision (5) << as
		  << "   at1 = " << setiosflags (ios::fixed) << setw (10) << setprecision (5) << at1
		  << " at2 = " << setiosflags (ios::fixed) << setw (10) << setprecision (5) << at2 << endl;
# endif

   if ( between (at1, ah, at2) && between (at1, am, at2) && between (at1, as, at2) )
      ok = true;
   else if ( ! between (at1, ah, at2) && ! between (at1, am, at2) && ! between (at1, as, at2) )
      ok = true;

   if ( ok )
      cout << "YES";
   else
      cout << "NO";

//   system ("pause");
   return 0;
}

int F ()
{
   return 0;
}
