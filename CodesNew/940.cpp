#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<string,int>words;
    int n,i,j,pocount,enemycount,common=0;
    scanf("%d %d",&pocount,&enemycount);
    for(i=1;i<=pocount+enemycount;i++)
    {
        getchar();
        string s;
        cin>>s;
        if(words.count(s)>0)
        {
            common++;
        }
        else
            words[s]=0;
    }
    if(common%2==0)
    {
        pocount+=common/2-common;
    }
    else
    {
        pocount+=common/2-common+1;
    }
    enemycount+=common/2-common;
    if(pocount>enemycount)
    {
        cout<<"YES"<<endl;
    }
    else
        cout<<"NO"<<endl;


}
