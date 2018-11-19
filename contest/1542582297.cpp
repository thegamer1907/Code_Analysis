//asdasdasd
//DO NOT HACK
//asdasdasd

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,k,t[16]={0},ne;
    int a;
    bool can=false;

    scanf("%d %d",&n,&k);
    for(int i=0;i<n;i++){
        ne=0;
        for(int j=0;j<k;j++) {scanf("%d",&a);  if(a) ne+=(1<<j);}
        t[ne]++;
        }
    if(t[0])  can=1;
    else if(k==2&&t[1]&&t[2]) can=1;
    else if(k==3){
        int uno=0; for(int i=1;i<3;i++) {if(t[i]) uno++;} if(t[4]) uno++;
        if(uno>1) can=1;
        if((t[3]&&t[4])||(t[2]&&t[5])||(t[1]&&t[6])) can=1;
    }
    else if(k==4){
        for(int i=1;i<15;i++) if(t[i]) for(int j=1;j<15;j++) if(t[j]&&!(j&i)) can=1;
        
    }
    printf("%s\n",can ? "YES" : "NO");
    return 0;
}

