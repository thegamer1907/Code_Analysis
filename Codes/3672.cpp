/*
                   _ooOoo_
                  o8888888o
                  88" . "88
                  (| -_- |)
                  O\  =  /O
               ____/`---'\____
             .'  \\|     |//  `.
            /  \\|||  :  |||//  \
           /  _||||| -:- |||||-  \
           |   | \\\  -  /// |   |
           | \_|  ''\---/''  |   |
           \  .-\__  `-`  ___/-. /
         ___`. .'  /--.--\  `. . ___
      ."" '<  `.___\_<|>_/___.'  >'"".
     | | :  `- \`.;`\ _ /`;.`/ - ` : | |
     \  \ `-.   \_ __\ /__ _/   .-` /  /
======`-.____`-.___\_____/___.-`____.-'======
                   `=---='
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
         ���汣��       ����BUG
*/
//use readint!
#pragma GCC optimize(1)
#pragma G++ optimize(1)
#pragma GCC optimize(2)
#pragma G++ optimize(2)
#pragma GCC optimize(3)
#pragma G++ optimize(3)
#pragma GCC optimize(4)
#pragma G++ optimize(4)
#pragma GCC optimize(5)
#pragma G++ optimize(5)
#pragma GCC optimize(6)
#pragma G++ optimize(6)
#pragma GCC optimize(7)
#pragma G++ optimize(7)
#pragma GCC optimize(8)
#pragma G++ optimize(8)
#pragma GCC optimize(9)
#pragma G++ optimize(9)
#pragma GCC optimize("-funsafe-loop-optimizations")
#pragma GCC optimize("-funroll-loops")
#pragma GCC optimize("-fwhole-program")
#pragma GCC optimize("Ofast,no-stack-protector")
#pragma GCC optimize("-fthread-jumps")
#pragma GCC optimize("-falign-functions")
#pragma GCC optimize("-falign-jumps")
#pragma GCC optimize("-falign-loops")
#pragma GCC optimize("-falign-labels")
#pragma GCC optimize("-fcaller-saves")
#pragma GCC optimize("-fcrossjumping")
#pragma GCC optimize("-fcse-follow-jumps")
#pragma GCC optimize("-fcse-skip-blocks")
#pragma GCC optimize("-fdelete-null-pointer-checks")
#pragma GCC optimize("-fdevirtualize")
#pragma GCC optimize("-fexpensive-optimizations")
#pragma GCC optimize("-fgcse")
#pragma GCC optimize("-fgcse-lm")
#pragma GCC optimize("-fhoist-adjacent-loads")
#pragma GCC optimize("-finline-small-functions")
#pragma GCC optimize("-findirect-inlining")
#pragma GCC optimize("-fipa-sra")
#pragma GCC optimize("-foptimize-sibling-calls")
#pragma GCC optimize("-fpartial-inlining")
#pragma GCC optimize("-fpeephole2")
#pragma GCC optimize("-freorder-blocks")
#pragma GCC optimize("-freorder-functions")
#pragma GCC optimize("-frerun-cse-after-loop")
#pragma GCC optimize("-fsched-interblock")
#pragma GCC optimize("-fsched-spec")
#pragma GCC optimize("-fschedule-insns")
#pragma GCC optimize("-fschedule-insns2")
#pragma GCC optimize("-fstrict-aliasing")
#pragma GCC optimize("-fstrict-overflow")
#pragma GCC optimize("-ftree-switch-conversion")
#pragma GCC optimize("-ftree-tail-merge")
#pragma GCC optimize("-ftree-pre")
#pragma GCC optimize("-ftree-vrp")
#include<map>
#include<iostream>
#include<iomanip>
//#include<conio.h>
#include<algorithm>
#include<vector>
#include<set>
#include<cmath>
#include<stdio.h>
#include<fstream>
#include<assert.h>
#include<time.h>
#include<queue>
#include<deque>
#include<stack>
#include<list>
#include<sstream>
#include<string.h>
#define mp make_pair
#define ll long long
#define all(v) v.begin(),v.end()
#define memset(a,b) memset(a,b,sizeof(a))
using namespace std;
const int INF=1e9;
const int maxn=10000;
struct bign{
    int d[maxn], len;
    inline void clean() { while(len > 1 && !d[len-1]) len--; }
    inline bign()          { memset(d, 0); len=1; }
    inline bign(int num)   { *this=num; }
    inline bign(char* num) { *this=num; }
    inline bign operator=(const char* num){
        memset(d, 0); len=strlen(num);
        for(int i=0; i<len; i++) d[i]=num[len-1-i] - '0';
        clean();
        return *this;
    }
    inline bign operator=(int num){
        char s[20]; sprintf(s, "%d", num);
        *this=s;
        return *this;
    }
    inline bign operator + (const bign& b){
        bign c=*this; int i;
        for (i=0; i<b.len; i++){
            c.d[i] +=b.d[i];
            if (c.d[i] > 9) c.d[i]%=10, c.d[i+1]++;
        }
        while (c.d[i] > 9) c.d[i++]%=10, c.d[i]++;
        c.len=max(len, b.len);
        if (c.d[i] && c.len<=i) c.len=i+1;
        return c;
    }
	inline bign operator - (const bign& b){
        bign c=*this; int i;
        for (i=0; i<b.len; i++){
            c.d[i] -=b.d[i];
            if (c.d[i]<0) c.d[i]+=10, c.d[i+1]--;
        }
        while (c.d[i]<0) c.d[i++]+=10, c.d[i]--;
//      c.clean();
        return c;
    }
    inline bign operator * (const bign& b)const{
        int i, j; bign c; c.len=len + b.len;
        for(j=0; j<b.len; j++) for(i=0; i<len; i++)
            c.d[i+j] +=d[i] * b.d[j];
        for(i=0; i<c.len-1; i++)
            c.d[i+1] +=c.d[i]/10, c.d[i] %=10;
        c.clean();
        return c;
    }
    inline bign operator / (const bign& b){
        int i, j;
        bign c=*this, a=0;
        for (i=len - 1; i >=0; i--)
        {
            a=a*10 + d[i];
            for (j=0; j<10; j++) if (a<b*(j+1)) break;
            c.d[i]=j;
            a=a - b*j;
        }
        c.clean();
        return c;
    }
    inline bign operator % (const bign& b){
        int i, j;
        bign a=0;
        for (i=len-1;i>=0;i--){
            a=a*10 + d[i];
            for (j=0; j<10; j++) if (a<b*(j+1)) break;
            a=a - b*j;
        }
        return a;
    }
    inline bign operator += (const bign& b){
        *this=*this + b;
        return *this;
    }
    inline bign operator *= (const bign& b){
    	*this=*this * b;
    	return *this;
	}
	inline bign operator -= (const bign& b){
		*this=*this - b;
		return *this;
	}
	inline bign operator /= (const bign& b){
		*this=*this / b;
		return *this;
	}
    inline bool operator < (const bign& b) const{
        if(len !=b.len) return len<b.len;
        for(int i=len-1; i >=0; i--)
            if(d[i] !=b.d[i]) return d[i]<b.d[i];
        return false;
    }
    inline bool operator >(const bign& b) const{return b<*this;}
    inline bool operator<=(const bign& b) const{return !(b<*this);}
    inline bool operator>=(const bign& b) const{return !(*this<b);}
    inline bool operator!=(const bign& b) const{return b<*this || *this<b;}
    inline bool operator==(const bign& b) const{return !(b<*this) && !(b > *this);}
    inline string str() const{
        char s[maxn]={};
        for(int i=0; i<len; i++) s[len-1-i]=d[i]+'0';
        return s;
    }
};

inline istream& operator >>(istream& in, bign& x)
{
    string s;
    in>>s;
    x=s.c_str();
    return in;
}

inline ostream& operator << (ostream& out, const bign& x)
{
    out<<x.str();
    return out;
}
inline void write(ll x){
    if(x<0) putchar('-'),x=-x;
    if(x>9) write(x/10);
    putchar(x%10+'0');
}
inline int pt(int a[],int l,int r){
	int p,i,j;
	p=a[l];
	i=l;
	j=r+1;
	for(;;){
		while(a[++i]<p) if(i>=r) break;
		while(a[--j]>p) if(j<=l) break;
		if(i>=j) break;
		else swap(a[i],a[j]);
	}
	if(j==l) return j;
	swap(a[l],a[j]);
	return j;
}
inline void q_sort(int a[],int l,int r){
	int q;
	if(r>l){
		q=pt(a,l,r);
		q_sort(a,l,q-1);
		q_sort(a,q+1,r);
	}
}
inline void write(int x){
    if(x<0) putchar('-'),x=-x;
    if(x>9) write(x/10);
    putchar(x%10+'0');
}
inline void rd(long long &val){
    long long x=0;
    int f=1;
    char ch=getchar();
    while((ch<'0'||ch>'9')&&ch!='-') ch=getchar();
	if(ch=='-'){
		f=-1;
		ch=getchar();
	}
    while(ch>='0'&&ch<='9'){
        x=x*10+ch-'0';
        ch=getchar();
    }
    val=x*f;
}
inline void rd(int &val){
    int x=0;
    int f=1;
    char ch=getchar();
    while((ch<'0'||ch>'9')&&ch!='-') ch=getchar();
	if(ch=='-'){
		f=-1;
		ch=getchar();
	}
    while(ch>='0'&&ch<='9'){
        x=x*10+ch-'0';
        ch=getchar();
    }
    val=x*f;
}
inline void quickSort(int s[],int l,int r)  {
    if(l<r){
        int i=l,j=r,x=s[l];
        while(i<j){
            while(i<j&&s[j]>=x) j--;
            if(i<j) s[i++]=s[j];
            while(i<j&&s[i]<x) i++;
            if(i<j) s[j--] = s[i];
        }
        s[i]=x;
        quickSort(s, l, i - 1);
        quickSort(s, i + 1, r);
    }
}
ll money;
ll n[111],p[111];
string s;
ll t[111];
inline bool ok(long long x){
	long long i,tt=money;
	for(i=0;i<3;i++) tt-=max(0ll,(x*t[i]-n[i])*p[i]);
	return (tt>=0);
}
int main(){
	ios_base::sync_with_stdio(false);
	int i,j;
	cin>>s;
	cin>>n[0]>>n[1]>>n[2];
	cin>>p[0]>>p[1]>>p[2];
	cin>>money;
	for(i=0;i<s.size();i++){
		if(s[i]=='B') t[0]++;
		else if(s[i]=='S') t[1]++;
		else t[2]++;
	}
	ll l=0,r=1e14,md;
	while(l+1<r){
		md=(l+r)/2;
		if(ok(md)) l=md;
		else r=md;
	}
	cout<<l<<endl;
	return 0;
}