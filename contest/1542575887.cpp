#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    double h,m,s,t1,t2;
    int flag = 0;
    cin>>h>>m>>s>>t1>>t2;
    if(t1==12){
        t1=0;
    }
    if(t2==12){
        t2=0;
    }
    if(h==12){
        h=0;
    }
    if(t1>t2){
        double temp = t1;
        t1 = t2;
        t2 = temp;
    }
    double t3 = t1+12;
    double f1,f2,f3;
    if(m>0 || s>0){
        f1 = h+0.5;
    }
    else{
        f1 = h;
    }
    f2 = m/5;
    if(s>0){
        f2 += 0.001;
    }

    f3 = s/5;
    if(t1<f1&&t2>f1){
        flag = 0;
    }
    else if(t1<f2&&t2>f2)
    {
        flag = 0;
    }
    else if(t1<f3&&t2>f3){
        flag = 0;
    }
    else{
        flag = 1;
    }

    if(flag){
        cout<<"YES"<<endl;
    }
    else{
        double f4= f1+12;
        double f5 =f2+12;
        double f6 =f3+12;
        if(t2<f1&&t3>f1){
            flag = 0;
        }
        else if(t2<f2&&t3>f2)
        {
            flag = 0;
        }
        else if(t2<f3&&t3>f3){
            flag = 0;
        }
        else if(t2<f4&&t3>f4){
            flag = 0;
        }
        else if(t2<f5&&t3>f5)
        {
            flag = 0;
        }
        else if(t2<f6&&t3>f6){
            flag = 0;
        }
        else{
            flag = 1;
        }
        if(flag){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
