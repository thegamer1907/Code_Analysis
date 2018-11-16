#include<iostream>
using namespace std;
int main(){
int n,t;
cin>>n>>t;
char s[n];
for(int i=0;i<n;i++){
    cin>>s[i];
}

for(int j=1;j<=t;j++){
    int count=0;
for(int i=0;i+1<n;i++){
    if(s[i]=='B' && s[i+1]=='G' && count==0){
        count+=1;
        char temp=s[i];
        s[i]=s[i+1];
        s[i+1]=temp;
    }
    else count=0;

}
}
for(int i=0;i<n;i++)cout<<s[i];
}
