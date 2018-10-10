#include <string>
#include <iostream>
#include <sstream>
#include <math.h>
using namespace std;

// Merge combina dis arreglos de arr[]. 
// El primero es arr[l..m] 
// El segundo es arr[m+1..r] 
// Mergesort me GARANTIZA que puedo ordenar en O(nlogn)
void merge(int arr[], int l, int m, int r) 
{ 
    int i;
	int j;
	int k; 
    int n1 = m - l + 1; 
    int n2 =  r - m; 
  
    /* Crear arreglos temporales */
    int L[n1], R[n2]; 
  
    /* Copiar la información a los arreglos temporales */
    for (i = 0; i < n1; i++){ 
        L[i] = arr[l + i];
	}
    for (j = 0; j < n2; j++){
        R[j] = arr[m + 1+ j]; 
	}
  
    /* Hacer merge de los arreglos hacia arr[l..r]*/
    i = 0; // indice inicial del primer arreglo
    j = 0; // indice inicial del segundo arreglo
    k = l; // indice inicial del merge
    while (i < n1 && j < n2){ 
        if (L[i] <= R[j]){ 
            arr[k] = L[i]; 
            i++; 
        } 
        else{ 
            arr[k] = R[j]; 
            j++; 
        } 
        k++; 
    } 
  
    /* Copiar los elementos de L[] */
    while (i < n1){ 
        arr[k] = L[i]; 
        i++; 
        k++; 
    } 
  
    /* Copiar los elementos de R[] */
    while (j < n2){ 
        arr[k] = R[j]; 
        j++; 
        k++; 
    } 
} 
  
/* l es indice izquierdo and r es indice derecho de los subarreglos
de arr por ordenar */
void mergeSort(int arr[], int l, int r) 
{ 
    if (l < r){ 
        // Equivalente a
        int m = l+(r-l)/2; 
  
        // Ordenar ambas mitades
        mergeSort(arr, l, m); 
        mergeSort(arr, m+1, r); 
  
        merge(arr, l, m, r); 
    } 
} 

int main(){
	
	string firstline;
	string secondline;
	string nstring;
	string lstring;
	int n;
	int l;
	int length;
	
	
	
	//obtener la primera linea y tenerla en firstline
	getline(cin,firstline);
	length=firstline.length();
	
	int i=0;
	int j=0;
	while(i!=1){
		if(firstline.at(j)==' '){
			i=1;
		}
		j++;
	}
	
	//j es la posición de ' '
	//para separar el string por espacio
	lstring = firstline.substr(j,length);
	nstring = firstline.substr(0,j);
	l=stoi(lstring);
	n=stoi(nstring);
	
	//con esto ya tengo n y l
	
	//con n y l tengo solo me falta obtener el arreglo
	//con las lámparas y calcular el valor
	//devuelto usando la formula
	
	string strarr;
	getline(cin,strarr);
	
	string singstring;
	int arreglo[n];
	int strrarrlen;
	
	i=0;
	istringstream is(strarr);
	while(i<n){
		getline(is,singstring,' ');
		arreglo[i]=stoi(singstring);
		i++;
	}
	
	//en arreglo tengo ahora las posiciones de las lamparas
	//necesito un arreglo donde guardar las distancias
	
	int arreglodistancias[n+1];
	
	//para la primera y última lámpara 
	//tengo casos excepcionales para calular distancia
	//el resto de las distancias se calcula con posiciones
	
	//IMPORTANTE se debe ordenar el arreglo de las lamparas
	mergeSort(arreglo,0,n-1);
	
	//distancia 0 corresponde a la distancia con el límite izquierdo
	//y la primera lámpara
	//distancia 1 es la distancia entre la primera lámpara y la segunda
	//distancia n es la distancia entre la última lámpara y el límite derecho
	
	i=0;
	while(i<n+1){
		
		if(i==0){
			//esta es la primera distancia
			arreglodistancias[i]=2*arreglo[i];
		}
		if(i>0&&i<n+1){
			//este es el caso normal
			arreglodistancias[i]=abs(arreglo[i-1]-arreglo[i]);
		}
		if(i==n){
			
			//esta es la última distancia
			arreglodistancias[i]=abs(2*(l-arreglo[i-1]));
		}
	i++;
	}
	
	//teniendo el arreglo de distancias
	//necesariamente la mayor distancia / 2 es la respuesta
	
	int maxim=-1;
	i=0;
	while(i<n+1){
		
		if(maxim>=arreglodistancias[i]){
			
		}
		if(maxim<arreglodistancias[i]){
			maxim = arreglodistancias[i];
		}
		//maxim=max(maxim,arreglodistancias[i]);
		i++;
	}
	double r = (double)maxim/2;
	if(maxim%2==0){
		cout << to_string(r)+"0000";
	}
	else{
		cout << to_string(r)+"0000";
	}
	
}
// 1538721307225
