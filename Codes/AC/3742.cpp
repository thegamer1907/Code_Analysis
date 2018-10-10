#include <bits/stdc++.h>
typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;
const ll mod = 1000000007;
#define PI 3.14159265;
#define fio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
using namespace std;
string vowel = ("aeiouyAEIOUY");

int main()
{
    fio

    string s ;
    cin >> s ;

     long long nb , ns ,nc ;
    cin >> nb >> ns >> nc ;

    long long pb , ps , pc;
    cin >> pb >> ps >> pc ;

    long long r ;
    cin >> r ;

    long long bc = 0, sc = 0  , cc = 0 ;

    for(int i = 0 ; i < s.size() ; i ++)
    {
        if(s[i] == 'S') sc++;
        if(s[i] == 'C') cc++;
        if(s[i] == 'B') bc++;
    }

    long long counter = 0 ;

    while(r > 0)
    {
        if(nb - bc >= 0)
        {
            nb-= bc;
        }
        else
        {
            r -= pb* (bc-nb);
            nb = 0 ;
        }

        if(ns -sc >= 0)
        {
            ns -= sc;
        }
        else
        {
            r -= ps * (sc -ns);
            ns = 0 ;
        }

        if( nc - cc>= 0)
        {
            nc -= cc ;
        }
        else
        {
            r -= pc * (cc - nc);
            nc = 0;
        }

        if(r >= 0)
        {
            counter ++;
        }

        if( (nc == 0 || cc == 0) && (nb == 0 || bc == 0) && (ns == 0 || sc ==0 ))
        {
            counter += r / (pb*bc + sc*ps + cc * pc);
            break;
        }


    }


    cout << counter ;



    return 0;
}