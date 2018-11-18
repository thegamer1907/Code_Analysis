#include<bits/stdc++.h>
using namespace std;

struct Node{
    string pfix,sfix;
    int msk[1<<12];
    Node(){pfix=sfix="";}
};

Node node[205];

void go(int i)
{
    int pos=1,k,j;
    for(k=1;k<=10;k++){
        for(j=0;j<(1<<k);j++){
            string ss="";
            for(int x=0;x<k;x++){
                if(j & (1<<x))ss+='1';
                else ss+='0';
            }
            if(node[i].pfix.find(ss)==-1)node[i].msk[pos++]|=0;
            else node[i].msk[pos++]|=1;
        }
    }
    node[i].sfix=node[i].pfix.substr(max(0,(int)node[i].pfix.size()-15),15);
    node[i].pfix=node[i].pfix.substr(0,15);
}

int main()
{
    //freopen("input.txt","r",stdin);
    int n,i,j,k;
    cin>>n;
    for(i=1;i<=n;i++){
        cin>>node[i].pfix;
        go(i);

    }
    //for(i=1;i<=n;i++)cout<<node[i].pfix<<' '<<node[i].sfix<<endl;
    int m;
    cin>>m;
    for(i=n+1;i<=n+m;i++){
        int a,b;
        cin>>a>>b;
        node[i].pfix=node[a].sfix+node[b].pfix;
        for(j=1;j<=(1<<11);j++)node[i].msk[j]=node[a].msk[j] | node[b].msk[j];
        go(i);
        string str=node[a].pfix+node[b].pfix;
        node[i].pfix=str.substr(0,15);
        str=node[a].sfix+node[b].sfix;
        node[i].sfix=str.substr(max(0,(int)str.size()-15),15);

        int pos=1;
        for(k=1;k<=10;k++){
            int cnt=0;
            for(j=0;j<(1<<k);j++){
                if(node[i].msk[pos++])cnt++;
            }
            if(cnt!=(1<<k))break;
        }
        cout<<k-1<<endl;

    }
}
