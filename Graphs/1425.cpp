//sala kutta eto 4bare AC hoiche 
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int x[a];
    for(int i=1;i<=a-1;i++){
        cin>>x[i];
    }
    for(int i=1;i<=b;){
        if(i==b){
             cout<<"YES"<<endl;
             return 0;
        }
        i=i+x[i];
    }
    cout<<"NO"<<endl;
    return 0;
}
