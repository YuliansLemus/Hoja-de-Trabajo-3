/*Ejercicio # 2:
En la Pizzeria "Gran sabor" se tienen las siguientes ofertas: 
Por la compra de una pizza grande (Q80.00), recibe un descuento de 10%
Por la compra de una pizza familiar (Q115.00), recibe un descuento de 15%
Por la compra de una pizza fiesta(Q100.00), recibe un descuento de 20%
Solicitar el tipo de pizza, el precio unitario y hallar el precio a pagar.
Grabar los datos a un archivo 
y mostrar el total global de la venta del dia 
y determinar el total de lo vendido por producto, 
mostrando tambien el porcentaje con relacion al total.*/


#include <iostream>
#include <fstream>
#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
#include <regex>


void ingresar();
void Ventasdia();
void porgurpo();
char Op;
float preciop=0,cantidadp=0,preciopig=80.00,preciopifi=100.00,preciopifa=115.00,descuento=0,Pago;
int pizza=0,dia=0 ,opm;
using namespace std;

int main(){
	
do{
system("cls");
cout<<"           Menu "<<endl<<endl;
cout<<"1. Ingresar Ventas"<<endl;
cout<<"2. Total de Ventas por dia"<<endl;
cout<<"3. Total Vendido por producto"<<endl;
cout<<"4. salida"<<endl;
cout<<"\n****************************************"<<endl;
cout<<"Que Opcion Quieres?"<<endl;
cin>>opm;
switch (opm){
	case(1):{
		ingresar();
		break;
	}
	case(2):{
		Ventasdia();
		break;
	}
	case(3):{
		porgurpo();
		break;
	}
	case(4):{
		break;
	}
}	
}while	(opm<4);
system("pause");
}

void ingresar(){
do{
cout<<"Ingrese el dia?"<<endl;
cin>>dia;
cout<<"****************************************"<<endl;
cout<<"   Bienvenido Pizzeria Gran Sabor"<<endl<<endl;
cout<<"          Menu de Pizza"<<endl<<endl;
cout<<"1. pizza grande  ..........  Q.  80.00"<<endl;
cout<<"2. pizza fiesta  ..........  Q. 100.00"<<endl;
cout<<"3. pizza familia ..........  Q. 115.00"<<endl;
cout<<"\n****************************************"<<endl;
cout<<"Que Pizza Desea Ordenar?"<<endl;
fflush(stdin);
cin>>pizza;	
cout<<"Cuanatas pizzas Desea?"<<endl;
fflush(stdin);
cin>>cantidadp;
switch (pizza)
	{
	case(1):
	{
		preciop=cantidadp*preciopig;
		descuento=preciop*0.1;
		Pago=preciop-descuento;	
	cout<<"\n El total a Pagar de la pizzas es "<<Pago<<endl<<endl;
		break;
	}
	case(2):
	{
		preciop=cantidadp*preciopifi;
		descuento=preciop*0.15;
		Pago=preciop-descuento;	
	cout<<"\n El total a Pagar de la pizzas es "<<Pago<<endl<<endl;
		break;
	}
	case(3):
	{
		preciop=cantidadp*preciopifa;
		descuento=preciop*0.20;
		Pago=preciop-descuento;	
	cout<<"\n El total a Pagar de la pizzas es "<<Pago<<endl<<endl;
		break;
	}	
	}
		cout<<"Quires hacer otra Orden ?"<<endl;
		cin>>Op;	
}while((Op=='S')||(Op=='s'));

cout<<dia<<" "<<pizza<<" "<<cantidadp<<" "<<Pago<<endl;
ofstream archivoNew;
	
	try {
		archivoNew.open("Pizzeria Gran Sabor.txt",ios::app);
		archivoNew<<dia<<" "<<pizza<<" "<<cantidadp<<" "<<Pago<<endl;
		archivoNew.close();
	}
	catch(exception X){
		cout<<"Error en la manipulacion del archivo"<<endl;
		
	}	
system("pause");	
}

void porgurpo(){
	system("cls");
	ifstream archivoNewA;
	float Sueldot=0,sumatotal;	
	int cuenta=0,cuenta20=0,cuenta25=0,cuenta30=0,cuenta03=0,tp1=0,tp2=0,tp3=0;
	try{	
		archivoNewA.open("Pizzeria Gran Sabor.txt",ios::in);
		
		while (archivoNewA>>dia>>pizza>>cantidadp>>Pago){
		
		sumatotal = Pago + sumatotal;
		if (pizza==1)
				tp1+=Pago;
		else if (pizza==2)
				tp2+=Pago;
		else if (pizza==3)
				tp3+=Pago;
}
		archivoNewA.close();		
		cout<<"Total de Ventas:          "<<sumatotal<<endl;
		cout<<"Porcentaje por tamaño de Pizza  "<<endl;
		cout<<" Pizza Grande   "<<tp1<<"  sobre el total: "<<setprecision(3)<<tp1*100/sumatotal<<"%"<<endl;
		cout<<" Pizza Familiar "<<tp2<<"  sobre el total: "<<setprecision(3)<<tp2*100/sumatotal<<"%"<<endl;
		cout<<" Pizza Fiesta   "<<tp3<<"  sobre el total: "<<setprecision(3)<<tp3*100/sumatotal<<"%"<<endl;
	}
	catch (exception X){		
			cout<<"Error para abrir archivo"<<endl;			
			exit(1);
	}	
	system("pause");
}

void Ventasdia(){
	system("cls");
	ifstream archivoNewA;
	float Sueldot=0,sumatotal;	
	int cuenta=0,cuenta20=0,cuenta25=0,cuenta30=0,cuenta03=0,tpv1=0,tpv2=0,tpv3=0,tpv4=0,tpv5=0,tpv6=0,tpv7=0,tpv8=0,tpv9=0,tpv10=0,tpv11=0,tpv12=0,tpv13=0,tpv14=0,tpv15=0,tpv16=0,tpv17=0,tpv18=0;
	int tpv19=0,tpv20=0,tpv21=0,tpv22=0,tpv23=0,tpv24=0,tpv25=0,tpv26=0,tpv27=0,tpv28=0,tpv29=0,tpv30=0,tpv31=0;
	try{	
		archivoNewA.open("Pizzeria Gran Sabor.txt",ios::in);
		while (archivoNewA>>dia>>pizza>>cantidadp>>Pago){
		if (dia==1)
				tpv1+=Pago;
		else if (dia==2)
				tpv2+=Pago;
		else if (dia==3)
				tpv3+=Pago;
		else if (dia==4)
				tpv2+=Pago;
		else if (dia==5)
				tpv3+=Pago;
		else if (dia==6)
				tpv2+=Pago;
		else if (dia==7)
				tpv3+=Pago;				
		else if (dia==8)
				tpv2+=Pago;
		else if (dia==9)
				tpv3+=Pago;		
		else if (dia==10)
				tpv2+=Pago;
		else if (dia==11)
				tpv3+=Pago;
		else if (dia==12)
				tpv2+=Pago;
		else if (dia==13)
				tpv3+=Pago;
		else if (dia==14)
				tpv2+=Pago;
		else if (dia==15)
				tpv3+=Pago;				
		else if (dia==16)
				tpv2+=Pago;
		else if (dia==17)
				tpv3+=Pago;		
		else if (dia==18)
				tpv2+=Pago;
		else if (dia==19)
				tpv3+=Pago;
		else if (dia==20)
				tpv2+=Pago;
		else if (dia==21)
				tpv3+=Pago;
		else if (dia==22)
				tpv2+=Pago;
		else if (dia==23)
				tpv3+=Pago;				
		else if (dia==24)
				tpv2+=Pago;
		else if (dia==25)
				tpv3+=Pago;		
		else if (dia==26)
				tpv2+=Pago;
		else if (dia==27)
				tpv3+=Pago;
		else if (dia==28)
				tpv2+=Pago;
		else if (dia==29)
				tpv3+=Pago;
		else if (dia==30)
				tpv2+=Pago;
		else if (dia==31)
				tpv3+=Pago;				
}
		archivoNewA.close();		
		cout<<"Total de Ventas por dia: "<<endl<<endl;
		cout<<"Ventas del Dia 01 Q."<<setprecision(3)<<tpv1<<"\t\t\tVentas del Dia 02 Q."<<setprecision(3)<<tpv2<<endl;
		cout<<"Ventas del Dia 03 Q."<<setprecision(3)<<tpv3<<"\t\t\tVentas del Dia 04 Q."<<setprecision(3)<<tpv4<<endl;
		cout<<"Ventas del Dia 05 Q."<<setprecision(3)<<tpv5<<"\t\t\tVentas del Dia 06 Q."<<setprecision(3)<<tpv6<<endl;
		cout<<"Ventas del Dia 07 Q."<<setprecision(3)<<tpv7<<"\t\t\tVentas del Dia 08 Q."<<setprecision(3)<<tpv8<<endl;
		cout<<"Ventas del Dia 09 Q."<<setprecision(3)<<tpv9<<"\t\t\tVentas del Dia 10 Q."<<setprecision(3)<<tpv10<<endl;
		cout<<"Ventas del Dia 11 Q."<<setprecision(3)<<tpv11<<"\t\t\tVentas del Dia 12 Q."<<setprecision(3)<<tpv12<<endl;
		cout<<"Ventas del Dia 13 Q."<<setprecision(3)<<tpv13<<"\t\t\tVentas del Dia 14 Q."<<setprecision(3)<<tpv14<<endl;
		cout<<"Ventas del Dia 15 Q."<<setprecision(3)<<tpv15<<"\t\t\tVentas del Dia 16 Q."<<setprecision(3)<<tpv16<<endl;
		cout<<"Ventas del Dia 17 Q."<<setprecision(3)<<tpv17<<"\t\t\tVentas del Dia 18 Q."<<setprecision(3)<<tpv18<<endl;
		cout<<"Ventas del Dia 19 Q."<<setprecision(3)<<tpv19<<"\t\t\tVentas del Dia 20 Q."<<setprecision(3)<<tpv20<<endl;
		cout<<"Ventas del Dia 21 Q."<<setprecision(3)<<tpv21<<"\t\t\tVentas del Dia 22 Q."<<setprecision(3)<<tpv22<<endl;
		cout<<"Ventas del Dia 23 Q."<<setprecision(3)<<tpv23<<"\t\t\tVentas del Dia 24 Q."<<setprecision(3)<<tpv24<<endl;
		cout<<"Ventas del Dia 25 Q."<<setprecision(3)<<tpv25<<"\t\t\tVentas del Dia 26 Q."<<setprecision(3)<<tpv26<<endl;
		cout<<"Ventas del Dia 27 Q."<<setprecision(3)<<tpv27<<"\t\t\tVentas del Dia 28 Q."<<setprecision(3)<<tpv28<<endl;
		cout<<"Ventas del Dia 29 Q."<<setprecision(3)<<tpv29<<"\t\t\tVentas del Dia 30 Q."<<setprecision(3)<<tpv30<<endl;
		cout<<"Ventas del Dia 31 Q."<<setprecision(3)<<tpv31<<endl;
	}
	catch (exception X){		
			cout<<"Error para abrir archivo"<<endl;			
			exit(1);
	}		
system("pause");
}
