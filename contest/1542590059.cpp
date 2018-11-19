#include<bits/stdc++.h>

using namespace std;
char str[5],str1[5];

int main()
{
   int n, i, j, m1=0, m2=0, k=0;
   cin>>str;
   cin>>n;

   for(i=0; i<n; i++){
    cin>>str1;
    if(str1[0]==str[0] && str1[1]==str[1]) k=1;

    if(str1[0]==str[1]) m1=1;

    if(str1[1]==str[0]) m2=1;
   }

   if(k==1 || (m1==1&&m2==1)) cout<<"YES"<<endl;

   else cout<<"NO"<<endl;
    return 0;
}

