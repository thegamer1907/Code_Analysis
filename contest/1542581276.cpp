#include<iostream>
#include<stdio.h>  
#include<algorithm>  
#include<string.h>  
#include<queue>  
#include<map>  
#include<vector>  
#include<math.h>
#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<set>
#include<ctime>
#include<vector>
#include<cmath>
#include<algorithm>
#include<map>
#include<queue>
#include<deque>
#define inf 2000000000
#define INF 1<<29 
#define s(a) scanf("%d",&a)
#define me(a,b) memset(a,b,sizeof(a)) 
typedef long long ll;
using namespace std; 
const int maxn=1e6+5;
const int mo=1e9+7;
inline int read()
{
    int x=0,f=1;char ch=getchar();
    while(ch<'0'||ch>'9'){if(ch=='-')f=-1;ch=getchar();}
    while(ch>='0'&&ch<='9'){x=x*10+ch-'0';ch=getchar();}
    return x*f;
}
priority_queue<ll,vector<ll>,greater<ll> >que;

int main () {
    
    double h,m;
	int t1,t2,s,hh;
    while(~scanf("%d%lf%d%d%d",&hh,&m,&s,&t1,&t2)){
    	t1%=12,t2%=12,hh%=12;
    	m+=1.0*s/60;
    	h=hh*1.0+1.0*m/60;
    	if(t1>t2){int temp=t1;t1=t2;t2=temp;}
    	int flag=0;
    	if(h>t1&&h<t2&&5*t1<m&&5*t2>m&&5*t1<s&&5*t2>s){
    		flag=1;
		}
    	else if(h<t1||h>t2){
    		if(m<5*t1||m>5*t2){
    			if(s<5*t1||s>5*t2){
    				flag=1;
				}
			}

		}
    	//cout<<h<<" "<<m<<" "<<s<<" "<<t1<<" "<<t2<<endl;
    	if(flag)puts("YES");
    	else puts("NO");
	}
    
    
    return 0 ;
}
