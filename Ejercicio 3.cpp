/*
Ejercicio # 3:
Un empresa que se dedica a la venta de seguros de vehiculos, 
calcula el importe
según el modelo y color del automovil, 
asi como la edad del conductor.
Modelo       Color             Precio
A              Blanco           240.50
                  Metalizado    330.00
                Otros           270.50

B               Blanco          300.00                 
				 Metalizado     360.50
                 Otros          330.00
                 
Incremento de precio
Edad            % Incremento
<31                    25%
Entre 31 y 65  			0%
>65                   30%

Determine el importe a pagar mostrandolo en pantalla según los datos del vehículo (modelo y color)
y la edad del conductor.

Grabe los datos a un archivo.
*/

#include <iostream>
#include <fstream>
#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
#include <regex>

float Precio=0,Incremento=0;
char op=0;

using namespace std;

struct cliente{
	string Nombre;
	int edad;
	int Modelo;
	int Color;
}clic;

int main(){

do{

cout<<"Datos para calcular el valor del seguro"<<endl;	
	cout<<"Nombre Cliente"<<endl;	
	getline(cin,clic.Nombre);
	fflush(stdin);
do{
	cout<<"Ingrese la edad"<<endl;
	cin>>clic.edad;	
}while((clic.edad<=17)||(clic.edad>=90));
do{
	cout<<" Modelos Disponibles"<<endl;
	cout<<" 1.  A"<<endl;
	cout<<" 2.  B"<<endl;
	cout<<"Ingrese el Modelo"<<endl;
	cin>>clic.Modelo; 	
}while((clic.Modelo<=0)||(clic.Modelo>=3));	
do{
	cout<<" Modelos Disponibles"<<endl;
	cout<<" Colores Disponibles"<<endl;
	cout<<" 1.  Blanco"<<endl;
	cout<<" 2.  Metalizado"<<endl;
	cout<<" 3.  otros"<<endl;
	cout<<"Ingrese un Color"<<endl;
	cin>>clic.Color;
}while((clic.Color<=0)||(clic.Color>=4));	

if(clic.Modelo==1){
	if(clic.Color==1){
		if(clic.edad<31){
			Incremento=240.50*0.25;
			Precio=240.50+Incremento;
			}
		else if((clic.edad>=31)||(clic.edad<65)){
			Incremento=240.50*0;
			Precio=240.50+Incremento;
			}
		else if(clic.edad>31){
			Incremento=240.50*0.3;
			Precio=240.50+Incremento;
			}
	}
	else if(clic.Color==2){
		if(clic.edad<31){
			Incremento=330.00*0.25;
			Precio=330.00+Incremento;
			}
		else if((clic.edad>=31)||(clic.edad<65)){
			Incremento=330.00*0;
			Precio=330.00+Incremento;
			}
		else if(clic.edad>31){
			Incremento=330.00*0.3;
			Precio=330.00+Incremento;
			}
	}	
	else if(clic.Color==3){
		if(clic.edad<31){
			Incremento=270.50*0.25;
			Precio=270.50+Incremento;
			}
		else if((clic.edad>=31)||(clic.edad<65)){
			Incremento=270.50*0;
			Precio=270.50+Incremento;
			}
		else if(clic.edad>31){
			Incremento=270.50*0.3;
			Precio=270.50+Incremento;
			}
	}	
	
}
else if(clic.Modelo==2){
	if(clic.Color==1){
		if(clic.edad<31){
			Incremento=300.00*0.25;
			Precio=300.00+Incremento;
			}
		else if((clic.edad>=31)||(clic.edad<65)){
			Incremento=300.00*0;
			Precio=300.00+Incremento;
			}
		else if(clic.edad>31){
			Incremento=300.00*0.3;
			Precio=300.00+Incremento;
			}
	}
	else if(clic.Color==2){
		if(clic.edad<31){
			Incremento=360.50*0.25;
			Precio=360.50+Incremento;
			}
		else if((clic.edad>=31)||(clic.edad<65)){
			Incremento=360.50*0;
			Precio=360.50+Incremento;
			}
		else if(clic.edad>31){
			Incremento=360.50*0.3;
			Precio=360.50+Incremento;
			}
	}	
	else if(clic.Color==3){
		if(clic.edad<31){
			Incremento=330.00*0.25;
			Precio=330.00+Incremento;
			}
		else if((clic.edad>=31)||(clic.edad<65)){
			Incremento=330.00*0;
			Precio=330.00+Incremento;
			}
		else if(clic.edad>31){
			Incremento=330.00*0.3;
			Precio=330.00+Incremento;
			}
	}	
}
cout<<"------------------------------------------------------------------------------"<<endl;

cout<<"Nombre Cliente"<<"\t"<<"Edad"<<"\t"<<"Modelo"<<"\t"<<"Color"<<"\t"<<"Precio"<<endl<<endl;
cout<<clic.Nombre<<"\t"<<clic.edad<<"\t"<<clic.Modelo<<"\t"<<clic.Color<<"\t"<<Precio<<endl<<endl;
 ofstream archivoN;
	try {
		archivoN.open("Seguros.txt",ios::app);
		archivoN<<clic.Nombre<<" "<<clic.edad<<" "<<clic.Modelo<<" "<<clic.Color<<" "<<Precio<<endl;
		archivoN.close();
	}
	catch(exception X){
		cout<<"Error en la manipulacion del archivo"<<endl;	
	}
	cout<<"Quienes hacer otro Calculo S/N"<<endl;
	cin>>op;		
}while((op=='s')&&(op=='S'));

system("pause");
}



