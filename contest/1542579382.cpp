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
typedef long long ll;
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
    
int gcd(int inp,int y)
{
	if(inp==0)
	{
		return y;
		
	}
	else
	return gcd(inp%y,y);
}
 
struct vect
{   struct vect *foll; 
    ll val;
    struct vect *succ;
    
};
void upd(struct vect**beg, struct vect**end, ll xd)
{
    struct vect* arr=(struct vect* )malloc(sizeof(struct vect));
    arr->val=xd;
    arr->succ=zero;
 
    if (*beg==zero)
    {
        arr->foll=zero;
        *beg=arr;
        *end=arr;
        return;
    }
    /*if(xp==2)
	cout<<"YES"<<endl;
	else
	cout<<"NO"<<endl;
	*/
 
 
    (*end)->succ=arr;
    arr->foll=*end;
    *end=arr;
    
}
 
void change(struct vect**beg,struct vect**end)
{
    if(*beg==*end)
        {
            return;
        }
 
    (*end)->succ = *beg;
    (*beg)->foll =*end;
    *beg=*end;
    /*  cin.tie(0);
     freopen("in01.txt", "r", stdin);
    freopen("out01.txt", "w", stdout);
    cout.tie(0);
    */
    *end=(*end)->foll;
    (*end)->succ=zero;
    (*beg)->foll=zero;
}
 
 

int main() 
{
    int num;
    int xa;
    int inp;
     /*  cin.tie(0);
     freopen("in01.txt", "r", stdin);
    freopen("out01.txt", "w", stdout);
    cout.tie(0);
    */
    scanf("%d",&num);
    scanf("%d",&xa);
    
    bool mark = 0;
    vector<int> vas(1<<(xa+1),0);
    for(int i=0;i<num;i++)
    {
        int xp=0;
        for(int j=0;j<xa;j++)
        {
            scanf("%d",&inp);
            xp+=inp<<j;
        }
        vas[xp]++;
    }
    for(int i = 1 ; i< 1<<(1<<(xa)); i++)
    {
        vector<int> arr(xa);
        int comp=0;
        bool answer = 1;
        for(int j = 0; j<(1<<xa); j++)
        {
            if((i&(1<<j)) && (vas[j]==0))
            {
                answer = 0; 
                break; 
            }
        }
        if(!answer)
            continue;
        for(int j = 0; j<(1<<xa); j++)
        {
            if(i&(1<<j))
            {
                comp+=1;
                for(int l=0;l<xa;l++)
                    if(j&(1<<l))
                        arr[l]++;
            }
        }
        mark = 1;
        for(int j=0;j<xa;j++)
        {
            if(2*arr[j]>comp)
            {
                mark=0;
                break;
            }
        }
        if(mark==true)
        {
            break;
        }
         /*  cin.tie(0);
     freopen("in01.txt", "r", stdin);
    freopen("out01.txt", "w", stdout);
    cout.tie(0);
    */
    }
    if(mark)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
