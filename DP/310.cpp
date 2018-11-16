#include<bits/stdc++.h>

using namespace std;



int main(){
    int n,m;
    cin>>n;
    int boys[n];
    for(int i=0;i<n;i++){
        cin>>boys[i];
    }

    cin>>m;
    int girls[m];
    for(int i=0;i<m;i++){
        cin>>girls[i];
    }

    sort(boys,boys+n);
    sort(girls,girls+m);

    n--,m--;
    int counter =0;
    while(n>=0 && m>=0){
        if(abs(boys[n] - girls[m])<2){
            counter++;
            n--,m--;
        }else if(boys[n]>girls[m])n--;
        else m--;
    }
    cout<<counter;


}
