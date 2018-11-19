#include <bits/stdc++.h>
using namespace std;
int h,m,s,t1,t2;
struct node{
    double deg;
    int id;
    node(){}
    node(double deg, int id):deg(deg),id(id){}
    bool operator<(node &res)const{
        return deg<res.deg;
    }
};

vector <node> v;
int main(){

    cin>>h>>m>>s>>t1>>t2;
    if(h==12) h-=12;
    if(t1==12) t1-=12;
    if(t2==12) t2-=12;
    v.push_back(node(360.0/60*s, 0)), v.push_back(node(360.0/3600*(60*m+s),0)), v.push_back(node(360.0/(12*3600)*(3600*h+60*m+s),0));
    v.push_back(node(360.0/12*t1,2)), v.push_back(node(360.0/12*t2,3));
    for(int i=0;i<5;i++){
        node t=v[i];
        t.deg+=360;
        v.push_back(t);
    }
    sort(v.begin(),v.end());
    bool flag = 0;
    for(int i=1; i<v.size(); i++){
        if(v[i-1].id&&v[i].id&&v[i-1].id!=v[i].id)
            flag=1;
    }
    if(flag){
        puts("YES");
    }else{
        puts("NO");
    }
    return 0;
}
