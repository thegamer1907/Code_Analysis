#include <bits/stdc++.h>

using namespace std;

#define F first
#define S second
#define FILE ""

int main() {
//        if (((to[i].x1-t)*sin(u)-to[i].y1*cos(u)>=0)
//            && ((to[i].x3-t)*sin(u)-to[i].y3*cos(u))>=0) {
//            long double a=t-to[i].x0+((to[i].y0)*cos(u))/sin(u);
//            long double b=((to[i].x0-t)*sin(u))/cos(u)+to[i].y0;
//            ss=ss+(a*b*0.5);
//            continue;
//        }
    ios_base::sync_with_stdio(0);
    string s;
    //        if (((to[i].x1-t)*sin(u)-to[i].y1*cos(u)>=0)
//            && ((to[i].x3-t)*sin(u)-to[i].y3*cos(u))>=0) {
//            long double a=t-to[i].x0+((to[i].y0)*cos(u))/sin(u);
//            long double b=((to[i].x0-t)*sin(u))/cos(u)+to[i].y0;
//            ss=ss+(a*b*0.5);
//            continue;
//        }
    cin >> s;
    int n;
    cin >> n;
    //        if (((to[i].x1-t)*sin(u)-to[i].y1*cos(u)>=0)
//            && ((to[i].x3-t)*sin(u)-to[i].y3*cos(u))>=0) {
//            long double a=t-to[i].x0+((to[i].y0)*cos(u))/sin(u);
//            long double b=((to[i].x0-t)*sin(u))/cos(u)+to[i].y0;
//            ss=ss+(a*b*0.5);
//            continue;
//        }
    vector <int> a(300, 0), b(300, 0);
    for (int i = 0; i < n; ++i) {
        string c;
        cin >> c;
        //        if (((to[i].x1-t)*sin(u)-to[i].y1*cos(u)>=0)
//            && ((to[i].x3-t)*sin(u)-to[i].y3*cos(u))>=0) {
//            long double a=t-to[i].x0+((to[i].y0)*cos(u))/sin(u);
//            long double b=((to[i].x0-t)*sin(u))/cos(u)+to[i].y0;
//            ss=ss+(a*b*0.5);
//            continue;
//        }
        if (c == s) {
            cout << "YES";
            return 0;
        }
        //        if (((to[i].x1-t)*sin(u)-to[i].y1*cos(u)>=0)
//            && ((to[i].x3-t)*sin(u)-to[i].y3*cos(u))>=0) {
//            long double a=t-to[i].x0+((to[i].y0)*cos(u))/sin(u);
//            long double b=((to[i].x0-t)*sin(u))/cos(u)+to[i].y0;
//            ss=ss+(a*b*0.5);
//            continue;
//        }
        a[c[0]]++;
        b[c[1]]++;
        //        if (((to[i].x1-t)*sin(u)-to[i].y1*cos(u)>=0)
//            && ((to[i].x3-t)*sin(u)-to[i].y3*cos(u))>=0) {
//            long double a=t-to[i].x0+((to[i].y0)*cos(u))/sin(u);
//            long double b=((to[i].x0-t)*sin(u))/cos(u)+to[i].y0;
//            ss=ss+(a*b*0.5);
//            continue;
//        }
    }
    //        if (((to[i].x1-t)*sin(u)-to[i].y1*cos(u)>=0)
//            && ((to[i].x3-t)*sin(u)-to[i].y3*cos(u))>=0) {
//            long double a=t-to[i].x0+((to[i].y0)*cos(u))/sin(u);
//            long double b=((to[i].x0-t)*sin(u))/cos(u)+to[i].y0;
//            ss=ss+(a*b*0.5);
//            continue;
//        }
    if ((a[s[1]] > 0 && b[s[0]]))
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
