#include <iostream>
#include <bits/stdc++.h> 
#include <stdio.h>
#include <algorithm>
#include <vector>
#include <string.h>
#include <map>
#include <set>
#include <queue>
#include <math.h>
#include <iomanip>
using namespace std ;
int main()
{
	
	long long int n , t , i , j  ;
	cin >> n >> t ;
	char a[n] ;
	for(i = 0 ; i < n ; i++)
		cin >> a[i] ;
		for(j = 0 ; j < t ; j++)
		{
		for(i = 0 ; i < n ; i++)
		{
			if(i + 1 < n)
			{
				if(a[i] == 'B' && a[i+1] == 'G')
				{
					a[i+1] = 'B' ;
					a[i] = 'G' ;
					i++ ;
				}


			}
		}
	}
	for(i = 0 ;i < n ; i++)
		cout << a[i] ;
	return 0;
}