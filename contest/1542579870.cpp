#include <bits/stdc++.h>

using namespace std;

int n, k;
struct __prob{
    int know[4];
    int knows;
} prob[100002];

struct data{
    int i, id;
    bool operator<(const data& r)const{
        if(__builtin_popcount(id)!=__builtin_popcount(r.id))
            return __builtin_popcount(id)>__builtin_popcount(r.id);
        return i<r.i;
    }
    data(){}
    data(int i, int id): i(i), id(id){}
};

int total[4];
int tp;

multiset<data> st[16];

bool big[4];

void check(){
//    printf("%d %d %d %d %d\n", tp, total[0], total[1], total[2], total[3]);
    if(!tp) return;
    for(int i=0; i<k; i++) big[i] = total[i] > (tp>>1);
    if(big[0] || big[1] || big[2] || big[3]) return;
    printf("YES");
    exit(0);
}

//inline int now_id(){
//    return big[3]*8 + big[2]*4 + big[1]*2 + big[0];
//}

void checks(){
//    printf("the %dth\n", n+1-tp);
//    for(int i=0; i<16; i++){
//        printf("%d: ", i);
//        for(multiset<data>::iterator it = st[i].begin();
//            it != st[i].end(); ++it){
//            printf("%d-%d ", (*it).i, (*it).id);
//        }
//        puts("");
//    }
}

data get_target(){
    int nows[4] = {0, 1, 2, 3};
    for(int i=k-1; i>0; i--) for(int j=0; j<i; j++){
        if(total[nows[i]] < total[nows[j]]) swap(nows[i], nows[j]);
    }
//    for(int i=0; i<4; i++) printf("%d ", nows[i]);
//    puts("");
    int tmp;
    for(int mark = 15; mark >= 0; mark--){
        tmp = 0;
        for(int i=0; i<4; i++) if(mark & (1<<i)) tmp += (1<<nows[i]);
        if(st[tmp].size()){
//            printf("i=%d. got from st[%d]\n", mark, tmp);
            return *(st[tmp].begin());
        }
    }
}

int main(){
    int tar;
    scanf("%d %d", &n, &k);
    tp = n;
    for(int i=1; i<=n; i++) for(int j=0; j<k; j++){
        scanf("%d", &prob[i].know[j]);
        prob[i].knows += (prob[i].know[j] << j);
        total[j] += prob[i].know[j];
    }
    for(int i=1; i<=n; i++){
        for(int j=0; j<16; j++) if((prob[i].knows | j) == prob[i].knows){
//            printf("%d %d push\n", i, j);
            st[j].insert(data(i, prob[i].knows));
        }
    }

    check();
    while(tp){
        checks();
        tar = get_target().i;
//        printf("%d %d\n", tp, tar);
        for(int j=0; j<16; j++) st[j].erase(data(tar, prob[tar].knows));
        for(int j=0; j<4; j++) if(prob[tar].know[j]) total[j]--;
        tp--;
        check();
    }
    printf("NO");
}
