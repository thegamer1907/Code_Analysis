#include <bits/stdc++.h>

using namespace std;

struct node{

    double p;
    int id;

};

node a[5];


int cmp(node x,node y) {

    return x.p < y.p;

}

int main() {

    double h,m,s,t1,t2;

    cin>>h>>m>>s>>t1>>t2;

    if(h == 12) h = 0;
    if(t1 == 12) t1 =0;
    if(t2 == 12) t2 =0;

    double hh = h * 30 + m / 60 * 30 + s / 60 / 60 * 30 ;
    a[0].p = hh;
    a[0].id = 0;
    double mm = m / 5 * 30 + s / 60 / 60 * 30 ;
    a[1].p = mm;
    a[1].id = 1;
    double ss = s / 5 * 30;
    a[2].p = ss;
    a[2].id = 2;

    double tt1 = t1  * 30;
    a[3].p = tt1;
    a[3].id = 3;
    double tt2 = t2  * 30;
    a[4].p = tt2;
    a[4].id = 4;

   // cout<<hh<<' '<<mm<< ' '<<ss<< ' '<<tt1<<' '<<tt2<<endl;


    sort(a, a + 5,cmp);

    int flag = 0;
    for(int i = 0; i < 5; i++) {


        if(a[i].id == 3) flag = i;
    }

    //cout<<flag<<endl;

    if(a[(flag - 1 + 5) % 5].id == 4 || a[(flag + 1 + 5) % 5].id == 4) cout<<"YES"<<endl;
    else cout<<"no"<<endl;


    return 0;
}
