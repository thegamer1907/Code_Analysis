#include <cstdio>
#include <string>
#include <set>
using namespace std;
set<string> ka,kb;
char in[512];
int main(){
    int n,m;
    scanf("%d%d",&n,&m);
    for(int i = 0; i < n; i++){
        scanf("%s",in);
        ka.insert(in);
    }
    for(int i = 0; i < m; i++){
        scanf("%s",in);
        kb.insert(in);
    }
    bool cur = true; /// true = PolandBall,false = EnemyBall
    string t;
    set<string> intersect;
    for(set<string>::iterator i = ka.begin(); i != ka.end(); ++i){
        for(set<string>::iterator j = kb.begin(); j != kb.end(); ++j){
            if(*i == *j)
                intersect.insert(*i);
        }
    }
    while(!ka.empty() && !kb.empty()){
        if(intersect.empty()){
            if(cur){
                ka.erase(ka.begin());
            }else{
                kb.erase(kb.begin());
            }
        }else{
            t = *intersect.begin();
            intersect.erase(t);
            ka.erase(t);
            kb.erase(t);
        }
        cur = !cur;
    }
    if(cur){
        if(ka.empty()){
            printf("NO");
        }else{
            printf("YES");
        }
    }else{
        if(kb.empty()){
            printf("YES");
        }else{
            printf("NO");
        }
    }
    return 0;
}
