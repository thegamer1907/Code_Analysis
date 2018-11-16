#include<iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int n,t,pos=1,i=0;
    cin >> n >> t;
    long long int a[n];
    for(long long int j=1;j<n;j++){
        cin >> a[j];
    }
    while(pos<t){
        i++;
        if(pos==i){
            pos=i+a[i];
        }
    }
    if(pos==t){
        cout << "YES";
    }else{cout << "NO";}
    return 0;
}