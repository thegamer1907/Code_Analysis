#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,k;
	while(cin>>n>>k)
	{
        int tm[22];
        int ts[22];
        int i,j;
        memset(tm,0,sizeof(tm));
        memset(ts,0,sizeof(ts));
        for(i=1;i<=n;i++)
        {
        	int lm=0;
        	int bin=1;
        	int _y;
        	for(j=1;j<=k;j++)
        	{
        		cin>>_y;
        		lm+=_y*bin;
        		bin*=2;
        		if(_y==0)ts[j]++;
			}
			tm[lm]++;
		 }
		 if(tm[0]!=0)
		 {
		 	cout<<"YES"<<endl;
		 	continue;
		 }
		 int flag=0;
		 for(i=1;i<=k;i++)
		 {
		 	if(ts[i]==0)
		 	{
		 		flag=1;
		 		break;
		 		
			 }
		 }
		 if(flag==1){
		 		cout<<"NO"<<endl;
		 	continue;
		 }
		 if(k==1||k==2){
		 		cout<<"YES"<<endl;
		 	continue;
		 }
		    if(k==3){
             if(tm[1]||tm[2]||tm[4])cout<<"YES"<<endl;
             else cout<<"NO"<<endl;
             continue;
    }
            if(tm[1]||tm[2]||tm[4]||tm[8]){
                              cout<<"YES"<<endl;
                              continue;
        }
      if(tm[3]&&tm[12]){
                  cout<<"YES"<<endl;
                  continue;
        }    
    if(tm[5]&&tm[10]){
                  cout<<"YES"<<endl;
                  continue;
    }    
    if(tm[9]&&tm[6]){
                   cout<<"YES"<<endl;
                   continue;
    }    
   cout<<"NO"<<endl;        
	}
	return 0;
} 