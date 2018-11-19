#include<iostream>

using namespace std;

int main()
{
int h,m,s,t1,t2;
cin >> h>>m>>s>>t1>>t2;
if(t1<t2)
{
int temp=t2;
t2=t1;
t1=temp;
}
t1*=5;
t2*=5;
h=h*5;if(m==0)m=60;

//if(t1<=h<t2 && t1<=m<t2 && t1<=s<t2)
//    cout<<"Yes1"<<endl;
if(t1==t2)
    cout <<"Yes"<<endl;
else if(t1>h && h>=t2 && t1>m && m>=t2 && t1>s && s>=t2)
    cout <<"Yes"<<endl;
else if((t2>h || t1<=h) && (t2>s || t1<=s) && (t2>m || t1<=m)   )
    cout <<"Yes"<<endl;
else 
cout <<"No"<<endl;


}
