#define tam 1000005
bool prime[tam];
void criba(){
    memset ( prime, true, sizeof (prime) );
    prime[0] = prime[1] = false;
    
    for( int i = 4 ; i < tam ; i += 2 ) {
    	prime[i] = false;
    }
	
    for( int i = 3 ; i*i <= tam ; i+=2) {
        if( prime[i] ) {
            for( int h = 2 ; i*h <= tam ; ++h ) {
            	prime[i*h] = false;
            }
        }
    }
}
