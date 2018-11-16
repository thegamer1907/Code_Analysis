#include<iostream>
#include<cstring>
#include<algorithm>
#include<vector>
#include<cstring>
using namespace std ;
typedef long long ll ;
#define pb push_back
#define pop pop_back
#define all(x) x.begin() , x.end()
using namespace std ;
int n , v[101] , cnt , one , cm[101]; 
int main()
{
 //freopen("input.txt" , "r" , stdin);
 scanf("%d" , &n);
 for(int i = 0 ; i < n ; ++i){
   scanf("%d",v+i);
   if(v[i]) {++cnt; v[i]=-1; }
   else v[i]=1;  
 }
 int mx = -10 ;
 int sum = 0 ;
 for(int i=0;i<n;++i)
 {
   sum+=v[i]; 
   sum>mx?mx=sum:sum=sum;
   sum<0?sum=0:sum=sum;
 }
 printf("%d\n",mx+cnt);
}  