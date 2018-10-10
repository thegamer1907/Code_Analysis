#include<bits/stdc++.h>
using namespace std;

string s;
long int fo[1000001],f[1000001];
long int len;

void fun(){
    fo[0]=0;
    long int j=0;
    for(long int i=1;i<len;++i){
        while(j>=0 && s[i]!=s[j]){
            if(j-1>=0)
                j=fo[j-1];
            else
                j=-1;
        }
        j+=1;
        fo[i]=j;
            //cout<<i<<" "<<fo[i]<<" \n";
    }
}

void fune(long int x){
    f[0]=0;
    long int j=0;
    for(long int i=1;i<=x;++i){
        while(j>=0 && s[i]!=s[j]){
            if(j-1>=0)
                j=f[j-1];
            else
                j=-1;
        }
        j+=1;
        f[i]=j;
    }
}

int fn(long int x){
    fune(x);
    long int j=0;
    for(long int i=1;i<len-1;++i){
        while(j>=0 && s[j]!=s[i]){
            if(j-1>=0)
                j=f[j-1];
            else
                j=-1;
        }
        j+=1;
        if(j==x+1)
            return 1;
    }
    return 0;
}

int main(){
    cin>> s;
    len=s.length();
    long int ans=-1;
    fun();
    long int temp=fo[len-1]-1;
    //cout<<temp<<"\n";
    while(temp>=0){
        if(fn(temp)==1)
            break;
        else
            temp=fo[temp]-1;
    }
    if(temp<0)
        cout<<"Just a legend";
    else{
        for(long int i=0;i<=temp;++i)
            cout<<s[i];
    }
    return 0;
}
