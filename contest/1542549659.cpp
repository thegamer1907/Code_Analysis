#include <bits/stdc++.h>

using namespace std;

int h,m,s,t1,t2;

int c[60];

int main()
{
    cin>>h>>m>>s>>t1>>t2;
    h=h*5%60;
    t1=t1*5%60;
    t2=t2*5%60;
    c[h]++;
    c[m]++;
    c[s]++;
    if(t2<t1)swap(t1,t2);
    int flag=0;
    while(t1<t2){
        flag+=c[t1];
        t1++;
    }
    if(flag%3==0)
        cout<<"yes"<<endl;
    else
        cout<<"no"<<endl;
    return 0;
}



 			   				     	   				 	  	 	