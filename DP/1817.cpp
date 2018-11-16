#include<iostream>
#include<string>
#include<iomanip>
#include<vector>
#include<algorithm>
#include<tgmath.h>
#include<cstdio>
#define ll long long
using namespace std;

int main()
{

    int i,j,k,m,n,t=0,tt=0,test,ab[100000],ba[123450],val;
    string str,left;
    cin>>str;
    val=str.length();
    for(i=0;i<val-1;i++){
        if(str[i]=='A' && str[i+1]=='B') ab[t++]=i;
        if (str[i]=='B' && str[i+1]=='A') ba[tt++]=i;


    }
    for(i=0;i<t;i++){for(j=0;j<tt;j++)if(abs(ab[i]-ba[j])>=2)break;if(j<tt)break;}

    if(i<t) printf("YES\n");
    else printf("NO\n");
    //free();   //if pointer array
    return 0;
}
