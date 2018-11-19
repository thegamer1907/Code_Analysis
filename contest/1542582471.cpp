#include <bits/stdc++.h>
using namespace std;
int main()
{
    double h,m,s,st,en;
    double qj[3];
    scanf("%lf %lf %lf %lf %lf",&h,&m,&s,&st,&en);
    st = st*360/12;
    en = en*360/12;
    qj[0] = s*360/60;
    qj[1] = (m+s/60)*360/60;
    qj[2] = (h+m/60+s/3600);
    if(qj[2]>=12)
        qj[2] -= 12;
    qj[2] = qj[2] * 360 / 12;
    sort(qj,qj+3);
    //printf("%lf %lf %lf %lf %lf\n",qj[0],qj[1],qj[2],st,en);
    if(st>=qj[0]&&st<=qj[1]&&en>=qj[0]&&en<=qj[1]){
        printf("YES\n");
        //printf("%lf %lf\n",qj[0],qj[1]);
    }else if(st>=qj[1]&&st<=qj[2]&&en>=qj[1]&&en<=qj[2]){
        printf("YES\n");
        //printf("%lf %lf\n",qj[1],qj[2]);
    }else if((st>=qj[2]||st<=qj[0])&&(en>=qj[2]||en<=qj[0])){
        printf("YES\n");
        //printf("%lf %lf\n",qj[0],qj[2]);
    }else{
        printf("NO\n");
    }
    return 0;
}
