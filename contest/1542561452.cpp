#include <bits/stdc++.h>

using namespace std;
int main()
{
double h,m,s,t1,t2,i,j,k=0;
cin>>h>>m>>s>>t1>>t2;
if(t1==t2)
    {
          cout<<"YES";
          return 0;
    }
if(t2<t1){swap(t1,t2);} 

if(s!=0) m+=0.5;
if(m!=0) h+=0.5;
if(m==0) m=60;
if(s==0) s=60;

if(h>=t1 && h<=t2&&m>=5*t1 && m<=5*t2&&s>=5*t1 && s<=5*t2){
printf("YES");      return 0;
}

swap(t1,t2);
if((h>=t1 || h<=t2)&&(m>=5*t1 || m<=5*t2)&&(s>=5*t1 || s<=5*t2)){
printf("YES");  
}else {printf("NO");} 
        return 0;
}
