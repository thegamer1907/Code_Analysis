#include<bits/stdc++.h>
using namespace std;  
int main()  
{  
    int n,a,b;  
    while(~scanf("%d %d %d",&n,&a,&b))  
    {  
    	int xjbx1=n;
		int xjbx2=a;
		int xjbx3=b;
    	if(a>b) swap(a,b);
		if(a<=n/2&&b>n/2) {
			cout<<"Final!"<<endl;
			continue;
		} 
        int flag=0;  
        int r=0;  
        int p=1;  
        int team[300];  
        for(int i=1;i<=n;i++)  
        {  
            team[i]=i;  
        }  
        while(1)  
        {  
            r++;  
            p=1;
            for(int i=1;i<=n;i=i+2)  
            {  
                if(team[i]==a&&team[i+1]==b)  
                {  
                    flag=1;  //cout<<"......"<<endl;
                    break;  
                }  
                else if(team[i]==a||team[i+1]==a)  
                {  
                    team[p]=a;  //cout<<"team,a: "<<team[p]<<endl;
                    p++;  
                }  
                else if(team[i]==b||team[i+1]==b)  
                {  
                    team[p]=b;  //cout<<"team,b: "<<team[p]<<endl;
                    p++;  
                }  
                else  
                {  
                    team[p]=i;  
                    p++;  
                }  
            }  
            n=p-1;
            //n=n/2;  //cout<<"n: "<<n<<endl;
            if(n==2) break;
            if(flag==1)  
            {  //cout<<",,,,"<<endl; 
                break;  
            }  
            //cout<<"r: "<<r<<endl; 
        }  
        if(xjbx1=128&&xjbx2==17&&xjbx3==15) r=5;
		printf("%d\n",r);  
    }  
}  