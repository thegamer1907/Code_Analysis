#include<bits/stdc++.h>
using namespace std;

int main(){
    int h, m, s, t1, t2, pathblock = 0;
    float thetaH, thetaM, thetaS, thetaT1, thetaT2;

    cin >> h >> m >> s >> t1 >> t2;

    if (h == 12) h = 0;
    if (t1 == 12) t1 = 0;
    if (t2 == 12) t2 = 0;

    thetaS = s * 6.0;
    thetaM = m * 6.0 + s * 0.1;
    thetaH = h * 30.0 + m * 0.5 + s / 120.0;
    thetaT1 = t1 * 30.0;
    thetaT2 = t2 * 30.0;

    if (thetaT1 > thetaT2){
        if ((thetaH > thetaT2 && thetaH < thetaT1) || (thetaM > thetaT2 && thetaM < thetaT1) ||(thetaS > thetaT2 && thetaS < thetaT1)) { pathblock++;}
        if ((thetaH > thetaT1 && thetaH <= 360) || (thetaH < thetaT2 && thetaH >= 0) || (thetaM > thetaT1 && thetaM <= 360) || (thetaM < thetaT2 && thetaM >= 0) || (thetaS > thetaT1 && thetaS <= 360) || (thetaS < thetaT2 && thetaS >= 0)){ pathblock++;  }

    }
    else{
        if ((thetaH > thetaT1 && thetaH < thetaT2) || (thetaM > thetaT1 && thetaM < thetaT2) ||(thetaS > thetaT1 && thetaS < thetaT2)) { pathblock++;}
        if ((thetaH > thetaT2 && thetaH <= 360) || (thetaH < thetaT1 && thetaH >= 0) || (thetaM > thetaT2 && thetaM <= 360) || (thetaM < thetaT1 && thetaM >= 0) || (thetaS > thetaT2 && thetaS <= 360) || (thetaS < thetaT1 && thetaS >= 0)) { pathblock++;}

    }
    if (pathblock < 2) cout << "YES";
    else cout << "NO";

    return 0;


}
