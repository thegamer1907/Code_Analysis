#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int mx=INT_MIN;
    int cnt0s=0;
    int i=0,j=0;
    int mxi=-1,mxj=-1;
    for(int iter=0;iter<n;iter++){
        if(arr[iter]==1 && cnt0s==0)
        { i=iter+1;
            j=i;
            
        }
        else if(arr[iter]==0)
        {  cnt0s++;
            j++;
        }
        else if(arr[iter]==1)
        { cnt0s=max(0,cnt0s-1);
            if(cnt0s==0)
            {    i=iter+1;j=iter+1;
                
            }
            else j++;
            
        }
        if(cnt0s>mx){
            mx=cnt0s;
            mxi=i;mxj=j;
        }
        
    }
    mxj--;
    int count1s=0;
    for(int i=0;i<n;i++){
        if((mxi<=i && i<=mxj))
        {
            if(arr[i]==0)
                count1s++;
        }
        else{
            if(arr[i]==1)
                count1s++;
        }
        
    }
    if(mx==0){
        cout<<count1s-1;
    }
    else
    cout<<count1s;
    
}