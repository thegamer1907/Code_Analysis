#include <bits/stdc++.h>

using namespace std ;

void convert_array( int* road , int* road2 , int oldArray_siz , int* newArray_siz ){
	int zeroes ;
	int ones ;
	int z ;

	zeroes = 0 ;
	ones = 0 ;
	z = 1 ;
	for( int i = 0 ; i < oldArray_siz ; i ++ ){
		if( road[i] == 0 ){
			zeroes -= 1 ;
			ones = 0 ;
		}else{
			ones += 1 ;
			zeroes = 0 ;
		}
		if( zeroes != 0 && road[i+1] != 0 ){
			road2[z] = zeroes ; 
			z++ ;
		}else if( ones != 0 && road[i+1] != 1  ){
			road2[z] = ones ;
			z++ ; 
		}

	}

	*newArray_siz = z ;
}

void cum_sum_by_negative( int* arr , int siz ){
	bool flag = true ;
	for( int i = 1 ; i < siz ; i++ ){
		if(flag){
			if( arr[i] < 0 ){
				flag = false ;
			}
		}else{
			if( arr[i] + arr[i-1] < 0 ){
				arr[i] = arr[i] + arr[i-1] ;
			}else{
				flag = true ;
			}

		}
	}
}

int road[100005];
int road2[100005];
int newArray_size ;
int oldArray_size ;
int sumOfOnes = 0 ;
int gain = 0 ;

int main(){

	// freopen("input.txt" , "r" , stdin);
	// freopen("output.txt" , "w" , stdout);

	
	
	cin >> oldArray_size ;
	for( int i = 0 ; i < oldArray_size ; i++ ){
		cin >> road[i] ;
	}
	for( int i = 0 ; i < oldArray_size ; i++ ){
		sumOfOnes += road[i] ;
	}
	road[oldArray_size] = 999 ;


	convert_array( road , road2 , oldArray_size , &newArray_size );

	// for( int i = 1 ; i < newArray_size ; i++ ){
	// 	cout << road2[i] << endl;
	// }

	cum_sum_by_negative( road2 , newArray_size );

	// cout << endl;

	// for( int i = 1 ; i < newArray_size ; i++ ){
	// 	cout << road2[i] << endl;
	// }

	gain = road2[1];
	for( int i = 2 ; i < newArray_size ; i++ ){
		gain = min( gain , road2[i] );
	}	

	// cout << "Gain = "<< gain << endl;
	if( gain < 0 ){
		cout << sumOfOnes - gain << endl;
	}else{
		cout << sumOfOnes-1 << endl;
	}


	return 0 ;
	
}