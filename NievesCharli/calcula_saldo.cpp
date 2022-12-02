//Autor: Charli Steven Nieves Reinado
#include <iostream> //Llamando a la libreria para lograr tener ingreso a los dispositivos de ingreso y/o salida.
using namespace std;//Es acceder al espacio del nombre donde está encerrado toda la libreria.
int main()//Aqui iniciamos la ejecucion del programa.
{//Abrimos llave.
	float CSNR_x,CSNR_s=0;//Usamos float para representar un caracter y declaramos las variables flotantes.
	int CSNR_i=0,CSNR_l;//Usamos int para representar un caracter y declaramos las variables enteras.
	cout<<"Ingrese cantidad de egresos (l): ";cin>>CSNR_l;//Usamos cout para mostar por pantalla cualquier dato y cin para que el usuario ingrese datos.
	cout<<"Ingrese saldo inicial (s): ";cin>>CSNR_s;///Usamos cout para mostar por pantalla cualquier dato y cin para que el usuario ingrese datos.
	
	do{//Usamos do-while para repetir una instruccion hasta que la expresion especificada sea falsa.
	cout<<"Ingrese egreso(x): ";cin>>CSNR_x;//Usamos cout para pedir un valor y cin para que el usuario lo ingrese
	CSNR_i=CSNR_i+1;//Aumentamos el contador
	CSNR_s=CSNR_s+CSNR_x;//Acumulamos

	}while(CSNR_i<CSNR_l);//Esto se va a repetir mientras la expresion sea falsa.
	cout<<"El saldo final es: "<<CSNR_s<<endl;//Usamos cout para mostrar un mensaje y usamos endl para un salto de linea.
	return 0;//Usamos return para terminar la ejecucion de una funcion
}//Cerramos llave.
