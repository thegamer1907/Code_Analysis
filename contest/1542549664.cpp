#include <bits/stdc++.h>

using namespace std;

int h,m,s,t1,t2;

int c[60];

int main()
{
    cin>>h>>m>>s>>t1>>t2;
    h=h*5%60;
    t1=t1*5%60;
    t2=t2*5%60;
    if(m>0||s>0){
        h=h+1;
    }
    if(m%5==0&&s>0){
        m++;
    }
    c[h]=-1;
    c[m]=-1;
    c[s]=-1;
    c[t2]=9;
    int pos=t1;
    int flag=0;
    while(c[pos]!=-1){
        //cout<<pos<<endl;
        if(c[pos]==9){
            flag=1;
            //cout<<"="<<pos<<endl;
            break;
        }
        pos++;
        if(pos==60){
            pos=0;
        }
    }
    pos=t1;
    while(c[pos]!=-1){
        //cout<<pos<<endl;
        if(c[pos]==9){
            flag=1;
            //cout<<pos<<endl;
            break;
        }
        pos--;
        if(pos==-1){
            pos=59;
        }
    }
    if(flag==1){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}


