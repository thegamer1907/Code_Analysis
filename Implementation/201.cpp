#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

 long long step=0,n,f,s,h,a,b,c,step1=1;

 cin>>a>>b>>c;
 while (a>1)
 {
     a=a/2;step++;
 }
        f=abs(c-b);
        while (f>1)
        {//cout<<f<<" "<<step<<" ";
            c=(c+c%2)/2;
            b=(b+b%2)/2;

            step1++;
                  f=abs(c-b);
                  //cout<<f<<" "<<step<<" ";
        }
        while(min(c,b)%2==0)
        {
            c=(c+c%2)/2;
            b=(b+b%2)/2;

            step1++;
                  f=abs(c-b);
        }
if (step==step1) cout<<"Final!";
else
cout<<step1;


return 0;
}

