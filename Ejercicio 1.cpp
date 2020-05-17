/* Ejercicio # 1:
El presidente de un club de futbol requiere calcular el sueldo de sus jugadores
si se tiene como dato la edad y la nacionalidad del jugador.

Ademas se sabe que el sueldo se calculara de la siguiente manera:
Sueldo fijo $2500.00
Si es extranjero recibe un bono de $500.00

Si la edad esta entre 15 y 20, el salario incrementa en $1400.00
Si la edad esta entre 21 y 25, el salario incrementa en $1500.00
Si la edad esta entre 26 y 30, el salario incrementa en $1200.00
Si la edad es mayor a 30, el salario incrementa en $800.00
Determine el sueldo del jugador si se tiene como datos la edad y nacionalidad.

Mostrar un reporte del total a pagar de planilla, así como el total de jugadores por
los rangos de edad. Ademas de indicar que rango de edad es el mas remunerado.*/


#include <iostream>
#include <fstream>
#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
#include <regex>

using namespace std;

int op;

void menu();
void Ingresar();
void Reporte();

float suelto=0,SalNat=500.00,Sal20=1400.00,Sal25=1500.00,Sal30=1200.00,Sal03=800.00;

struct Jugador{
	string Nombre;
	int Edad;
	float Suelb=0;
	string Nacio; 
}jug;

int main(){
	menu();
}


void menu(){
	do{
		cout<<"Menu"<<endl;
		cout<<"1. Ingresar Jugador"<<endl;
		cout<<"2. Reporte"<<endl;
		cout<<"3. Salida"<<endl;
		cin>>op;
		switch (op){
		
			case (1):	
			{
				Ingresar();	
				break;		
			}
		case (2):	
			{
				Reporte();
				break;
			}
	}
	}while(op<3);
}

void Ingresar(){
char oppro;
do
{
	system("cls");
		fflush(stdin);
	cout<<"Ingrese Nombre del jugador"<<endl;
	getline(cin,jug.Nombre); 
	const auto obj = regex{ " " };
    const auto repl = string{ "_" };
    const auto valor = jug.Nombre;
	fflush(stdin);
	cout<<"Ingrese Edad"<<endl;
	cin>>jug.Edad;
	fflush(stdin);
	cout<<"Nacionalidad"<<endl;
	cin>>jug.Nacio;
		
if((jug.Nacio=="Guatemalteco")||(jug.Nacio=="Guatemalteca")){
	jug.Suelb=2500;	
			fflush(stdin);
	cout<<"No es Extranjero "<<endl;
	
	if((jug.Edad>=15)&&(jug.Edad<=20))
	{
	jug.Suelb+=Sal20;
	cout<<"Bono por estar entre 15 a 20 años "<<Sal20<<endl;
	}
else if ((jug.Edad>=21)&&(jug.Edad<=25))
	{
	jug.Suelb+=Sal25;
	cout<<"Bono por estar entre 21 a 25 años "<<Sal25<<endl;
	}
else if ((jug.Edad>=26)&&(jug.Edad<=30))
	{
	jug.Suelb+=Sal30;
	cout<<"Bono por estar entre 26 a 30 años "<<Sal30<<endl;
	}
else if (jug.Edad>30)
	{
	jug.Suelb+=Sal03;
	cout<<"Bono por tener mas de 30 "<<Sal03<<endl;
	}
}

else if((jug.Nacio!="Guatemalteco")||(jug.Nacio!="Guatemalteca")){ 
	jug.Suelb=2500+SalNat;
	cout<<"Bono por ser Extranjero "<<SalNat<<endl;
	if((jug.Edad>=15)&&(jug.Edad<=20))
	{
	jug.Suelb+=Sal20;
	cout<<"Bono por estar entre 15 a 20 años "<<Sal20<<endl;
	}
else if ((jug.Edad>=21)&&(jug.Edad<=25))
	{
	jug.Suelb+=Sal25;
	cout<<"Bono por estar entre 21 a 25 años "<<Sal25<<endl;
	}
else if ((jug.Edad>=26)&&(jug.Edad<=30))
	{
	jug.Suelb+=Sal30;
	cout<<"Bono por estar entre 26 a 30 años "<<Sal30<<endl;
	}
else if (jug.Edad>30)
	{
	jug.Suelb+=Sal03;
	cout<<"Bono por tener mas de 30 "<<Sal03<<endl;
	}
}

	cout<<regex_replace(valor, obj, repl)<<" "<<jug.Nacio<<" "<<jug.Edad<<" "<<jug.Suelb<<endl;
	
	ofstream archivoNew;
	
	try {
		archivoNew.open("Jugadores.txt",ios::app);
		archivoNew<<regex_replace(valor, obj, repl)<<" "<<jug.Nacio<<" "<<jug.Edad<<" "<<jug.Suelb<<endl;
		archivoNew.close();
	}
	catch(exception X){
		cout<<"Error en la manipulacion del archivo"<<endl;
	}
	cout<<"¿Quieres agregar otro Producto? s/n"<<endl;
	cin>>oppro;
	
	}while((oppro=='S')||(oppro=='s'));	
system("cls");
menu();
}


void Reporte(){
	system("cls");
	ifstream archivoNewA;
	float Sueldot=0;	
	int cuenta=0,cuenta20=0,cuenta25=0,cuenta30=0,cuenta03=0;
	try{	
		archivoNewA.open("Jugadores.txt",ios::in);
		
		while (archivoNewA >>jug.Nombre>>jug.Nacio>>jug.Edad>>jug.Suelb){	
			
			const auto obj = regex{ "_" };
    		const auto repl = string{ " " };
    		const auto valor = jug.Nombre;
				cout<<regex_replace(valor, obj, repl)<<"\t"<<jug.Nacio<<"\t"<<jug.Edad<<"\t"<<jug.Suelb<<endl;
				Sueldot=Sueldot+jug.Suelb;
					
	if((jug.Edad>=15)&&(jug.Edad<=20))
	{
	cuenta20++;
	}
	if ((jug.Edad>=21)&&(jug.Edad<=25))
	{
	cuenta25++;
	}
	if ((jug.Edad>=26)&&(jug.Edad<=30))
	{
	cuenta30++;
	}
	if (jug.Edad>30)
	{
	cuenta03++;
	}	
					
		}		
			cout<<"\n El total Pago Planilla es de : $"<<Sueldot<<endl;
			
	cout<<"\n\n total de jugadores por los rangos de edad \n"<<endl;
	cout<<"Edad entre 15 a 20 años "<<cuenta20<<" Jugadores"<<endl;
	cout<<"Edad entre 21 a 25 años "<<cuenta25<<" Jugadores"<<endl;
	cout<<"Edad entre 26 a 30 años "<<cuenta30<<" Jugadores"<<endl;
	cout<<"Edad mas de 30          "<<cuenta03<<" Jugadores"<<endl;
		
	int Grupo5,Comple;	
		
		cout<<"\n\nGrupo de edades con mayor Jugadores  :"<<endl;		
					Grupo5=((cuenta20>cuenta25)?(cuenta20>cuenta30? cuenta20:cuenta30):(cuenta25>cuenta30 ? cuenta25:cuenta30));
	Comple=(Grupo5>cuenta03 ? Grupo5:cuenta03);
			if(Comple==cuenta20){
			cout<<"\nhay mas Jugadores entre 15 a 20 años con  el total de "<<Comple<<endl<<endl;
		}
		else if(Comple==cuenta25){
			cout<<"\nhay mas Jugadores entre 21 a 25 años  con  el total de "<<Comple<<endl<<endl;
		}
		else if(Comple==cuenta30){
			cout<<"\nhay mas Jugadores entre 26 a 30 años  con  el total de "<<Comple<<endl<<endl;
		}
		else if(Comple==cuenta03){
			cout<<"\nhay mas Jugadores mayores de 30  con  el total de "<<Comple<<endl<<endl;
		}
		
		
		
		archivoNewA.close();
		
	}
	catch (exception X){		
			cout<<"Error para abrir archivo"<<endl;			
			exit(1);
	}	
system("pause");
system("cls");	
	menu();
	
}

