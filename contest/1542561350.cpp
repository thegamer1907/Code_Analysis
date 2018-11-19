

#include <bits/stdc++.h>
//#include <iostream>
using namespace std;

//#include <stdio.h>

//#include <algorithm>
//#include <string.h>
//#include <stack>
//#include <stdint.h>
//#include <math.h>
//#include <hash_map>


int pw(int k)
{
    int g=1;

    for(int f=0;f<k;f++) g*=10;
    return g;
}
 struct vecteur
 {
 long  X;
 long Y;
 long Z;
 double n;
 };
long long produit(long A, long B, long C, long D)
{
    return (A*B-C*D);
}
double norme(long E, long F, long G)
{
    return (sqrt((E*E)+(F*F)+(G*G)));
}
unsigned long long fact(int y)
{
    unsigned long long h=1;
    if(y==0 || y==1) return 1;
    else
    {
        for(unsigned long long j=1;j<y;j++) {h*=(j+1);}
        return h;

    }
}

long long counter(long long a)
{
    long long c = 0;
    for(long long i=1; i<=a; i++)
    {
        if(a%i==0) c++;


    }

    return c;

}

#define ull unsigned long long

bool isprime(ull a)
{
    for(ull i=2; i<a; i++)
    {
        if(a%i==0) return 0;
    }

    return 1;
}



// A function to print all prime factors of a given number n
ull primeFactors(ull n)
{
    ull j = 1,  f = 0;
    // Print the number of 2s that divide n
    while (n%2 == 0)
    {
        if (f == 0) {j*=2; f = 1; }
        //printf("%I64d ", 2);
        n = n/2;
    }

    // n must be odd at this point.  So we can skip
    // one element (Note i = i +2)

    f = 0;
    for (ull i = 3; i <= sqrt(n); i = i+2)
    {
        f = 0;
        // While i divides n, print i and divide n
        while (n%i == 0)
        {
            if (f == 0) {j*=i; f = 1; }
            //printf("%I64d ", i);
            n = n/i;
        }
    }

    // This condition is to handle the case when n
    // is a prime number greater than 2
    if (n > 2) { j*=n ; }

    return j;
}


ull det (ull x1 , ull x2, ull x3, ull y1, ull y2, ull y3)
{


    return (x1*y2 + x2*y3+ x3*y1 - (x2*y1+ x3*y2+ x1*y3) );
}
unsigned long long dist(ull x1, ull y1, ull x2, ull y2)
{
    return  (x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2) ;
}
long long t[20000];
//char f[2000000000];


//std::hash_map <ull, ull> t;
void sieve()
{
    for (ull i =2; i<1e18; i+=2)
    {
        t[i] = 2;
    }

    for(ull i=3; i< 1000010; i+=2)
    {
        if ( t[i] == 0 )
        {
            t[i] = i;
            for(ull j=i+i; j<1000010; j+=i)
            {
                if (t[j] == 0) t[j] = i;
            }
        }
    }
}


int main()
{
    char p[3];  cin >> p;

    int n; cin >>n;

    char t[n][3];

    for(int i=0; i<n; i++)
    {
        cin >> t[i];
        if (t[i][0]==p[0] && t[i][1]==p[1])
        {
            cout << "YES";
            return 0;
        }


    }

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            //cout << "comparing: " << t[i]<<" and "<<t[j]<<": ";
            if ((t[i][1]==p[0] && t[j][0]==p[1])||(t[j][1]==p[0] && t[i][0]==p[1]))
            {
                //cout <<
                cout <<"YES";
                return 0;
            }
        }
    }

    cout << "NO";


    return 0;
}

/*
#include <bits/stdc++.h>

using namespace std;
vector<long> vect;
void fct()
{
    vect.push_back(1);
    long x=1,y=1,z=0;
    long long b=(unsigned long long)(2*pow(10,10));
    while(z<=b)
    {   z=x+y;
        vect.push_back(z);
        x=y; // x = 1
        y=z; // y = 2
    }
}
int main()
{
    fct();

    for(int i=0; i<8; i++) cout << vect[i] << " "; cout << endl;
    int t;cin>>t;
    while(t--)
    {   long long n,nbr=0,a;cin>>n;
        map<long long,long long> m;
        for(long long i=0;i<n;i++)
        {
            cin>>a;
            for(long j=0;j<vect.size();j++) nbr+=m[vect[j]-a];
            m[a]++;
        }
        cout<<nbr<<endl;
    }
    return 0;
}
*/
