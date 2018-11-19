#include<cstdio>

int main()
{
  char str[5], temp[5];
  int n, flag1 = 0, flag2 = 0;

  scanf("%s", str);
  scanf("%d", &n);

  for(int i = 0; i < n; i++){
    scanf("%s", temp);

    if(temp[0] == str[1])
      flag2 = 1;
    if(temp[1] == str[0])
      flag1 = 1;
    if(temp[0] == str[0] && temp[1] == str[1]){
      flag1 = 1; flag2 = 1;
    }
  }

  if(flag1 && flag2)
    printf("YES\n");
  else
    printf("NO\n");

  return 0;
} 
