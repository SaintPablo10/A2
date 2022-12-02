//Autor: Charli Steven Nieves Reinado
#include <iostream> //Llamando a la libreria para lograr tener ingreso a los dispositivos de ingreso y/o salida.
using namespace std;//Es acceder al espacio del nombre donde está encerrado toda la libreria.
int main()//Aqui iniciamos la ejecucion del programa.
{//Abrimos llave.
	float CSNR_x,CSNR_s=0,CSNR_s1=0,CSNR_s5=0;//Usamos float para representar un caracter y declaramos las variables flotantes
	int CSNR_i=0,CSNR_l,CSNR_i1=0,CSNR_i5=0;//Usamos int para representar un caracter y declaramos las variables enteras.
	cout<<"Ingrese l: ";cin>>CSNR_l;//Usamos cout para mostar por pantalla cualquier dato y cin para que el usuario ingrese datos.
	do{//Usamos do-while para repetir una instruccion hasta que la expresion especificada sea falsa.

	cout<<"Ingrese x: ";cin>>CSNR_x;//Usamos cout para mostar por pantalla cualquier dato y cin para que el usuario ingrese datos.
	CSNR_i=CSNR_i+1;//Aumentamos el contador.
	CSNR_s=CSNR_s+CSNR_x;//Acumulamos.
	if(CSNR_x==1){//Usamos if como una composición de seleccion para tomar elecciones en  base a una expresion y abrimos llave.
		CSNR_i1=CSNR_i1+1;//Aumentamos el contador de las monedas de 1 dolar.
		CSNR_s1=CSNR_s1+CSNR_x;//Acumulamos las monedas de 1 dolar.
	}else{//Cerramos llave y usamos else en caso de que no se cumpla con la expresion especificada.

		CSNR_i5=CSNR_i5+1;//Aumentamos el contador de las monedas de 50 centavos.
		CSNR_s5=CSNR_s5+CSNR_x;//Acumulamos las monedas de 50 centavos.
	}//Cerramos llave y la estructura del if.

	}while(CSNR_i<CSNR_l);//Esto se va a repetir mientras la expresion sea falsa.
	cout<<"La cantidad de monedas es: "<<CSNR_i<<endl;//Presentamos por pantalla la cantidad total de monedas
	cout<<"El valor es: "<<CSNR_s<<endl;//Presentamos por pantalla el valor total de las monedas


	cout<<"La cantidad de monedas de 1$ es: "<<CSNR_i1<<endl;//Presentamos por pantalla la cantidad total de las monedas de 1 dolar
	cout<<"El valor es: "<<CSNR_s1<<endl;//Presentamos por pantalla el valor total de las monedas de 1 dolar

	cout<<"La cantidad de monedas de 50ctvs es: "<<CSNR_i5<<endl;//Presentamos por pantalla la cantidad total de las monedas de 50 centavos
	cout<<"La cantidad de moneda es: "<<CSNR_s5<<endl;//Presentamos por pantalla el valor total de las monedas de 50 centavos
	return 0;//Usamos return para terminar la ejecucion de una funcion
}//Cerramos llave.
