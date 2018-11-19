#include <iostream>
#include <algorithm>
#include <math.h>
#include <string>
#include <cstring>
#include <string.h>
#include <vector>
#include <cstdio>
#include <map>
#include <set>
#include <queue>
#include <limits.h>
#include <functional>
#define ll long long int
using namespace std;

set<int> hands;
string s;
int n;

int hrhand;
int minhand;
int sechand;

int main()
{
int h,m,s,t1,t2;
cin>>h>>m>>s>>t1>>t2;
if(h==12)
    h=0;


hrhand=h*3600 + m*60 + s;
minhand=m *(3600/5) + s ;
sechand=s * (3600/5);

//cout<<hrhand<<" "<<minhand<<" "<<sechand<<endl;
hands.insert(hrhand);
hands.insert(minhand);
hands.insert(sechand);

bool works1 = true;
bool works2 = true;

int time1 = t1 * 3600;
int time2 = t2 * 3600;

if(t1==12)
time1=0;
if(t2==12)
time2=0;

//cout<<time1<<" "<<time2<<endl;

for(int i=time1+1; i!= time2; i++)
{
//printf("%d\n" ,i);
i=i%43200;

if(i==time2)
    break;

    if(hands.count(i))
    {

        works1=false;
        break;
    }

}



for(int i=time1-1; i!= time2; i--)
{
if(i==-1)
i=43199;

if(i==time2)
    break;
//printf("%d\n" ,i);
    if(hands.count(i))
    {
        works2=false;
        break;
    }
}

if(works1 || works2)
    cout<<"YES"<<endl;

    else cout<<"NO"<<endl;
}
