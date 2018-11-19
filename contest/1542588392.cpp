#include <bits/stdc++.h>
#define zero NULL
#define FF first
#define rtt rbegin
#define pb push_back
#include <iostream>
#include <cstdio>
#include <cstring>
#include <vector>
#include <algorithm>
#include <cstdio>
#define upperlimit 1000001001
#define epsilon 1e-11
#define TEMP 10000001
#define INF 1e8
#define DEV 1e11
#define debug 1e3
#define PRIMESCHECK 11111111
using namespace std;
 void SieveOfErat()   //sieve of eratosthenes
{
    
    bool prime[1000001];
    memset(prime, true, sizeof(prime));
 
    for (long long p=2; p*p<=1000000; p++)
    {
        
        if (prime[p] == true)
        {
            
            for (long long i=p*2; i<=1000000; i += p)
                prime[i] = false;
        }
    }
}
    
int gcd(int x,int y)
{
	if(x==0)
	{
		return y;
		
	}
	else
	return gcd(x%y,y);
}
int main()
{
    string str;cin>>str;
      /*if(a==2)
	cout<<"YES"<<endl;
	else
	cout<<"NO"<<endl;
	*/
    int n;
    scanf("%d",&n);
    string str2[n];
    for(int i=0;i<n;i++)
        cin>>str2[i];
 
        bool f1=0,fb=0;
        for(int i=0;i<n;i++)
        {
            if(str2[i]==str)
            {
                f1=true;
            }
        }
        if(f1)
            cout<<"YES"<<endl;
        else{
            for(int i=0;i<n;i++)
                if(str2[i][1]==str[0])
                    f1=true;
            for(int i=0;i<n;i++)
                if(str2[i][0]==str[1])
                    fb=true;
            if(f1 & fb)
             {
                 cout<<"YES"<<endl;
             }
            else
            {
                  /*if(a==2)
	cout<<"YES"<<endl;
	else
	cout<<"NO"<<endl;
	*/
                cout<<"NO"<<endl;
            }
        }   
}