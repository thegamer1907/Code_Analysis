#include<iostream>
#include<cstdio>
#include<queue>
#include<algorithm>
#include<string>
#include<vector>
#include<cstdlib>
#include<cmath>
#include<set>
#include <iomanip>
#include<cstring>
#include <iterator>
#include<stack>

#define maxn 1028
using namespace std;


int main()
{
    int n;
    string answer;
    string bark;
    cin>>answer;
    cin>>n;
    bool num[3]={false,false,false};
    for(int i=0;i<n;i++)
    {
        cin>>bark;
        if(bark==answer)
            num[1]=true;
        if(bark[0]==answer[1])
            num[2]=true;
        if(bark[1]==answer[0])
            num[0]=true;
    }
    if( (num[0]&&num[2])||num[1] )
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}


