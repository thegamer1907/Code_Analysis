#include <iostream>
#include <string.h>
using namespace std;
int b, s, c, nb, ns, nc, pb, ps, pc;
long long int r, nr;
char sir[105];
long long cauta(long long st, long long dr)
{
    if(st<=dr)
    {
       long long mijl=(st+dr)/2, bani=0;
       if(ns< mijl*s) bani+=(mijl*s-ns)*ps;
       if(nc< mijl*c) bani+=(mijl*c-nc)*pc;
       if(nb< mijl*b) bani+=(mijl*b-nb)*pb;
       if(bani> r) return cauta(st, mijl-1);///nu e ok
       else return cauta(mijl+1, dr);
    }
    else return dr;
}
int main()
{
    int i, n;
    long long int mini, maxi;
    cin>>sir;
    cin>>nb>>ns>>nc>>pb>>ps>>pc>>r;
    n=strlen(sir);
    for(i=0; i<n; i++)
    {
        if(sir[i]=='B') b++;
        if(sir[i]=='S') s++;
        if(sir[i]=='C') c++;
    }
    ///b, s, c per hamburger
    ///incerci sa completezi hamburgerii incompleti formati din produsele pe care le ai
    ///cauti binar nr de hamburgeri pe care ii poti forma cu nb, bc, ns, completati cu un nr de ruble <=r

    mini=r+ nb+ nc+ ns;
    maxi=0;

    if(s!=0) {if(mini> ns/s) mini=ns/s; if(maxi< ns/s+1) maxi=ns/s+1;}
    if(b!=0) {if(mini> nb/b) mini=nb/b; if(maxi< nb/b+1) maxi=nb/b+1;}
    if(c!=0) {if(mini> nc/c) mini=nc/c; if(maxi< nc/c+1) maxi=nc/c+1;}

    nr=cauta(mini, maxi);
    if(ns< s*nr) r-=(s*nr- ns)*ps;
    if(nc< c*nr) r-=(c*nr- nc)*pc;
    if(nb< b*nr) r-=(b*nr- nb)*pb;

    nr+=(r/ (pb* b+pc *c +ps* s));

    cout<<nr;

    return 0;
}
