//Autor: Helen Anai Ballesteros Cedeño
#include <iostream> //Llamando a la libreria para lograr tener ingreso a los dispositivos de ingreso y/o salida.
using namespace std;//Es dar paso al ingreso del  espacio del nombre donde está encerrado toda la libreria.
int main()//Aqui iniciamos la ejecucion del programa.
{//Abrimos llave.
	float HABC_x,HABC_s=0.0;//Usamos float para representar un caracter y declaramos las variables flotantes.
	int HABC_i=0,HABC_l;//Usamos int para representar un caracter y declaramos las variables enteras.
	cout<<"Ingrese el valor de l: ";cin>>HABC_l;//Usamos cout para mostar por pantalla cualquier dato y cin para que el usuario ingrese datos.
	do{//Usamos do-while para repetir una instruccion hasta que la expresion especificada sea falsa.
		cout<<"Ingrese el valor de x: ";cin>>HABC_x;//Usamos cout para mostrar un mensaje por pantalla y que el usuario lo ingrese.
		HABC_i=HABC_i+1;//Aumentamos el contador.
		HABC_s=HABC_s+HABC_x;//Acumulamos.
	}while(HABC_i<HABC_l);//Esto se va a repetir mientras la expresion sea falsa.
	cout<<"La suma de los numeros es: "<<HABC_s<<endl;//Usamos cout para mostrar un mensaje y usamos endl para un salto de linea.
	return 0;//Usamos return para terminar la ejecucion de una funcion.
}//Cerramos llave.
