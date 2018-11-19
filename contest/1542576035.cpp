#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mst(a,b) memset((a),(b),sizeof(a))
#define pi acos(-1)
const int INF = 0x3f3f3f3f;
const double eps = 1e-6;
const int MAXN = 1e5 + 10;
const int MAXM = 1e6 + 10;


int main()
{
#ifdef local
    freopen("data.txt","r",stdin);
#endif
    int n,k;
    scanf("%d%d",&n,&k);
    int flag=0;
    if(k==1) {
        for(int i=0; i<n; i++) {
            int a;
            scanf("%d",&a);
            if(a==0) flag=1;
        }
    }
    else if(k==2) {
        int num10=0,num01=0;
        for(int i=0; i<n; i++) {
            for(int j=0; j<k; j++) {
                int a,b;
                scanf("%d%d",&a,&b);
                if(a==0&&b==0) flag=1;
                if(a==1&&b==0) num10++;
                if(a==0&&b==1) num01++;
            }
        }
        if(num10>0&&num01>0) flag=1;
    }
    else if(k==3) {
        int num1=0,num2=0,num3=0;
        int num12=0,num13=0,num23=0;
        for(int i=0; i<n; i++) {
            for(int j=0; j<k; j++) {
                int a,b,c;
                scanf("%d%d%d",&a,&b,&c);
                if(a==0&&b==0&&c==0) flag=1;

                if(a==0&&b==0&&c==1) num3++;
                if(a==0&&b==1&&c==0) num2++;
                if(a==0&&b==1&&c==1) num23++;
                if(a==1&&b==0&&c==0) num1++;
                if(a==1&&b==0&&c==1) num13++;
                if(a==1&&b==1&&c==0) num12++;
            }
        }
        if(num12>0&&num3>0) flag=1;
        if(num13>0&&num2>0) flag=1;
        if(num23>0&&num1>0) flag=1;

        if(num1>0&&num2>0) flag=1;
        if(num1>0&&num3>0) flag=1;
        if(num2>0&&num3>0) flag=1;
    }
    else if(k==4) {
        int num1=0,num2=0,num3=0,num4=0;
        int num12=0,num13=0,num14=0,num23=0,num24=0,num34=0;
        int num123=0,num124=0,num134=0,num234=0;
        for(int i=0; i<n; i++) {
            for(int j=0; j<k; j++) {
                int a,b,c,d;
                scanf("%d%d%d%d",&a,&b,&c,&d);
                if(a==0&&b==0&&c==0&&d==0) flag=1;

                if(a==0&&b==0&&c==0&&d==1) num4++;
                if(a==0&&b==0&&c==1&&d==0) num3++;
                if(a==0&&b==0&&c==1&&d==1) num34++;

                if(a==0&&b==1&&c==0&&d==0) num2++;
                if(a==0&&b==1&&c==0&&d==1) num24++;
                if(a==0&&b==1&&c==1&&d==0) num23++;
                if(a==0&&b==1&&c==1&&d==1) num234++;

                if(a==1&&b==0&&c==0&&d==0) num1++;
                if(a==1&&b==0&&c==0&&d==1) num14++;
                if(a==1&&b==0&&c==1&&d==0) num13++;
                if(a==1&&b==0&&c==1&&d==1) num134++;

                if(a==1&&b==1&&c==0&&d==0) num12++;
                if(a==1&&b==1&&c==0&&d==1) num124++;
                if(a==1&&b==1&&c==1&&d==0) num123++;
            }
        }
        if(num123>0&&num4>0) flag=1;
        if(num124>0&&num3>0) flag=1;
        if(num134>0&&num2>0) flag=1;
        if(num234>0&&num1>0) flag=1;

        if(num12>0&&num34>0) flag=1;
        if(num13>0&&num24>0) flag=1;
        if(num14>0&&num23>0) flag=1;

        if(num1>0&&num23>0) flag=1;
        if(num1>0&&num24>0) flag=1;
        if(num1>0&&num34>0) flag=1;
        if(num2>0&&num13>0) flag=1;
        if(num2>0&&num14>0) flag=1;
        if(num2>0&&num34>0) flag=1;
        if(num3>0&&num12>0) flag=1;
        if(num3>0&&num14>0) flag=1;
        if(num3>0&&num24>0) flag=1;
        if(num4>0&&num12>0) flag=1;
        if(num4>0&&num13>0) flag=1;
        if(num4>0&&num23>0) flag=1;

        if(num1>0&&num2>0) flag=1;
        if(num1>0&&num3>0) flag=1;
        if(num1>0&&num4>0) flag=1;
        if(num2>0&&num3>0) flag=1;
        if(num2>0&&num4>0) flag=1;
        if(num3>0&&num4>0) flag=1;
    }
    if(flag) puts("YES");
    else puts("NO");
    return 0;
}
