#include<stdio.h>
#include<stdlib.h>
#include<cubo.h>

struct c {
	float lado
};

Cubo * criarCubo (float l){
	
	Cubo * pt = ( Cubo * ) malloc( sizeof( Cubo ) );
	
	if( pt != Null ){
		pt->lado = l;
	}else {
		printf("Memória insuficiente: ");
	}
	
	
	return pt;
}

float calcularArea( Cubo * cb ){
	return 6* cb->lado * cb->lado;
}


float calcularVolume( Cubo * cb ){
	return cb->lado * 	cb->lado * cb->lado;
}


float tamanhoLado( Cubo * cb){
	return cb->lado;	
}


float eliminarCubo( Cubo * cb){
	free( cb ) ;	// eliminar ponteiro 
}




