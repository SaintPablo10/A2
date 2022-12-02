//Autor: Charli Steven Nieves Reinado
#include <iostream> //Llamando a la libreria para lograr tener ingreso a los dispositivos de ingreso y/o salida.
using namespace std;//Es acceder al espacio del nombre donde está encerrado toda la libreria.
int main()//Aqui iniciamos la ejecucion del programa.
{//Abrimos llave.
	float CSNR_imc,CSNR_peso,CSNR_altura;//Usamos float para representar un caracter y declaramos las variables flotantes.
	cout<<"Ingrese el peso (kg): ";cin>>CSNR_peso;//Usamos cout para mostar por pantalla cualquier dato y cin para que el usuario ingrese datos.
	cout<<"Ingrese la altura (metros): ";cin>>CSNR_altura;//Usamos cout para mostar por pantalla cualquier dato y cin para que el usuario ingrese datos.
	CSNR_imc=CSNR_peso/(CSNR_altura*CSNR_altura);//Le damos la orden al computador de que el valor del imc es igual a el peso por altura al cuadrado.
		
	if(CSNR_imc<18.5){//Usamos if como una composición de seleccion para tomar elecciones en  base a una expresion y abrimos llave.
		cout<<"Usted tiene bajo peso"<<endl;//Si se cumple entonces presentamos por pantalla el mensaje y usamos endl para salto de linea.
	}//Cerramos la estructura
	if(CSNR_imc>=18.5 && CSNR_imc<24.9){//Usamos if como una composición de seleccion para tomar elecciones en  base a una expresion y abrimos llave.
		cout<<"Usted tiene peso normal"<<endl;//Si se cumple entonces presentamos por pantalla el mensaje y usamos endl para salto de linea.
	}//Cerramos la estructura

	if(CSNR_imc>=25 && CSNR_imc<26.9){//Usamos if como una composición de seleccion para tomar elecciones en  base a una expresion y abrimos llave.
		cout<<"Usted tiene sobrepeso grado I"<<endl;//Si se cumple entonces presentamos por pantalla el mensaje y usamos endl para salto de linea.
	}//Cerramos la estructura

	if(CSNR_imc>=27 && CSNR_imc<29.9){//Usamos if como una composición de seleccion para tomar elecciones en  base a una expresion y abrimos llave.
		cout<<"Usted tiene sobrepeso grado II"<<endl;//Si se cumple entonces presentamos por pantalla el mensaje y usamos endl para salto de linea.
	}//Cerramos la estructura

	if(CSNR_imc>=30 && CSNR_imc<34.9){//Usamos if como una composición de seleccion para tomar elecciones en  base a una expresion y abrimos llave.
		cout<<"Usted tiene obesidad tipo I"<<endl;//Si se cumple entonces presentamos por pantalla el mensaje y usamos endl para salto de linea.
	}//Cerramos la estructura

	if(CSNR_imc>=35 && CSNR_imc<39.9){//Usamos if como una composición de seleccion para tomar elecciones en  base a una expresion y abrimos llave.
		cout<<"Usted tiene obesidad tipo II"<<endl;//Si se cumple entonces presentamos por pantalla el mensaje y usamos endl para salto de linea.
	}//Cerramos la estructura

	if(CSNR_imc>=40 && CSNR_imc<49.9){//Usamos if como una composición de seleccion para tomar elecciones en  base a una expresion y abrimos llave.
		cout<<"Usted tiene obesidad tipo III (mórbida)"<<endl;//Si se cumple entonces presentamos por pantalla el mensaje y usamos endl para salto de linea.
	}//Cerramos la estructura

	if(CSNR_imc>=50){//Usamos if como una composición de seleccion para tomar elecciones en  base a una expresion y abrimos llave.
		cout<<"Usted tiene obesidad tipo IV (extrema)"<<endl;//Si se cumple entonces presentamos por pantalla el mensaje y usamos endl para salto de linea.
	}//Cerramos la estructura
	return 0;//Usamos return para terminar la ejecucion de una funcion
}//Cerramos llavea
