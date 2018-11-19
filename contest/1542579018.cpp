#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){

ll h,m,s,t1,t2;
cin>>h>>m>>s>>t1>>t2;

if(h==12)
    h=0;

double a1,a2,at1,at2;
ll a3;
ll temp;

ll ts = h*60*60 + m*60 + s;
a1 = ts/120.0;
temp = a1/360;
a1 -= temp*360;

a2 = ts/10.0;
temp = a2/360;
a2-=temp*360;

a3 = (ts*6)%360;

at1 = (t1*60*60)/120.0;
at2 = (t2*60*60)/120.0;

temp = at1/360;
at1-=temp*360;
temp = at2/360;
at2-=temp*360;

//cout<<a1<<" "<<a2<<" "<<a3<<" "<<at1<<" "<<at2<<endl;


if(t1<t2){

    ll x = min(at1,at2);
    ll y = max(at1,at2);

    at2=y;
    at1=x;

    if((a1>at1 && a1<at2) && (a2>at1 && a2<at2) && ((a3>at1 && a3<at2))){
        cout<<"YES";
    }

    else{
        bool aone=false,atwo=false,athree=false,one=false,two=false;

        if(a1>= at1 && a1>=at2 || a1<=at1 && a1<=at2)
         aone=true;

        if(a2>=at1 && a2>=at2 || a2<=at1 && a2<=at2)
         atwo=true;

        if(a3>=at1 && a3>=at2 || a3<=at1 && a3<=at2)
         athree=true;

        if(aone && atwo && athree)
            cout<<"YES";

        else
        cout<<"NO";
    }

}
else{


    ll x = min(at1,at2);
    ll y = max(at1,at2);

    at2=x;
    at1=y;

    if((a1>at2 && a1<at1) && (a2>at2 && a2<at1) && ((a3>at2 && a3<at1))){
        cout<<"YES";
    }

    else{
        bool aone=false,atwo=false,athree=false,one=false,two=false;

        if(a1>= at1 && a1>=at2 || a1<=at1 && a1<=at2)
         aone=true;

        if(a2>=at1 && a2>=at2 || a2<=at1 && a2<=at2)
         atwo=true;

        if(a3>=at1 && a3>=at2 || a3<=at1 && a3<=at2)
         athree=true;

        if(aone && atwo && athree)
            cout<<"YES";

        else
        cout<<"NO";
    }




}




return 0;
}

