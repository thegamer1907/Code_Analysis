//gorib er code, dekhiyen na, plzzz
#include<bits/stdc++.h>
//get your ass out of here
typedef long long ll;
//hey, little gay looking boy
long kaj, khela, shit, dik, mair, chil, kop, xd, lol, lmao, rofl, mod, paltu;
//variable namez, hingshe hoy? you fag!
#define pi 2*acos(0.0)
#define mod 1e9+7
#define meme(a, val) memset(a, val, sizeof (a))
#define input(x) (cin >> x)
#define print(x) (cout << x << endl)
//dafuq motherfuckers!
#define modkha(i) (i++)
#define panikha(i) (++i)
#define manusho(i) (i--)
//I think I stuck my dick somewhere, dickhead!
using namespace std;
int main()
{
    int n, t; input(n); input(t);
    char s[n]; input(s);
    while (t--)
    {
        for (int i = 1; i < n; modkha(i))
        {
            if (s[i] == 'G' && s[i-1] == 'B')
            {
                s[i] = 'B';
                s[i-1] = 'G';
                modkha(i);
            }
        }
    }
    print(s);
    return 0;
}
//ei gorib er bal sal code dekhe ki bal ta chirlen?!
//In the end, this code doesn't even matter
/*If you give me wrong answer, I don't give a fuck
If you give me compilation error, run time error,
still don't give a fuck
But if you give me time limit exceeded,
motherfucking son of a bitch! fuck ya!*/
//indecent boy Shimanto wrote this code
