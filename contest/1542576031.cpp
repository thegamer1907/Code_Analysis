#include <bits/stdc++.h>
#define f first
#define s second
#define mp make_pair
#define pb push_back

using namespace std;
const int N = 100001;

int main()
{
    int h,m,s,t1,t2;
    cin>>h>>m>>s>>t1>>t2;
    h %= 12;
    t1 %= 12;
    t2 %= 12;
    double angleHrs = 30*h + m*0.5 + s / 120.0;
    double angleMins = 6*m + s*0.1;
    double angleSecs = 6*s;
    vector <double >vec;
    vec.push_back(angleHrs);
    vec.push_back(angleMins);
    vec.push_back(angleSecs);
    sort(vec.begin(),vec.end());
    double src = t1 * 30;
    double dist = t2 * 30;
    vec.push_back(vec[0]+360);
//    vec.push_back(vec[1]+360);
//    for(double d : vec)
//        cout<<d<<endl;
    if(dist < src)
        swap(src,dist);
    for(int i= 0;i<3;i++) {
//        if(i == 2)
//            src += 360;
        if(src >= vec[i] && src <= vec[i+1] &&  dist >= vec[i] && dist <= vec[i+1]) {
            cout<<"YES";
            return 0;
        }
        if(i == 2) {
            if(src+360 >= vec[i] && src+360 <= vec[i+1] && ( dist >= vec[i] && dist <= vec[i+1] || dist+360 >= vec[i] && dist+360 <= vec[i+1] ) ) {
                cout<<"YES";
                return 0;
            }
        }
    }
    cout<<"NO";
    return 0;
}
