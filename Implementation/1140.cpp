#include <bits/stdc++.h>
using namespace std;
inline void swap(char &a, char &b) {
  char temp = a;
  a = b;
  b = temp;
  return;
}

int main(){
 int n, t;
 char str[51];
 scanf("%d %d\n", &n, &t);
 scanf("%s", str);
//printf("%s %d\n", str, strlen(str));
 while(t--) {
 if (strlen(str) == 1)
 	break;
   for (int i = 0; i <= (strlen(str) - 2); ){
     //printf("hey %d\n", i);
     if (str[i] == 'B' && str[i + 1] == 'G'){
		//printf("hey\n");
		swap(str[i], str[i + 1]);
		i += 2;
		
	}
	else i++;
   } 
 } 
 printf("%s\n", str);
return 0;
}
