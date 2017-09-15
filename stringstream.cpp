Uno de sus usos sirve para inputs de una sola línea en el cual no sé cuántos números habrá y necesito
operar con ellos
Ejemplo: 
#####################################################################################################
11827 - Maximum GCD(UVA)
#####################################################################################################
https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2927
#####################################################################################################

El ejercicio consistía en hallar el mayor GCD que generaba un par de números
en cada caso se introducía una sola línea con los números separados por un espacio,
pero no se sabía cuántos iban a ser ingresados

################       ################       ############           ################
################       ################       ####      ####         ################
####                   ####        ####       ####       ####        #####
####                   ####        ####       ####        ####       ################
####                   ####        ####       ####       ####        #####
################       ################       ####      ####         ################
################       ################       ############           ################

#include <bits/stdc++.h>
using namespace std;

#define MAX 100000

int main(){
	string s; 
	getline( cin, s ); //leo la cadena con espacios y todo
	stringstream ss(s); //lo paso a un ss para poder sacar los enteros
	
	vector<int> v( MAX, 0 ); //contenedor de enteros
	int size = 0; //longitud exacta del contenedor
	
	while( ss>>v[size] ) {
		size++;
	} //mientras saque elementos del ss y los guarde en el contenedor
	//obtengo la longitud exacta
		
	int ans = 0;
		
	for( int i = 0 ; i < size ; i++ ) {
		printf( "%d\n", v[i] );
	} //imprimo los números
	
    return 0;
}
