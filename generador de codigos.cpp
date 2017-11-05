#include <bits/stdc++.h>
using namespace std;

int main(){
	set<long> listado_codigos;
	set<long> ::iterator it;
	long codigo;
	
	for( int i = 0 ; i < 100000 ; i++ ) {
		codigo = 100000 + rand() % ( 199999 + 1 - 100000 );
		cout << codigo << endl;
		if( listado_codigos.count(codigo) == 0 ) {
			listado_codigos.insert(codigo);
		}
		else{
			cout << "\tYa existe\n";
			continue;
		}
		
	}
	
	for( it = listado_codigos.begin() ; it != listado_codigos.end() ; ++it ) {
		cout << "elemento --> " << *it << " ";
		cout << "count --> " << listado_codigos.count(*it);
		cout << "\n";
	}
	
	return 0;
}
