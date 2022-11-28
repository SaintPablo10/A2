//Autor: Helen Anai Ballesteros Cedeño
#include <iostream> //Llamando a la libreria para lograr tener ingreso a los dispositivos de ingreso y/o salida.
using namespace std;//Es dar paso ingreso al espacio del nombre donde está encerrado toda la libreria.
int main()//Aqui iniciamos la ejecucion del programa.
{//Abrimos llave.
	float HABC_imc,HABC_peso,HABC_altura;//Usamos float para representar un caracter y declaramos las variables flotantes.
	cout<<"Ingrese el peso (kg): ";cin>>HABC_peso;//Usamos cout para mostar por pantalla cualquier dato y cin para que el usuario ingrese datos.
	cout<<"Ingrese la altura (metros): ";cin>>HABC_altura;//Usamos cout para mostar por pantalla cualquier dato y cin para que el usuario ingrese datos.
	HABC_imc=HABC_peso/(HABC_altura*HABC_altura);//Le damos la orden al computador de que el valor del imc es igual a el peso por altura al cuadrado.
		
	if(HABC_imc<18.5){//Usamos if como una composición de seleccion para tomar elecciones en  base a una expresion y abrimos llave.
		cout<<"Usted tiene bajo peso"<<endl;//Si se cumple entonces presentamos por pantalla el mensaje y usamos endl para salto de linea.
	}//Cerramos la estructura
	if(HABC_imc>=18.5 && HABC_imc<24.9){//Usamos if como una composición de seleccion para tomar elecciones en  base a una expresion y abrimos llave.
		cout<<"Usted tiene peso normal"<<endl;//Si se cumple entonces presentamos por pantalla el mensaje y usamos endl para salto de linea.
	}//Cerramos la estructura

	if(HABC_imc>=25 && HABC_imc<26.9){//Usamos if como una composición de seleccion para tomar elecciones en  base a una expresion y abrimos llave.
		cout<<"Usted tiene sobrepeso grado I"<<endl;//Si se cumple entonces presentamos por pantalla el mensaje y usamos endl para salto de linea.
	}//Cerramos la estructura

	if(HABC_imc>=27 && HABC_imc<29.9){//Usamos if como una composición de seleccion para tomar elecciones en  base a una expresion y abrimos llave.
		cout<<"Usted tiene sobrepeso grado II"<<endl;//Si se cumple entonces presentamos por pantalla el mensaje y usamos endl para salto de linea.
	}//Cerramos la estructura

	if(HABC_imc>=30 && HABC_imc<34.9){//Usamos if como una composición de seleccion para tomar elecciones en  base a una expresion y abrimos llave.
		cout<<"Usted tiene obesidad tipo I"<<endl;//Si se cumple entonces presentamos por pantalla el mensaje y usamos endl para salto de linea.
	}//Cerramos la estructura

	if(HABC_imc>=35 && HABC_imc<39.9){//Usamos if como una composición de seleccion para tomar elecciones en  base a una expresion y abrimos llave.
		cout<<"Usted tiene obesidad tipo II"<<endl;//Si se cumple entonces presentamos por pantalla el mensaje y usamos endl para salto de linea.
	}//Cerramos la estructura

	if(HABC_imc>=40 && HABC_imc<49.9){//Usamos if como una composición de seleccion para tomar elecciones en  base a una expresion y abrimos llave.
		cout<<"Usted tiene obesidad tipo III (mórbida)"<<endl;//Si se cumple entonces presentamos por pantalla el mensaje y usamos endl para salto de linea.
	}//Cerramos la estructura

	if(HABC_imc>=50){//Usamos if como una composición de seleccion para tomar elecciones en  base a una expresion y abrimos llave.
		cout<<"Usted tiene obesidad tipo IV (extrema)"<<endl;//Si se cumple entonces presentamos por pantalla el mensaje y usamos endl para salto de linea.
	}//Cerramos la estructura
	return 0;//Usamos return para terminar la ejecucion de una funcion
}//Cerramos llavea
