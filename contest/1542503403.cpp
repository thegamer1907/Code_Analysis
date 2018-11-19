#include<bits/stdc++.h>
using namespace std;

int main(){

    int h,m,s,t1,t2;
    cin>>h>>m>>s>>t1>>t2;
    if(t1==t2){
        cout<<"YES"<<endl;
        return 0;
    }

    double hpos,mpos,spos;

    spos = s/5.0;

    mpos = m/5.0  + s/3600.00 ;

    hpos = h + (m/60.0) + (s/3600.0);


    double pos[3] = {hpos,mpos,spos};

    sort(pos,pos+3);

    if( pos[0]-12.0000 > 0.0000000001 && pos[1]-12.000000 > 0.0000000001 && pos[2]-12.00 > 0.0000000001 ){
        //cout<<"12-1 er moddhe sob so YES"<<endl;

    }
    else if( pos[1]-12.0000 > 0.0000000001 && pos[2]-12.000000 > 0.0000000001){
        set<int> st1,st2;
        for( int i = 1; i<= (int)pos[0] ;i++) st2.insert(i);
        for(int i = (int)pos[0]+1;i<=12;i++ ) st1.insert(i);
        if(st1.find(t1) != st1.end() && st1.find(t2) != st1.end() ) cout<<"YES"<<endl;
        else if(st2.find(t1) != st2.end() && st2.find(t2) != st2.end() ) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        //cout<<"ekta  12-1 er baire"<<endl;
    }
    else if(pos[2]-12.000 > 0.000000000001){

        set<int> st1,st2,st3;
        for(int i=1; i<=(int)pos[0];i++)st1.insert(i);
        for(int i=(int)ceil(pos[0]); i<=(int)pos[1];i++)st2.insert(i);
        for(int i=(int)ceil(pos[1]); i<=12;i++)st3.insert(i);

        if(st1.find(t1) != st1.end() && st1.find(t2) != st1.end() ) cout<<"YES"<<endl;
        else if(st2.find(t1) != st2.end() && st2.find(t2) != st2.end() ) cout<<"YES"<<endl;
        else if(st3.find(t1) != st3.end() && st3.find(t2) != st3.end() ) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        //cout<<"duita 12-1 er baire"<<endl;
    }
    else {


        set<int> st1,st2,st3;

        for(int i=(int)ceil(pos[0]); i<=(int)pos[1];i++)    st1.insert(i);
        for(int i=(int)ceil(pos[1]); i<=(int)pos[2];i++)    st2.insert(i);
        for(int i=(int)ceil(pos[2]);i<=12;i++)             st3.insert(i);
        for(int i=1;i<=(int)pos[0];i++)                     st3.insert(i);

        if(st1.find(t1) != st1.end() && st1.find(t2) != st1.end() ) cout<<"YES"<<endl;
        else if(st2.find(t1) != st2.end() && st2.find(t2) != st2.end() ) cout<<"YES"<<endl;
        else if(st3.find(t1) != st3.end() && st3.find(t2) != st3.end() ) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        //cout<<"tintai 12-1 er baire"<<endl;

    }


    return 0;

}
