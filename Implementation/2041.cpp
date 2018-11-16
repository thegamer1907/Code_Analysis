#include<bits/stdc++.h>
#define pf printf
#define sf scanf
#define db double 
#define z long long int 
using namespace std ;
#define siz 1000001
#define INT_SIZE 32 
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
z i,j,k;
int main() 
    {
       z n;
       cin>>n;
       z a,b,c,e,f,g;
       e=f=g=0;
       while(n--)
       {  
          cin>>a>>b>>c;
          e+=a;f+=b;g+=c;
       }
       if(e==0 && f==0 && g==0)
        cout << "YES";
      else
        cout << "NO";
    return 0;
}