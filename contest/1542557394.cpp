//Problem B From Codeforces  #438
//10.22  23:16
#include "iostream"
#include "cstdio"
#include "string"
#include "map"
using namespace std;
bool ok[30][30];
bool t[30];
int h, m, s, t1, t2;
int Next(int now){
    if(now== 12)  return 1;
    return now + 1;
}
int Last(int now){
    if(now == 1)    return 12;
    return now - 1;
}
bool L(int from, int to){
    while(!ok[from][Next(from)]){
        from = Next(from);
        if(from == to)  return true;
        if(t[from])   break;
    }
    return false;
}
bool R(int from, int to){
    while(!ok[from][Last(from)]){
        from = Last(from);
        if(from == to)  return true;
        if(t[from])   break;
    }
    return false;
}
int main(){
    cin>>h>>m>>s>>t1>>t2;
    if(m != 0 || s != 0){
        ok[h][Next(h)] = ok[Next(h)][h] = 1;
    } else  t[h] = 1;
    
    if(s != 0 || m % 5 != 0){
        int a, b;
        if(m / 5 == 0) a = 12, b = 1;
        else    a = m / 5, b = a + 1;
        ok[a][b] = ok[b][a] = 1;
    } else {
        if(m % 5 == 0)  t[12] = 1;
        else    t[m / 5] = 1;
    }
    
    
    if(s % 5 == 0) {
        if(s / 5 == 0)  t[12] = 1;
        else    t[s / 5] = 1;
    } else {
        int a, b;
        if(s / 5 == 0)  a = 12, b = 1;
        else    a = s / 5, b = a + 1;
        ok[a][b] = ok[b][a] = 1;
    }
    
    if(L(t1, t2) || R(t1, t2) || L(t2, t1) || R(t2, t1))    return 0 * printf("YES\n");
    return 0 * printf("NO\n");
}
