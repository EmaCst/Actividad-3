#include <iostream>
using namespace std;
main(){
int cod=0;	

cout<<"Ingrese un Codigo de Area:";
cin>>cod;
switch(cod)
{
	case 501: cout << "Este codigo es de Belice\n";
    break;
    case 502: cout << "Este codigo es de Guatemala\n";
    break;
    case 503: cout << "Este codigo es de El Salvador\n";
    break;
    case 504: cout << "Este codigo es de Honduras\n";
    break;
    case 505: cout << "Este codigo es de Nicaragua\n";
    break;
    case 506: cout << "Este codigo es de Costa Rica\n";
    break;
    case 507: cout << "Este codigo es de Panama\n";
    break;
    default: cout << "Este codigo no es de centro america\n"<<endl;
}

system("pause");	
}