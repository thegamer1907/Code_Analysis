#include <cstdio>
#include <unordered_map>

#define fin stdin
#define fout stdout
//FILE *fin=fopen("a.in", "r"), *fout=fopen("a.out", "w");

#define ull unsigned long long
#define B 659

std::unordered_map <ull, int> mp;

int main(){
    int n, m;
    fscanf(fin, "%d%d ", &n, &m);

    for(int i=1; i<=n; i++){
        char ch=fgetc(fin);
        ull a=0;
        while(ch!='\n'){
            a=B*a+ch;
            ch=fgetc(fin);
        }
        mp[a]=1;
    }

    int r=0;
    for(int i=1; i<=m; i++){
        char ch=fgetc(fin);
        ull a=0;
        while(ch!='\n'){
            a=B*a+ch;
            ch=fgetc(fin);
        }
        if(mp[a]) r++;
    }

    n-=r;
    m-=r;

    if((n>m)||((n==m)&&(r%2==1))) fprintf(fout, "YES\n");
    else fprintf(fout, "NO\n");

    fclose(fin);
    fclose(fout);
    return 0;
}
