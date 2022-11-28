//Autor: Helen Anai Ballesteros Cedeño
#include <iostream> //Llamando a la libreria para lograr tener ingreso a los dispositivos de ingreso y/o salida.
using namespace std;//Es dar paso ingreso al espacio del nombre donde está encerrado toda la libreria.
int main()//Aqui iniciamos la ejecucion del programa.
{//Abrimos llave.
	float HABC_x,HABC_s=0,HABC_s1=0,HABC_s5=0;//Usamos float para representar un caracter y declaramos las variables flotantes
	int HABC_i=0,HABC_l,HABC_i1=0,HABC_i5=0;//Usamos int para representar un caracter y declaramos las variables enteras.
	cout<<"Ingrese l: ";cin>>HABC_l;//Usamos cout para mostar por pantalla cualquier dato y cin para que el usuario ingrese datos.
	do{//Usamos do-while para repetir una instruccion hasta que la expresion especificada sea falsa.

	cout<<"Ingrese x: ";cin>>HABC_x;//Usamos cout para mostar por pantalla cualquier dato y cin para que el usuario ingrese datos.
	HABC_i=HABC_i+1;//Aumentamos el contador.
	HABC_s=HABC_s+HABC_x;//Acumulamos.
	if(HABC_x==1){//Usamos if como una composición de seleccion para tomar elecciones en  base a una expresion y abrimos llave.
		HABC_i1=HABC_i1+1;//Aumentamos el contador de las monedas de 1 dolar.
		HABC_s1=HABC_s1+HABC_x;//Acumulamos las monedas de 1 dolar.
	}else{//Cerramos llave y usamos else en caso de que no se cumpla con la expresion especificada.

		HABC_i5=HABC_i5+1;//Aumentamos el contador de las monedas de 50 centavos.
		HABC_s5=HABC_s5+HABC_x;//Acumulamos las monedas de 50 centavos.
	}//Cerramos llave y la estructura del if.

	}while(HABC_i<HABC_l);//Esto se va a repetir mientras la expresion sea falsa.
	cout<<"La cantidad de monedas es: "<<HABC_i<<endl;//Presentamos por pantalla la cantidad total de monedas
	cout<<"El valor es: "<<HABC_s<<endl;//Presentamos por pantalla el valor total de las monedas


	cout<<"La cantidad de monedas de 1$ es: "<<HABC_i1<<endl;//Presentamos por pantalla la cantidad total de las monedas de 1 dolar
	cout<<"El valor es: "<<HABC_s1<<endl;//Presentamos por pantalla el valor total de las monedas de 1 dolar

	cout<<"La cantidad de monedas de 50ctvs es: "<<HABC_i5<<endl;//Presentamos por pantalla la cantidad total de las monedas de 50 centavos
	cout<<"La cantidad de moneda es: "<<HABC_s5<<endl;//Presentamos por pantalla el valor total de las monedas de 50 centavos
	return 0;//Usamos return para terminar la ejecucion de una funcion
}//Cerramos llavee
