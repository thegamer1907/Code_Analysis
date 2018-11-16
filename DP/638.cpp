#include<bits/stdc++.h>

using namespace std;

map<int,int> m;

int main(){
    
    string s;
    cin>>s;
    
    m[0]=0;
    for(int i=1;i<s.length();i++){
        if(s[i]==s[i-1]){
            m[i]=m[i-1]+1;
        }else{
            m[i]=m[i-1];
        }
    }
    //m[s.length()-1]=m[s.length()-2]+1;
    /*
    for(int i=0;i<s.length();i++){
        cout<<m[i]<<" ";
    }
    cout<<'\n';*/
    
    int n,l,r;
    cin>>n;
    
    while(n--){
        cin>>l>>r;
        
        if(m[r-1]-m[l-1]>0){
            cout<<(m[(r-1)]-m[(l-1)])<<endl;
        }else{
            cout<<0<<endl;
        }
    
    }
    
    return 0;
}