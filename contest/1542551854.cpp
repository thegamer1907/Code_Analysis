#include <iostream>
#include <fstream>
#include <cstdio>
#include <cstring>
#include <queue>
#include <stack>
#include <vector>
#include <map>
#include <set>
#include <cmath>
#include <algorithm>
#include <functional>
#define inf 1000000
using namespace std;
typedef long long ll;
const int MAXN=1e5+10;
const int MAX=1e5+10;
const double eps=1e-6;

int n,k;
int vis[20];

int main(){
    #ifdef ONLINE_JUDGE
    #else
    freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    #endif
 	
    int juge=0;
    cin>>n>>k;
    for(int i=1;i<=n;i++){
    	int t,temp=0;
    	for(int j=1;j<=k;j++){
    		scanf("%d",&t);
    		if(t)
    			temp+=pow(2,j-1);
    	}
    	vis[temp]=1;
    }
    for(int i=0;i<=16;i++){
    	for(int j=0;j<=16;j++){
    		if(!(i&j)&&vis[i]&&vis[j])
    			juge=1;
    	}
    }
    if(juge)
    	cout<<"YES"<<endl;
    else
    	cout<<"NO"<<endl;


    return 0;	
}
 	    					 				  		 		  	 		 	