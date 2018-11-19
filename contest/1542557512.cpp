#include<bits/stdc++.h>
using namespace std;
int main()
{
    double h[3];
    int t1,t2;
    scanf("%lf%lf%lf",&h[0],&h[1],&h[2]);
    scanf("%d%d",&t1,&t2);
    if(h[1]||h[2]) h[0]=(int)h[0]%12+h[1]/60.0+h[2]/3600.0;
    h[1]=(h[1]/60.0+h[2]/3600.0)*12;
    h[2]=h[2]/60.0*12;
    sort(h,h+3);
    //cout<<h[0]<<"%%"<<h[1]<<"%%"<<h[2]<<endl;
    if(t1>=h[0]&&t1<=h[1]&&t2>=h[0]&&t2<=h[1]) printf("YES\n");
    else if(t1>=h[1]&&t1<=h[2]&&t2>=h[1]&&t2<=h[2]) printf("YES\n");
    else if((t1>=h[2]||t1<=h[0])&&(t2>=h[2]||t2<=h[0])) printf("YES\n");
    else printf("NO\n");
    return 0;
}
