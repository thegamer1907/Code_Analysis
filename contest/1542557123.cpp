/**********************
*@Name:
*
*@Author: Nervending
*@Describtion:
*@DateTime: 2017-10-25 14:31:20
***********************/
#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;
char pw[3];
char fd[10000][5];


int main(){
	int n;
	cin>>pw;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>fd[i];
	}
	for(int i=0;i<n;i++){
		if(fd[i][0]==pw[0]&&fd[i][1]==pw[1]){
			cout<<"YES";
			return 0;
		}
		if(fd[i][0]==pw[1]){
			for(int j=0;j<n;j++){
				if(fd[j][1]==pw[0]){
					cout<<"YES";
					return 0;
				}
			}
		}
	}
		cout<<"NO";
	return 0;
}

  	    		  	   	 		 						 	 		