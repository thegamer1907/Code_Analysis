#include<bits/stdc++.h>
using namespace std;

int main(){
    double h,m,s,t1,t2;
    cin>>h>>m>>s>>t1>>t2;
    double x,y;
    if(t1>t2){
        int temp=t1;
        t1=t2;
        t2=temp;
    }
    m = m+(s/60.0);
    h = h + (m/60.0);
    if(h>12.0)
        h=h-12.0;
    x = m/5.0;
    y = s/5.0;
    m=x;
    s=y;
    //cout<<h<<endl;
    //cout<<m<<endl;
    //cout<<s<<endl;
    if((h>t1 && h<t2) || (m>t1 && m<t2) || (s>t1 && s<t2)){
        if(((h>t2 && h<=12) || (h>=0 && h<t1)) || ((m>t2 && m<=12) || (m>=0 && m<t1)) || ((s>t2 && s<=12) || (s>=0 && s<t1))){
            cout<<"NO"<<endl;
            //cout<<"lel";
        }
        else
            cout<<"YES"<<endl;
    }
    else{
        cout<<"YES"<<endl;
        //cout<<"what"<<endl;
    }

}
