#include <bits/stdc++.h>
using namespace std;
int arr[100000];
int main()
{
    ios::sync_with_stdio(false);
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum=0,mx=0,x=0;
    /*
    10 15
    10 9 1 1 5 10 5 3 7 2
    */
    for(int i=0;i<n;i++){
        int y=i;
        for(int j=i;j<n;j++,y++){
            x++;
            sum+=arr[j];
            //cout<<y<<" "<<x<<" "<<sum<<" "<<i<<" "<<mx<<endl;
            if(sum>m){
                //cout<<"breaked"<<endl;
                x--;
                sum-=arr[j];
                break;
            }
            //cout<<j<<" "<<sum<<" "<<x<<endl;
        }
        sum-=arr[y-x];
        i=y-1;
        mx=max(mx,x);
        x--;
        //cout<<x+1<<" "<<sum+arr[i]<<" "<<i<<endl;
    }
    cout<<mx<<endl;
    return 0;
}
