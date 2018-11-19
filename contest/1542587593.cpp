#include <bits/stdc++.h>

using namespace std;

int h, m, s, t1, t2;
int pos1, pos2, pos3;
int tpos1, tpos2;

void yes(){
    printf("YES");
    exit(0);
}

void nope(){
    printf("NO");
    exit(0);
}

int main(){
    bool none = true;
    scanf("%d %d %d %d %d", &h, &m, &s, &t1, &t2);
    if(h==12) h=0;
    pos1 = h*3600 + m*60 + s;
    pos2 = m*720 + s*12;
    pos3 = s*720;
    tpos1 = t1*3600, tpos2 = t2*3600;

//    printf("%d %d %d %d %d\n", pos1, pos2, pos3, tpos1, tpos2);

    for(int i=tpos1+1; i!=tpos2; i++){
        if(i>=43200) i-=43200;
        if(i==pos1 || i==pos2 || i==pos3){
            none = 0;
            break;
        }
    }
    if(none) yes();
    none = true;

    for(int i=tpos2+1; i!=tpos1; i++){
        if(i>=43200) i-=43200;
        if(i==pos1 || i==pos2 || i==pos3){
            none = 0;
            break;
        }
    }
    if(none) yes();
    nope();
}
