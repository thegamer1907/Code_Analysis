#include <bits/stdc++.h>
using namespace std;
const int MaxN = 103,MaxK = 20;
int n,m;
char str[MaxN][MaxN];

struct Node{
    char* str;
    int len;
    Node *lc,*rc;
    bitset<(1<<(MaxK+1))> o;
}a[MaxN*2];

void build(Node& a,char* str) {
    a.str=str;
    a.len=strlen(str);
    a.lc=a.rc=NULL;
    for (int i=0;i<a.len;++i) {
        int t=1;
        for (int j=0;j<MaxK && i+j<a.len;++j) {
            t=t*2+(str[i+j]=='1');
            a.o[t]=true;
        }
    }
}

string getsuf(Node* a,int len) {
    if (a->str) {
        if (a->len>len) return string(a->str+(a->len-len));
        else return string(a->str);
    }
    string ret=getsuf(a->rc,len);
    if ((int)ret.length()<len) ret=getsuf(a->lc,len-ret.length())+ret;
    return ret;
}

string getpre(Node* a,int len) {
    if (a->str) {
        if (a->len>len) {
            string ret(a->str);
            ret.resize(len);
            return ret;
        } else return string(a->str);
    }
    string ret=getpre(a->lc,len);
    if ((int)ret.length()<len) ret=ret+getpre(a->rc,len-ret.length());
    return ret;
}

void build(Node& a,Node& l,Node& r) {
    a.len=l.len+r.len;
    a.lc=&l;a.rc=&r;
    a.o=l.o|r.o;
    string t=getsuf(&l,20)+getpre(&r,20);
    int len=t.length();
    for (int i=0;i<len;++i) {
        int tt=1;
        for (int j=0;j<MaxK && i+j<len;++j) {
            tt=tt*2+(t[i+j]=='1');
            a.o[tt]=true;
        }
    }
}

int main() {
    scanf("%d",&n);
    for (int i=1;i<=n;++i) {
        scanf("%s",str[i]);
        build(a[i],str[i]);
    }
    scanf("%d",&m);
    for (int i=1;i<=m;++i) {
        int x,y;
        scanf("%d%d",&x,&y);
        build(a[n+i],a[x],a[y]);
        int k=0;bool flag=true;
        while (flag) {
            int t=k+1;
            if (t>MaxK) break;
            for (int j=(1<<t);j<(1<<(t+1));++j) if (!a[n+i].o[j]) {
                flag=false;
                break;
            }
            if (flag) k++;
        }
        printf("%d\n",k);
    }
    return 0;
}