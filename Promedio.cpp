#include <iostream>
using namespace std;
main(){
int n1=0,n2=0,n3=0;	
float promedio =0;
string mensaje="";
cout<<"Ingrese Nota1:";
cin>>n1;
cout<<"Ingrese Nota2:";
cin>>n2;
cout<<"Ingrese Nota3:";
cin>>n3;
promedio = (n1+n2+n3)/3;
mensaje = promedio >60 ?"Aprobo" : "Reprobo";
cout<<"El Promedio es: "<<promedio<<" Por lo tanto "<<mensaje<<endl;

if(promedio>=0 && promedio<61){
	cout<<"Mala nota\n";	
}
if(promedio>=61 && promedio<81){
	cout<<"Buena nota\n";	
}
if(promedio>=81){
	cout<<"Excelente nota\n";	
}
system("pause");	
}