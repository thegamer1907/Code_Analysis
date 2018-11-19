#include <bits/stdc++.h>
using namespace std;

double arr[4], t1, t2;
bool r = false;

int main(){
    scanf("%lf %lf %lf %lf %lf",&arr[0],&arr[1],&arr[2],&t1,&t2);

    arr[0] = (arr[0] * 5);
    if(arr[0]>=60)
        arr[0]-=60;
    t1 = (t1 * 5);
    if(t1>=60)
        t1-=60;
    t2 = (t2 * 5);
    if(t2>=60)
        t2-=60;
    arr[1] += arr[2]/60;
    arr[0] += arr[1]/60;

    sort(arr, arr+3);

    if(t1 < arr[0] && t2 < arr[0])
        r = true;
    if(t1 > arr[0] && t1 < arr[1] && t2 > arr[0] && t2 < arr[1])
        r = true;
    if(t1 > arr[1] && t1 < arr[2] && t2 > arr[1] && t2 < arr[2])
        r = true;
    if(t1 > arr[2] && t2 > arr[2])
        r = true;
    if(t1 < arr[0] && t2 > arr[2])
        r = true;
    if(t1 > arr[2] && t2 < arr[0])
        r = true;

    //printf("%lf %lf %lf %lf %lf\n",arr[0],arr[1],arr[2],t1,t2);
    if(r)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
