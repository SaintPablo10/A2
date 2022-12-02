//Autor: Charli Steven Nieves Reinado
#include <iostream> //Llamando a la libreria para lograr tener ingreso a los dispositivos de ingreso y/o salida.
using namespace std;//Es acceder al espacio del nombre donde está encerrado toda la libreria.
int main()//Aqui iniciamos la ejecucion del programa.
{//Abrimos llave.
	float CSNR_x,CSNR_pm=0;//Usamos float para representar un caracter y declaramos las variables flotantes.
	int CSNR_i=0,CSNR_l;//Usamos int para representar un caracter y declaramos las variables enteras.
	cout<<"Ingrese l: ";cin>>CSNR_l;//Usamos cout para mostar por pantalla cualquier dato y cin para que el usuario ingrese datos.
	do{////Usamos do-while para repetir una instruccion hasta que la expresion especificada sea falsa.
	cout<<"Ingrese x: ";cin>>CSNR_x;//Usamos cout para mostrar un mensaje por pantalla y que el usuario lo ingrese.
	CSNR_i=CSNR_i+1;//Aumentamos el contador.
	if(CSNR_x>CSNR_pm){//Usamos if como una composición de seleccion para tomar elecciones en  base a una expresion y abrimos llave.
		CSNR_pm=CSNR_x;//Igualamos la variable CSNR_pm con la variable CSNR_x.
	}//Cerramos llave y la estructura del if.
	
	}while(CSNR_i<CSNR_l);//Esto se va a repetir mientras la expresion sea falsa.
	cout<<"El promedio maximo del curso es: "<<CSNR_pm<<endl;//Usamos cout para mostrar un mensaje y usamos endl para un salto de linea.
	return 0;//Usamos return para terminar la ejecucion de una funcion.
}//Cerramos llave.
