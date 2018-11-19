#include <cstdio>

int main()
{
    int h, m, st=0, s, t1, t2;

    scanf ("%d %d %d %d %d", &h, &m, &s, &t1, &t2);

    if (t1>t2){
        int w = t1;
        t1 = t2;
        t2 = w;
    }

    if ((h==t1 || h==t2) && m==0 && s==0) st=0;
    else if ((m==t1*5||m==t2*5) && s==0) st=0;
    else if (s==t1*5 || s==t2*5) st=0;
    else if (h>=t1&&h<t2){
        if (m>=t1*5&&m<t2*5&&s>t1*5&&s<t2*5) st=1;
        else st=0;
    }
    else {
        if ((m>=t2*5||m<t1*5)&&(s>t2*5||s<t1*5)) st=1;
        else st=0;
    }

    if(st==1) printf("YES");
    else printf("NO");
}
