#include<bits/stdc++.h>
using namespace std;

int main(){
    
    double h,m,s,t,t2;
    
    cin>>h>>m>>s>>t>>t2;
    
    if(t>t2)
    swap(t,t2);
    
    s/=(double)5;
    m/=(double)5;
    
    int cont=0;
    
    if(s>t&&s<t2)
    cont++;
    
    if(m>=t&&m<t2)
    cont++;
    
    if(h>=t&&h<t2)
    cont++;
    
    
    if(cont==3||cont==0)
    cout<<"yes";
    else
    cout<<"no";
    return 0;
}