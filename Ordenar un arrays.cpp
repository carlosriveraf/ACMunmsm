#include <bits/stdc++.h>
using namespace std;

int main(){
	int N; cin>>N;
	int a[N];
	
	for( int i = 0 ; i < N ; i++ ) { cin>>a[i]; }
	
	//Se ordena todo el arrays ascendentemente.
	sort( a, a + N );
				
	return 0;
}
