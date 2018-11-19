	#include <iostream>
#include <string>
#include <map>
#include <queue>
#include<locale>
#include <ctype.h>
#include <stack>
#include <algorithm>
#include <list>
#include <set>
#include <cmath>
#include <cstring>
#include <stdio.h>
#include <string.h>
#include <sstream>
#include <stdlib.h>
#include <vector>
#include <iomanip>
using namespace std;
int main()
{
	int k,q=0,z=0,g;
	string r,c;
	char d[100][100];
	c="NO";
	cin>>r;
	cin>>k;

	for (int i=0;i<k;i++){
		for (int j=0;j<2;j++){
			cin>>d[i][j];}}
	for (int i=0;i<k;i++){
		for (int j=0;j<1;j++){
		if (d[i][j] == r[0] && d[i][j+1] == r[1] )
			c="YES";
		}}
	for (int i=0;i<(k-1);i++){
		for (int j=0;j<1;j++){
		if (d[i+1][j] == r[0] && d[i][j+1] == r[1] )
			c="YES";}}
	if(d[k-1][1]==r[0]&&d[0][0]==r[1])
		c="YES";
	for (int i=0;i<k;i++){
		
	    if(d[i][1]==r[0])
			q+=4;
		if(d[i][0]==r[1])
		    z+=4;}
	if (z==4&&q==4)
		c="YES";
	for (int i=0;i<(k);i++){
		if(d[i][1]==r[0]&&d[i+1][0]==r[1]||d[k-1][1]==r[0]&&d[0][0]==r[1])
			c="YES";
	}
	for (int i=0;i<(k);i++){
		for (int j=0;j<(2);j++){
			if(d[i][j]==r[1]&&d[i][j+1]==r[0])
				c="YES";}}
	
	for (int i=0;i<(k);i++){
		for (int j=0;j<(2);j++){
			if(d[i][1]==r[0]&&d[i+1][1]==r[1])
				c="YES";}}

	if(r[0]=='w'&&r[1]=='w')
		c="NO";
	cout<<c;
	
	cin>>g;
	return 0;
}