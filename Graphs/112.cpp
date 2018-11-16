#include<stdio.h>
#include<stdlib.h>
#include <math.h> 
#include <cstring>

int main() {
    
    int count =0;
    int moves =0;
    
    scanf("%i %i ", &count, &moves);
    
    char person[count]={""};
    scanf("%s",&person);
    
    char temp[count]={""};
    
    // clone char person
    strcpy(temp, person);
    
    while(moves>0){
        for(int i=0;i<count;i++){
            if((i+1)<count){
                 if(person[i]=='B'&& person[i+1]=='G'){
                    char tmp = person[i];
                    temp[i] = temp[i+1];
                    temp[i+1] = tmp;
                }
            }
        }
        moves--;
        strcpy(person,temp);
    }
        
    printf("%s", person);
    
}
