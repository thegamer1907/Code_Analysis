#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
int main(){
    int n;
    int pos;
    cin>>n>>pos;
    bool arr[n];
    int pok[n];
    memset(arr,false,sizeof(arr));
    for(int i=1;i<n;i++){
        cin>>pok[i];
    }
    for(int i=1;i<n;i++){
        arr[i+pok[i]]=true;
       // arr[i]=true;
        i+=pok[i]-1;
    }
    arr[1]=true;
    if(arr[pos]){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    cout<<endl;
    return 0;
}
