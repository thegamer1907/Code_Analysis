#include<iostream>
using namespace std;

int main(){
    int n,m,a[100];
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    if(n==1) cout<<m+a[0]<<" "<<m+a[0];
    else{
        int Max=0;
        int Count=0;
        for(int i=0;i<n;i++){
            if(a[i]>Max) Max=a[i];
        }
            for(int i=0;i<n;i++){
            if(a[i]<Max) Count+=Max-a[i];
        }
        if(Count==0){
            if(m%n==0) cout<<a[0]+m/n<<" "<<m+a[0];
            else    cout<<a[0]+m/n+1<<" "<<m+a[0];
        }
        else if(Count>=m) cout<<Max<<" "<<m+Max;
        else if(Count<m){
            Count=m-Count;
            if(Count%n==0) cout<<Max+Count/n<<" "<<m+Max;
            else cout<<Max+Count/n+1<<" "<<m+Max;
        }
    }
    return 0;
}
