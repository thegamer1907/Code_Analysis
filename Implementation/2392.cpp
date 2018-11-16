#include<cstdio>
#include<algorithm>
#include<cstring>
#include<iostream>
#include<cmath>
#include<string>
#include<map>
#include<list>
#include<queue>
#include<utility>
#include<sstream>
#include<cstdlib>
#include<cctype>
#include<math.h>
#include<set>
#include<stack>
#include<fstream>
#include<numeric>
#include<string>
#include<vector>
#include<iterator>
using namespace std;
int main()
{
   int i,j,k,l,m,n,lim=240,ans=0,sum=0;;
   cin>>n>>k;
   for(i=1;i<=n;i++){
    sum+=i*5;
    if(sum+k<=lim){
        ans++;
    }
    else break;
   }
  cout<<ans<<endl;
}