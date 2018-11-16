#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
void Fun(string &temp,int n){
    int i;
    for(i=0;i<n-1;i++)
        if(temp[i]=='B'&&temp[i+1]=='G'){
            swap(temp[i],temp[i+1]);
            i++;
        }
}
int main(){
    int n,t;
    string temp;
    cin >> n >> t;
    cin >> temp;
    while(t--)
        Fun(temp,n);
    cout << temp;
    return 0;
}