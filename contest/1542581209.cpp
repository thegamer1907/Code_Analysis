#include <bits/stdc++.h>
#define S second
#define F first
//long double pu(long double t) {
//    long double ss=0;
//    for (int i(0); i<k; i++){
//    cout << to[i].x2 << " " << to[i].y2 << endl;
//        if ((to[i].x2-t)*sin(u)-to[i].y2*cos(u)<=0) {
//            ss=ss+w[i]*h[i];
//            continue;
//        }
//        if ((to[i].x0-t)*sin(u)-to[i].y0*cos(u)>=0) {
//            continue;
//        }
//        if ((to[i].x1-t)*sin(u)-to[i].y1*cos(u)<=0
//            && (to[i].x3-t)*sin(u)-to[i].y3*cos(u)<=0) {
//            long double a=to[i].x2-t-(to[i].y2*cos(u))/sin(u);
//            long double b=((to[i].x2-t)*sin(u))/cos(u)-to[i].y2;
//            ss=ss+w[i]*h[i]-((a*b)*0.5);
//            continue;
//        }
//        if (((to[i].x1-t)*sin(u)-to[i].y1*cos(u)>=0)
//            && ((to[i].x3-t)*sin(u)-to[i].y3*cos(u))>=0) {
//            long double a=t-to[i].x0+((to[i].y0)*cos(u))/sin(u);
//            long double b=((to[i].x0-t)*sin(u))/cos(u)+to[i].y0;
//            ss=ss+(a*b*0.5);
//            continue;
//        }
//        if (((to[i].x1-t)*sin(u)-to[i].y1*cos(u)<=0)
//            && ((to[i].x3-t)*sin(u)-to[i].y3*cos(u)>=0)) {
//            long double a=to[i].y0-((to[i].x0+t)*sin(u))/cos(u);
//            long double b=to[i].y1-((to[i].x1+t)*sin(u))/cos(u);
//            ss=ss+abs((a*b)*0.5)*w[i];
//            continue;
//        }
//        if (((to[i].x1-t)*sin(u)-to[i].y1*cos(u)>=0)
//            && ((to[i].x3-t)*sin(u)-to[i].y3*cos(u)<=0)) {
//            long double a=t+to[i].x0-((to[i].y0)*cos(u))/sin(u);
//            long double b=t+to[i].x3-((to[i].y3)*cos(u))/sin(u);
//            ss=ss+((a*b)*0.5)*h[i];
//            continue;
//        }
//    }
//    return ss;
//}
#define ll long long
#define pb push_back

using namespace std;

map < int, int > h;

int main() {
    ios_base::sync_with_stdio(0);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    int n,k;
    cin >> n >> k;
    int si=0;
    if (k==1) si=1;
    if (k==2) si=2;
    if (k==3) si=4;
    //long double pu(long double t) {
//    long double ss=0;
//    for (int i(0); i<k; i++){
//    cout << to[i].x2 << " " << to[i].y2 << endl;
//        if ((to[i].x2-t)*sin(u)-to[i].y2*cos(u)<=0) {
//            ss=ss+w[i]*h[i];
//            continue;
//        }
//        if ((to[i].x0-t)*sin(u)-to[i].y0*cos(u)>=0) {
//            continue;
//        }
//        if ((to[i].x1-t)*sin(u)-to[i].y1*cos(u)<=0
//            && (to[i].x3-t)*sin(u)-to[i].y3*cos(u)<=0) {
//            long double a=to[i].x2-t-(to[i].y2*cos(u))/sin(u);
//            long double b=((to[i].x2-t)*sin(u))/cos(u)-to[i].y2;
//            ss=ss+w[i]*h[i]-((a*b)*0.5);
//            continue;
//        }
//        if (((to[i].x1-t)*sin(u)-to[i].y1*cos(u)>=0)
//            && ((to[i].x3-t)*sin(u)-to[i].y3*cos(u))>=0) {
//            long double a=t-to[i].x0+((to[i].y0)*cos(u))/sin(u);
//            long double b=((to[i].x0-t)*sin(u))/cos(u)+to[i].y0;
//            ss=ss+(a*b*0.5);
//            continue;
//        }
//        if (((to[i].x1-t)*sin(u)-to[i].y1*cos(u)<=0)
//            && ((to[i].x3-t)*sin(u)-to[i].y3*cos(u)>=0)) {
//            long double a=to[i].y0-((to[i].x0+t)*sin(u))/cos(u);
//            long double b=to[i].y1-((to[i].x1+t)*sin(u))/cos(u);
//            ss=ss+abs((a*b)*0.5)*w[i];
//            continue;
//        }
//        if (((to[i].x1-t)*sin(u)-to[i].y1*cos(u)>=0)
//            && ((to[i].x3-t)*sin(u)-to[i].y3*cos(u)<=0)) {
//            long double a=t+to[i].x0-((to[i].y0)*cos(u))/sin(u);
//            long double b=t+to[i].x3-((to[i].y3)*cos(u))/sin(u);
//            ss=ss+((a*b)*0.5)*h[i];
//            continue;
//        }
//    }
//    return ss;
//}
    if (k==4) si=8;
    for (int i(0); i<n; i++) {
        int sy=si, os=0;
        for (int j(0); j<k; j++) {
            int x;
            cin >> x;
            os+=x*sy;
            sy/=2;
            //long double pu(long double t) {
//    long double ss=0;
//    for (int i(0); i<k; i++){
//    cout << to[i].x2 << " " << to[i].y2 << endl;
//        if ((to[i].x2-t)*sin(u)-to[i].y2*cos(u)<=0) {
//            ss=ss+w[i]*h[i];
//            continue;
//        }
//        if ((to[i].x0-t)*sin(u)-to[i].y0*cos(u)>=0) {
//            continue;
//        }
//        if ((to[i].x1-t)*sin(u)-to[i].y1*cos(u)<=0
//            && (to[i].x3-t)*sin(u)-to[i].y3*cos(u)<=0) {
//            long double a=to[i].x2-t-(to[i].y2*cos(u))/sin(u);
//            long double b=((to[i].x2-t)*sin(u))/cos(u)-to[i].y2;
//            ss=ss+w[i]*h[i]-((a*b)*0.5);
//            continue;
//        }
//        if (((to[i].x1-t)*sin(u)-to[i].y1*cos(u)>=0)
//            && ((to[i].x3-t)*sin(u)-to[i].y3*cos(u))>=0) {
//            long double a=t-to[i].x0+((to[i].y0)*cos(u))/sin(u);
//            long double b=((to[i].x0-t)*sin(u))/cos(u)+to[i].y0;
//            ss=ss+(a*b*0.5);
//            continue;
//        }
//        if (((to[i].x1-t)*sin(u)-to[i].y1*cos(u)<=0)
//            && ((to[i].x3-t)*sin(u)-to[i].y3*cos(u)>=0)) {
//            long double a=to[i].y0-((to[i].x0+t)*sin(u))/cos(u);
//            long double b=to[i].y1-((to[i].x1+t)*sin(u))/cos(u);
//            ss=ss+abs((a*b)*0.5)*w[i];
//            continue;
//        }
//        if (((to[i].x1-t)*sin(u)-to[i].y1*cos(u)>=0)
//            && ((to[i].x3-t)*sin(u)-to[i].y3*cos(u)<=0)) {
//            long double a=t+to[i].x0-((to[i].y0)*cos(u))/sin(u);
//            long double b=t+to[i].x3-((to[i].y3)*cos(u))/sin(u);
//            ss=ss+((a*b)*0.5)*h[i];
//            continue;
//        }
//    }
//    return ss;
//}
        }
                //cout << os << endl;
        h[os]++;
    }
    if (h[0]>0) {
        cout << "YES" << endl;
        return 0;
    }
    //cout << (2 & 1) << endl;
    for (int j(1); j<16; j++) {
        for (int i(2); i<16; i++) {
                //long double pu(long double t) {
//    long double ss=0;
//    for (int i(0); i<k; i++){
//    cout << to[i].x2 << " " << to[i].y2 << endl;
//        if ((to[i].x2-t)*sin(u)-to[i].y2*cos(u)<=0) {
//            ss=ss+w[i]*h[i];
//            continue;
//        }
//        if ((to[i].x0-t)*sin(u)-to[i].y0*cos(u)>=0) {
//            continue;
//        }
//        if ((to[i].x1-t)*sin(u)-to[i].y1*cos(u)<=0
//            && (to[i].x3-t)*sin(u)-to[i].y3*cos(u)<=0) {
//            long double a=to[i].x2-t-(to[i].y2*cos(u))/sin(u);
//            long double b=((to[i].x2-t)*sin(u))/cos(u)-to[i].y2;
//            ss=ss+w[i]*h[i]-((a*b)*0.5);
//            continue;
//        }
//        if (((to[i].x1-t)*sin(u)-to[i].y1*cos(u)>=0)
//            && ((to[i].x3-t)*sin(u)-to[i].y3*cos(u))>=0) {
//            long double a=t-to[i].x0+((to[i].y0)*cos(u))/sin(u);
//            long double b=((to[i].x0-t)*sin(u))/cos(u)+to[i].y0;
//            ss=ss+(a*b*0.5);
//            continue;
//        }
//        if (((to[i].x1-t)*sin(u)-to[i].y1*cos(u)<=0)
//            && ((to[i].x3-t)*sin(u)-to[i].y3*cos(u)>=0)) {
//            long double a=to[i].y0-((to[i].x0+t)*sin(u))/cos(u);
//            long double b=to[i].y1-((to[i].x1+t)*sin(u))/cos(u);
//            ss=ss+abs((a*b)*0.5)*w[i];
//            continue;
//        }
//        if (((to[i].x1-t)*sin(u)-to[i].y1*cos(u)>=0)
//            && ((to[i].x3-t)*sin(u)-to[i].y3*cos(u)<=0)) {
//            long double a=t+to[i].x0-((to[i].y0)*cos(u))/sin(u);
//            long double b=t+to[i].x3-((to[i].y3)*cos(u))/sin(u);
//            ss=ss+((a*b)*0.5)*h[i];
//            continue;
//        }
//    }
//    return ss;
//}

            if (h[j]>0 && ((j & i)==0) && h[i]>0) {
                cout << "YES" << endl;
                return 0;
            }
        }
        //long double pu(long double t) {
//    long double ss=0;
//    for (int i(0); i<k; i++){
//    cout << to[i].x2 << " " << to[i].y2 << endl;
//        if ((to[i].x2-t)*sin(u)-to[i].y2*cos(u)<=0) {
//            ss=ss+w[i]*h[i];
//            continue;
//        }
//        if ((to[i].x0-t)*sin(u)-to[i].y0*cos(u)>=0) {
//            continue;
//        }
//        if ((to[i].x1-t)*sin(u)-to[i].y1*cos(u)<=0
//            && (to[i].x3-t)*sin(u)-to[i].y3*cos(u)<=0) {
//            long double a=to[i].x2-t-(to[i].y2*cos(u))/sin(u);
//            long double b=((to[i].x2-t)*sin(u))/cos(u)-to[i].y2;
//            ss=ss+w[i]*h[i]-((a*b)*0.5);
//            continue;
//        }
//        if (((to[i].x1-t)*sin(u)-to[i].y1*cos(u)>=0)
//            && ((to[i].x3-t)*sin(u)-to[i].y3*cos(u))>=0) {
//            long double a=t-to[i].x0+((to[i].y0)*cos(u))/sin(u);
//            long double b=((to[i].x0-t)*sin(u))/cos(u)+to[i].y0;
//            ss=ss+(a*b*0.5);
//            continue;
//        }
//        if (((to[i].x1-t)*sin(u)-to[i].y1*cos(u)<=0)
//            && ((to[i].x3-t)*sin(u)-to[i].y3*cos(u)>=0)) {
//            long double a=to[i].y0-((to[i].x0+t)*sin(u))/cos(u);
//            long double b=to[i].y1-((to[i].x1+t)*sin(u))/cos(u);
//            ss=ss+abs((a*b)*0.5)*w[i];
//            continue;
//        }
//        if (((to[i].x1-t)*sin(u)-to[i].y1*cos(u)>=0)
//            && ((to[i].x3-t)*sin(u)-to[i].y3*cos(u)<=0)) {
//            long double a=t+to[i].x0-((to[i].y0)*cos(u))/sin(u);
//            long double b=t+to[i].x3-((to[i].y3)*cos(u))/sin(u);
//            ss=ss+((a*b)*0.5)*h[i];
//            continue;
//        }
//    }
//    return ss;
//}
    }
    cout << "NO" << endl;
    return 0;
}
