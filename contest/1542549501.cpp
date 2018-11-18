#include <bits/stdc++.h>

using namespace std;

int n,k;

int f[20];

int main()
{
    cin>>n>>k;
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=0;j<k;j++){
            int x;
            scanf("%d",&x);
            sum+=x<<j;
        }
        f[sum]=1;
    }
    int flag=0;
    for(int i=0;i<16;i++){
        for(int j=0;j<16;j++){

            if(f[i]&&f[j]&&!(i&j)){
                flag=1;
            }
        }
    }
    if(flag==1){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }
    return 0;
}
 	    			 		  		 		 	 									