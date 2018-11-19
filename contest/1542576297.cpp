#include <bits/stdc++.h>
//#include <iostream>
//#include <cstdio>
//#include <algorithm>

using namespace std;

int main()
{
    int n,k,t1,t2,t3,t4,a1,a2,a3,a4,a12,a13,a14,a23,a24,a34,b1,b2,b3,b4;
    ios::sync_with_stdio(false);
    cin>>n>>k;
    a1=a2=a3=a4 = 0;
    b1=b2=b3=b4 = 0;
    a12=a13=a14=a23=a24=a34=0;
    if(k==1){
        for(int i=0;i<n;i++)
        {
            cin>>t1;
            if(!t1){
                cout<<"YES"<<endl;
                return 0;
            }
        }
        cout<<"NO"<<endl;
    }else if(k==2){
        a1= a2 = 0;
        for(int i=0;i<n;i++){
            cin>>t1>>t2;
            /*if(!t1&&!t2){
                cout<<"YES"<<endl;
                return 0;
            }*/
            if(!t1) a1 = 1;
            if(!t2) a2 = 1;
            if(a1&&a2){
                cout<<"YES"<<endl;
                return 0;
            }
        }
        cout<<"NO"<<endl;
    }else if(k==3){
        a1=a2=a3 = 0;

        for(int i=0;i<n;i++){
            cin>>t1>>t2>>t3;
            if(!t1&&!t2) a12 = 1;
            if(!t2&&!t3) a23 = 1;
            if(!t3&&!t1) a13 = 1;
            if(!t1) a1 = 1;
            if(!t2) a2 = 1;
            if(!t3) a3 = 1;
            if((a1&&a23)||(a2&&a13)||(a3&&a12)){
                cout<<"YES"<<endl;
                return 0;
            }
        }
        cout<<"NO"<<endl;
    }else if(k==4){
        a1=a2=a3=a4 = 0;
        b1=b2=b3=b4 = 0;
        a12=a13=a14=a23=a24=a34=0;
        for(int i=0;i<n;i++){
            cin>>t1>>t2>>t3>>t4;
            if(!t1&&!t2&&!t3) b4 = 1;
            if(!t2&&!t3&&!t4) b1 = 1;
            if(!t3&&!t4&&!t1) b2 = 1;
            if(!t1&&!t2&&!t4) b3 = 1;
            if(!t1&&!t2) a12 = 1;
            if(!t1&&!t3) a13 = 1;
            if(!t1&&!t4) a14 = 1;
            if(!t2&&!t3) a23 = 1;
            if(!t2&&!t4) a24 = 1;
            if(!t3&&!t4) a34 = 1;
            if(!t1) a1 = 1;
            if(!t2) a2 = 1;
            if(!t3) a3 = 1;
            if(!t4) a4 = 1;
            /*if((b1&&b2&&a12)||(a1&&a3&&a13)||(a1&&a4&&a14)||(a2&&a3&&a23)||(a2&&a4&&a24)||(a3&&a4&&a34))*/
            if((b1&&a1)||(b2&&a2)||(a3&&b3)||(a4&&b4)||(a12&&a34)||(a13&&a24)||(a14&&a23)){
                cout<<"YES"<<endl;
                return 0;
            }
        }
        cout<<"NO"<<endl;
    }
    return 0;
}
