#include <bits/stdc++.h>
#define S second
#define F first
#define ll long long
#define pb push_back

using namespace std;


int main() {
    ios_base::sync_with_stdio(0);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    long double h,m,s,t1,t2;
    long double th=360/12;
    long double tm=360/60;
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

    long double ts=360/60;
    cin >> h >> m >> s;
    cin >> t1 >> t2;
    if (m==0) m=60;
    if (s==0) s=60;
    t1=t1*th;
    t2=t2*th;
    s=s*ts;
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

    if (s>360) s-=360;
    m=m*tm+((s/360)*6);
    if (m>360) m-=360;
    h=h*th+((m/360)*30);
    if (h>360) h-=360;
    //cout << h << " " << m << " " << s << endl;
    if (t1>t2) swap(t1,t2);
    if (t1<t2){
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

        if ((t1>h || t2<h) &&
            (t1>m || t2<m) &&
            (t1>s || t2<s)){
                cout << "YES" << endl;
                return 0;
            }
        if ((t1<h && t2>h) &&
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

            (t1<m && t2>m) &&
            (t1<s && t2>s)){
                cout << "YES" << endl;
                return 0;
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
