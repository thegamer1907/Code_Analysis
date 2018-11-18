#include<bits/stdc++.h>
#define PI acos(-1.0)
#define pb push_back
#define F first
#define S second
#define debug puts
#define setp cout << fixed << setprecision(15)
#define fst ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
const int N=2e5+5;
typedef long long ll;

set<double> st;

int main(void){
    fst;
    int h,m,s,t1,t2;
    cin >> h >> m >> s>>t1>>t2;
    double a=h*30+1.0*m*30/60+30*1.0/3600*s;
    double b=6*m+0.1*s;
    double c=1.0*6*s;
//    cout << a <<endl;
//    printf("%.10f\n",a);
//    cout << b <<endl;
//    cout << c <<endl;
    st.insert(a);
    st.insert(c);
    st.insert(b);
    if(t1<t2)   swap(t1,t2);
    t1*=30,t2*=30;
    int f=1;
    for(auto te:st){
        if(te>t2&&te<t1){
            f=0;
//            cout <<"te="<<te<<endl;
            break;
        }
    }
    if(f){
        cout <<"YES"<<endl;
        return 0;
    }

    f=1;
    for(auto te:st){
        if(te>t1&&te>t2||te<t1&&te<t2){
            f=0;
            break;
        }
    }
    if(f){
        cout <<"YES"<<endl;
        return 0;
    }
    cout <<"NO"<<endl;
    return 0;
}
/**********
3 0 30 3 4
**********/
