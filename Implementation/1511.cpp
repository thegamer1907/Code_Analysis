#include<iostream>
using namespace std;

int main()
{
    string a;
    int t=1,n;
    cin>>a;
    n = a.length();
    for(int i=1;i<n;i++){
        if(a[i]==a[i-1]){
            t++;
        }
        else
            t=1;
        if(t>=7){
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
    return 0;
}
