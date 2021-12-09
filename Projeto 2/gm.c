struct no {
	char * name;
	struct no * next;
} LCS;

LCS  * _init () {
	return NULL;
}

LCS  * _insertInBeggin( LCS * l, char * name )  {
	
	LCS * novo = ( LCS * )malloc( sizeof( LCS ) ) , * aux = l ; 
	
	if( novo == NULL ){
		printf("Memória cheia!\n\n");
		return l;
	}
	
	novo->name = name;
	 
	if( l == NULL ){
		novo->next =  novo;
		return novo;
	}
	
	
	if( aux->next == l ){
		novo->next-> l;
		aux->next = novo;	
	}else {
		
		novo->next = l;
		
		while( aux->next != l ) aux = aux->next;
		
		aux->next = novo;
		
	}
	
	
	return novo;
}


LCS  * _remove( LCS * l);

char * _sortName( LCS * l );

void _print( LCS * l );



void _destroy( LCS * l){
	free( l );
}



