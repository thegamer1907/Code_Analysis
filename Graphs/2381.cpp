#include <stdio.h>
#include <vector>
using namespace std;

int n, i=1, ij[1000001], par[100001], a, s[100001], is=0, mn=0, j=0;
vector <vector <int> > tab(100001);

int main(){
	scanf ("%d", &n);
	while (i<=n){
		scanf ("%d", &a);
		if (a!=-1)	tab[a].push_back(i), ij[a]++;
		par[i]=a;
		i++;
	}
	
	i=1;
	while (i<=n){
		if (par[i]==-1){
			s[0]=i, is=1;
			while (is>0){
				a=s[is-1];
				if (is>mn)	mn=is;
				if (ij[a]>0)	s[is]=tab[a][ij[a]-1], ij[a]--, is++;
				else is--;
			}
		}
		i++;
	}
	printf ("%d", mn);
	
return 0;}