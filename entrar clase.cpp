#include <iostream>
using namespace std;
main(){
	char lapiz,lapicero,cuaderno;
	cout<<"Trae un Lapiz (s/n)? ";
	cin>>lapiz;
	cout<<"Trae un Lapicero:(s/n) ";
	cin>>lapicero;
	cout<<"Trae un Cuaderno:(s/n) ";
	cin>>cuaderno;
	if ((lapiz=='s' || lapicero=='s' )&& cuaderno == 's'){
		cout<<"Puede Ingresar"<<endl;
	}else{
			cout<<"No Puede Ingresar"<<endl;
		}
system("pause");	
}