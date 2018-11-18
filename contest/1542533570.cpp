
// g++ -std=c++11 -Wl,--stack,268435456 test.cpp -o test
							

//fc in1 in2        //file compare

#include <iostream>
using std::cin;
using std::cout;
using std::string;
using std::endl;
//string s;while(getline(cin,s));


#include <algorithm>
using std::sort;
using std::min;
using std::max;
using std::pair;//pair <int,int> data[100];sort(data,data+100);

#include <math.h>
//sqrt(123.123)
//ceil(0.12)=1
//pow(x,2)=x^2
//double pi = 2 * acos(0.0);

#include<cstdio>
//printf()
// %I64d for long long 
//printf("%.*f\n", n, pi); // this is the way to manipulate field width

#include <map>
using std::map;
//map.find(x) != map.end()    instead of map[x] == 0  because this one adds x to map???

#include <stdlib.h>
//abs(-123);

#include <vector>
using std::vector;
//sort(v.begin(),v.end()); 
//v.resize(unique(v.begin(),v.end()) - v.begin());

//sort(v.begin(), v.end());
//binary_search(v.begin(), v.end(), 10); //1(true) or 0(false)
// *(lower_bound(v.begin(), v.end(), 10));
// *(upper_bound(v.begin(), v.end(), 10));

#include <queue>
using std::queue;

#include <deque>
using std::deque;

#include <stack>
using std::stack;

#include <set>
using std::set;
using std::multiset;

// index = (index + 1) % n; //index++; if (index >= n) index = 0;
// index = (index + n - 1) % n;// index--; if (index < 0) index = n - 1;





/*
long long gcd(long long a, long long b)
{
    //O(log(max(a,b)))
    long long t;
    while(b!=0)
    {
        t=a%b;
        a=b;
        b=t;
    }
    return a;
}
*/





/*
	//all possible subsets of {p[0], p[1], p[2], . . . , p[N-1]}
	int N=10;	
	int p[N];
	for(int i=0;i<N;i++)p[i] = 2*i;
	
	for (int i = 0; i < (1 << N); i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (i & (1 << j)) // if bit j is on
			{
				printf("%d ", p[j]); // this is part of set
			}
		}
		printf("\n");
	}	
*/





/*
	//permutations
	int N = 8;
	vector<int> p(N,0);	
	for (int i = 0; i < N; i++) p[i] = i;
	do {
		for (int i = 0; i < N; i++) printf("%c ", 'A' + p[i]);
		printf("\n");
	}while (  next_permutation(p.begin(), p.end())  );
*/





/*
struct Node
{
	int a;
	int b;
	int c;
	Node(int x,int y,int z):a(x),b(y),c(z)
	{
	}	
};
bool comp(Node& x, Node& y)
{
	return x.c<y.c;
}

//or second option

/*
//must return true if first>second
struct classcomp {
    bool operator() (const int& lhs, const int& rhs) const{
        return lhs>rhs;
    }
};
*/

















//POCHINIT SECOND VERSION OBRATNOYE V KOLTSE
/*
//x!/(x-y)!/y!
long long C(int x,int y)
{
    if(x<y){
        return 0;
    }
    long long answer=1;
    int i;
    if(y>x-y)
    {
        y=x-y;
    }
    for(i=1;i<=y;i++)
    {
        answer*=(x+1-i);
        answer/=i;
    }
    return answer;
}
*/
/*
//C(x,y) % mod
long long C(long long x,long long y)
{
    long long mod=1000000007;
    if(x<y){
        return 0;
    }
    long long answer=1;
    int i;
    if(y>x-y)
    {
        y=x-y;
    }
    for(i=1;i<=y;i++)
    {
        answer*=(x+1-i);
        answer%=mod;
    }
    for(i=1;i<=y;i++)
    {
        while(answer%i!=0){
            answer+=mod;
        }
        answer/=i;
        answer%=mod;
    }
    return answer%mod;
}
*/
/*
for (i=0; i<1010; i++) {
    c[i][0]=1;
    for (j=1; j<=i; j++) c[i][j]=(c[i-1][j-1]+c[i-1][j])%mod;
}
*/





/*
MODULO
x/y = x*(1/y == obr)%MOD;        
*/
/*
long long binPower(long long a,long long pow, long long MOD)
{
	if(a == 0)
	{
		return 0;
	}
	long long res = 1;
    while(pow)
	{
		if(pow & 1)
		{
			res *= a;
			res %= MOD;
		}
		a *= a;
		a %= MOD;
		pow >>= 1;
	}
	return res;
}

long long obrForNumModPrime(long long x,long long mod)
{
	long long pow = mod-2;
	return binPower(x,pow,mod);
}
long long divMod(long long a,long long b, long long mod)
{
		return a*obrForNumModPrime(b, mod)%mod;
}
*/

int main()
{

	
	string s;cin>>s;
	string data[100];
	int n;cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>data[i];
	}
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			string t = data[i] + data[j];
			for(int k=0;k<3;k++)
			{
				if(s[0] == t[k] && s[1]==t[k+1])
				{
					cout<<"YES";
					return 0;
				}
			}
		}
	}
	cout<<"NO";

	
	return 0;
}







