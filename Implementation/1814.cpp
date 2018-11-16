#include <bits/stdc++.h>

using namespace std;

int soma[3] = {0};

int main(){
  int vezes;
  scanf("%d\n",&vezes);
  for(int i = 0; i < vezes; i++){
    int n1, n2, n3;
    scanf("%d %d %d",&n1, &n2, &n3);
    soma[0] += n1;
    soma[1] += n2;
    soma[2] += n3;
  }
  if(soma[0] == soma[1] && soma[1] == soma[2] && soma[2] == 0)
    printf("YES\n");
  else
    printf("NO\n");
  return 0;
}
