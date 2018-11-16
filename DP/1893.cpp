#include <stdio.h>
#include <string.h>

int main(){
	int i, j, c = 0, d = 0, a = 0, b = 0, l;
	char str[100001];
	scanf("%s", str);
	for (i = 0; i < strlen(str); i++){
		if(str[i] == 'A' && str[i+1] == 'B')          {
			c++;
			if (str[i+2] == 'A')
			i+=2;
			else
			i++;
		}
		if( c > 0){
	if (str[i] == 'B' && str[i+1] == 'A'){
			d++;
			if (str[i+2] == 'B')
			i+=2;
			else
			i++;
		}
		}
	}
		for (i = 0; i < strlen(str); i++){		if(str[i] == 'B' && str[i+1] == 'A')          {
			a++;
			if (str[i+2] == 'B')
			i+=2;
			else
			i++;
		}
	if (a >0){
	if (str[i] == 'A' && str[i+1] == 'B'){
			b++;
			if (str[i+2] == 'A')
			i+=2;
			else
			i++;
		}
	}
	}
	
   
	if ((c !=0 && d!= 0) || (a != 0 && b != 0))
	printf("YES\n");
	else
	printf("NO\n");
    
    
    
	return 0;
}