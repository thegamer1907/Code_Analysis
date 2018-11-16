#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    #ifdef A.R.Limon
    freopen( "in.txt", "r", stdin );
    #endif ///  A.R.Limon
    int n,i,r,ct,t,p,len,j;
    char str[52];
    while(cin>>n>>t)
    {
       cin>>str;
       int len=strlen(str);
       for(i=1;i<=t;i++){
        for(j=0;j<len;){
            if(str[j]=='B' && str[j+1]=='G') {
                swap(str[j],str[j+1]);
                j+=2;
            }
            else ++j;
        }
       }
       cout<<str<<endl;
    }
}
