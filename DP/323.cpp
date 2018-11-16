#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,count=0,a=0;
    scanf("%d",&n);
    int boy[n],i;
    for(i=0;i<n;i++){
        scanf("%d",&boy[i]);
    }
    scanf("%d",&m);
    int girl[m];

    for(i=0;i<m;i++){
        scanf("%d",&girl[i]);
    }
    sort(boy,boy+n);
    sort(girl,girl+m);
    for(i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(girl[j]&&boy[i]>0){
              a=abs(boy[i]-girl[j]);
              if(a==0||a==1){
                count++;
                girl[j]=0;
                boy[i]=0;
            }
        }

    }
}
printf("%d\n",count);
}
