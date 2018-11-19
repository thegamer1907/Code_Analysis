#include <vector>
#include <iostream>
#include <algorithm>
#include <utility>
#include <map>
#include <iomanip>
#include <string>
#include <string>
#include <climits>
#include <stdio.h>
#include <cmath>
#include <bits/stdc++.h>

#define For(i,x,n)  for(long long i=x;i<n;i++)
#define mod 1000000007
#define PI 3.141592653589793
#define INF 999999999999999999
#define N 1000005

typedef long long ll;

using namespace std;
//num = atoi(s.c_str()); //convert string s to integer num
//n.erase(i,std::string::npos); //erase i th position in string n , decreasing string size
//s.find(b)!= std::string::npos - find string b in string a - true if found

int main()
{
    cin.tie(0);
	ios::sync_with_stdio(0);
    cout<<fixed;
    cout<<setprecision(12);

    ll h, m , s, t1, t2;
    cin>>h>>m>>s>>t1>>t2;
    if(t2 < t1){
        ll tmp = t1;
        t1 = t2;
        t2 = tmp;
    }
    ll c1,c2,c3;
    c1=c2=c3=0;
    if(h<t1 || h>=t2)
        c1 = 1;
    if(m<t1*5 || m>=t2*5)
        c2 = 1;
    if(s<t1*5 || s>=t2*5)
        c3 = 1;
    if(c1==c2 && c2==c3)
        cout<<"YES";
    else
        cout<<"NO";

    return 0;
}

void setprime(bool isprime[],ll n)
{
    For(i,0,n)
    isprime[i]=true;

    isprime[0]=false;
    isprime[1]=false;

    For(i,2,n)
    {
        for(ll j=2;i*j<n;j++)
        isprime[i*j]=false;
    }
}

ll BinarySearch(ll arr[], ll first, ll last, ll search)
{
    ll middle = (first+last)/2;
	while (first <= last)
	{
		if(arr[middle] < search)
		{
			first = middle + 1;

		}
		else if(arr[middle] == search)
		{
			return middle;
		}
		else
		{
			 last = middle - 1;
		}
		middle = (first + last)/2;
	}
	if(first > last)
	{
		return -1;
	}
}

ll choose(ll n,ll k)
{
    if(k==0)  return 1;
    return (n* choose(n-1,k-1))/k;
}

void showArray(ll a[], ll n){
    For(i,0,n){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

ll gcd(ll a, ll b)
{
    if(b==0)
        return a;
    return gcd(b,a%b);
}

