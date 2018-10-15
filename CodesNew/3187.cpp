#include <iostream>

using namespace std;

int arr[300005];

int main()
{
    int n,k;
    cin>>n>>k;
    for(int i=0;i<n;i++)cin>>arr[i];
    int start=0,zeroes=0,cnt=0,maxx=0,before=0,index=0;
   for(int i=0;i<n;i++){
    start=i;
    if(before<=start){
        before = start;
        cnt =0;
        zeroes=0;
    }
    for(int j=before;j<n;j++){
                before=j;
        if(arr[j]==1){
            cnt++;
        }

        else if(arr[j]==0 && zeroes!=k){
            cnt++;
            zeroes++;
        }
        else {
                before=j;
            break;
        }
    }
    if(cnt>maxx){
        maxx=cnt;
        index=start;
    }
    cnt--;
    zeroes -=(1- arr[start]);
if(before==n-1)
    break;
   }
 cout<<maxx<<endl;
 int counting =0;
for(int i=0;i<n;i++){
    if(i>=index && arr[i]==0 && counting<maxx){
    cout<<1<<" ";
    counting ++;
    }
    else if(i>=index && arr[i]==1){
        cout<<arr[i]<<" ";
        counting++;
    }
    else
        cout<<arr[i]<<" ";
}
    return 0;
}
