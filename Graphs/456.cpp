#include<iostream>
#include<string>
using namespace std;
#define fo(a,b,c) for(auto i=a;i<b;i+=c)
// void swap(string str,int i,int j){
//     int temp=str[i];
//     str[i]=str[j];
//     str[j]=temp;
// }
int main(){
    int n;
    int t;
    string str;
    cin>>n>>t;
    cin>>str;
    while(t--){
        fo(0,n-1,1){
            if(str[i]=='B' && str[i+1]=='G'){
                // swap(str,i,i+1);
                str[i]='G';
                str[i+1]='B';
                i++;
            }
        }
    }
    cout<<str<<endl;
}