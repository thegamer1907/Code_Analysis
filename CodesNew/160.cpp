#include<iostream>
#include<algorithm>
#include<cmath>
#define ll long long
#include<set>
#include<iterator>
using namespace std;
int main()
{ ll n,k,i;
  cin>>n>>k;
   for(i=1;;i++)
   {
       if(k%(ll)pow(2,i)==pow(2,(i-1)))
       { cout<<i;
         return 0;
       }
   }
}
