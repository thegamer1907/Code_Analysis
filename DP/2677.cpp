#include<iostream>
#include<cmath>
#include<cstring>

double C(int i, int n)
{
    double ans = 1.0;
    for(int j=1;j<=i;j++)
    {
        ans *= (n-j+1);
        ans /= j;
    }
    return ans;
}

int main()
{
    char s1[11], s2[11];
    scanf(" %s %s", s1, s2);
    int len = strlen(s1);
    int cnt[2] = {0, 0};
    for(int i=0;i<len;i++)
        if(s1[i] == '+')
            cnt[0]++;
        else
            cnt[1]++;
    for(int i=0;i<len;i++)
        if(s2[i] == '+')
            cnt[0]--;
        else if(s2[i] == '-')
            cnt[1]--;
    if(cnt[0] < 0 || cnt[1] < 0)
        printf("%.10lf\n", 0.0);
    else
    {
        double ans = C(cnt[0], cnt[0]+cnt[1]) / pow(2.0, cnt[0]+cnt[1]);
        printf("%.10lf\n", ans);
    }
}
