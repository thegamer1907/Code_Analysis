#include<bits/stdc++.h>
using namespace std;

int main()
{


int hour,minu,sec,src,des;
cin>>hour>>minu>>sec>>src>>des;

if(sec>=1) minu++;
sec+=4;
sec/=5;
if(minu>=1) hour++;
minu+=4;
minu/=5;
if(sec == 0) sec = 12;
if(minu == 0) minu = 12;
if(hour>12) hour%=12;
int arr[15] = {0};
arr[hour] = 1;
arr[minu] = 1;
arr[sec] = 1;

int ck = 1;
if(src>des) swap(src,des);
for(int i=src+1;i<=des;i++)
{
    if(arr[i] == 1)
    {
        ck = 0;
        break;
    }
}
if(ck == 1)
{
    cout<<"yes"<<endl;
    return 0;
}
ck = 1;
for(int i=src;i>0;i--)
    if(arr[i] == 1) ck = 0;
//cout<<"haha"<<endl;
for(int i=des+1;i<=12;i++)
    if(arr[i] == 1) ck = 0;
if(ck == 1) cout<<"yes"<<endl;
else cout<<"no"<<endl;

}
