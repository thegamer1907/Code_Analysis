#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int main(){
    int h,m,s,t1,t2;
    cin>>h>>m>>s>>t1>>t2;
    int a[3];
    a[0] = (60*m+s)*30 + h*30*3600;
    a[1] = s*6*60 + m*6*3600;
    a[2] = 6*s*3600;
    t1 *= 3600*30;
    t2 *= 3600*30;
    sort(a,a+3);
    if(a[0] < min(t1,t2) && max(t1,t2) < a[1]){
        cout<<"Yes"<<endl;
        return 0;
    }
    if(a[1] < min(t1,t2) && max(t1,t2) < a[2]){
        cout<<"Yes"<<endl;
        return 0;
    }
    if(t1 < a[0]){
        t1 += 360*3600;
    }
    if(t2 < a[0]){
        t2 += 360*3600;
    }
    a[0] += 360*3600;
    if(a[2] < min(t1,t2) && max(t1,t2) < a[0]){
        cout<<"Yes"<<endl;
        return 0;
    }
    cout<<"No"<<endl;
}
