

#include<bits/stdc++.h>
using namespace std;


double h,m,s,t1,t2;

bool check(double x){
    double a=t1;
    double b=t2;
    if(a>b)
        swap(a,b);
    if(x>=a&&x<=b)
        return true;
    else return false;
}

bool check2(double x){
    double a=t1;
    double b=t2;
    if(a>b)
        swap(a,b);
    if(x<=a||x>=b)
        return true;
    else return false;
}

int main(){

    cin>>h>>m>>s>>t1>>t2;
    int t3=t1,t4=t2;
    if(h==12){
        h=m/60+s/3600;
    }
    else h=h+m/60+s/3600;
    m=(m+s/60)/60*12;
    s=s/60*12;
    if(h>=3&&h<=9){
        h=-(h-3)*30;
    }
    else if(h<3){
        h=(3-h)*30;
    }
    else h=(12-h)*30+90;

    if(m>=3&&m<9){
        m=-(m-3)*30;
    }
    else if(m<3){
        m=(3-m)*30;
    }
    else m=(12-m)*30+90;


    if(s>=3&&s<=9){
        s=-(s-3)*30;
    }
    else if(s<3){
        s=(3-s)*30;
    }
    else s=(12-s)*30+90;


    if(t1>=3&&t1<=9){
        t1=-(t1-3)*30;
    }
    else if(t1<3){
        t1=(3-t1)*30;
    }
    else t1=(12-t1)*30+90;


    if(t2>=3&&t2<=9){
        t2=-(t2-3)*30;
    }
    else if(t2<3){
        t2=(3-t2)*30;
    }
    else t2=(12-t2)*30+90;
    //printf("%.1f %.1f %.1f %.1f %.1f\n",h,m,s,t1,t2);
    bool flag1,flag2;
    if(t3==9){
        t1=-t1;
        flag1=check(h)&&check(m)&&check(s);
        t1=-t1;
        flag2=check(h)&&check(m)&&check(s);
        if(flag1||flag2){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
        return 0;
    }
    if(t4==9){
        t2=-t2;
        flag1=(check(h)&&check(m)&&check(s))||(check2(h)&&check2(m)&&check2(s));
        t2=-t2;
        flag2=(check(h)&&check(m)&&check(s))||(check2(h)&&check2(m)&&check2(s));
        if(flag1||flag2){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
        return 0;
    }
    if((check(h)&&check(m)&&check(s))||(check2(h)&&check2(m)&&check2(s))){
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
    return 0;
}
