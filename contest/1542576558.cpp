#include <bits/stdc++.h>

using namespace std;
int main(){
    double h,m,s,t1,t2;
    cin >> h >> m >> s >> t1 >> t2;
    double x,y;
    x=m/5;
    y=s/5;
    double a,b;
    a=h+(m/60)+(s/3600);
    if(a>=12)
        a=a-12;
    b=x+s/3600;

    vector <double> q;
    q.push_back(a);
    q.push_back(b);
    q.push_back(y);
    sort(q.begin(),q.end());

    if((t1>=q[0] and t2>=q[0] and t1<=q[1] and t2<=q[1]) or (t1>=q[1] and t2>=q[1] and t1<=q[2] and t2<=q[2]) or ((t1>=q[2] and t2>=q[2]) or (t1<=q[0] and t2<=q[0]) or (t1>=q[2] and t2<=q[0]) or (t2>=q[2] and t1<=q[0])))
        cout <<"YES";
    else
        cout<<"NO";





    return 0;



}
