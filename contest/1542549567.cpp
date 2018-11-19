#include <iostream>
#include <algorithm>
using namespace std;
struct data{
    int ind,val;
}vct[100005];
int ech[5],k,n;
int a[100005][5];
int verif(int x)
{
    int ok=0;
    int prev[]={0,ech[1],ech[2],ech[3],ech[4]};
    for(int i=1;i<=k;i++)
    {
        ech[i]=0;
        if(a[0][i]>x/2)
        {
            ok=1;
            ech[i]=1;
        }
    }
    if(ok==0)
        return 0;
    for(int i=1;i<=k;i++)
        if(ech[i]!=prev[i])
            return 1;
    return 2;
}
void swapl(int i,int j)
{
    for(int q=0;q<=k;q++){
        a[0][q]-=a[i][q];
        a[i][q]=a[j][q];
    }
}
int comp(data a,data b)
{
    return a.val>b.val;
}
int vlinie(int x)
{
    int val=0;
    for(int i=1;i<=k;i++)
    {
        val=val+ech[i]*a[x][i]*9+a[x][i];
    }
    a[x][0]=val;
    return val;
}
int main()
{
    int i,j,x;
    cin>>n>>k;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=k;j++)
        {
            cin>>a[i][j];
            a[0][j]+=a[i][j];
            a[i][0]+=a[i][j];
        }
    }
    x=n;
    while(verif(x)>=1)
    {
        for(i=1;i<=x;i++)
        {
            int dif=vlinie(i);
            vct[i].val=dif;
            vct[i].ind=i;
        }
        sort(vct+1,vct+x+1,comp);
        j=0;
        while(verif(x)==2)
        {
            swapl(vct[1+j].ind,x);
            j++;
            x--;
            if(x==0)
            {
                cout<<"NO";
                return 0;
            }
        }
        if(x==0)
        {
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
    return 0;
}

	   		  	 		 		 	  		  	  		 		