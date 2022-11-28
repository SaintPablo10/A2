//Autor: Helen Anai Ballesteros Cedeño
#include <iostream> //Llamando a la libreria para poder tener acceso a los dispositivos de entrada y/o salida
using namespace std;//Es dar paso al acceso del  espacio del nombre donde se encuentra encerrado toda la libreria.
int main()//Aqui iniciamos la ejecucion del programa.
{//Abrimos llave.
	float HABC_x,HABC_s=0,HABC_vb,HABC_piva=12,HABC_viva,HABC_pdesc=10,HABC_vdesc,HABC_vn;//Usamos float para representar un caracter y declaramos las variables flotantes.
	int HABC_i=0,HABC_l;//Usamos int para representar un caracter y declaramos las variables enteras.
	cout<<"Ingrese l: ";cin>>HABC_l;//Usamos cout para mostar por pantalla cualquier dato y cin para que el usuario ingrese datos.
	do{//Usamos do-while para repetir una instruccion hasta que la expresion especificada sea falsa.
		cout<<"Ingrese x: ";cin>>HABC_x;////Usamos cout para mostrar por pantalla cualquier dato y cin para que el usuario ingrese datos.
		HABC_i=HABC_i+1;//Aumentamos el contador.
		HABC_s=HABC_s+HABC_x;//Acumulamos.
	}while(HABC_i<HABC_l);//Esto se va a repetir mientras la expresion sea falsa.
	HABC_vb=HABC_s;//La variable HABC_vb es igual a la variable HABC_s.
	HABC_viva=HABC_vb*HABC_piva/100;//La variable HABC_viva es igual a la variable HABC_vb por la variable HABC_piva dividido entre 100.
	HABC_vdesc=HABC_vb*HABC_pdesc/100;//La variable HABC_vdesc es igual a la variable HABC_vb por la variable HABC_pdesc divido entre 100.
	HABC_vn=HABC_vb+HABC_viva-HABC_vdesc;//La variable HABC_vn es igual a la variable HABC_vb mas la variable HABC_viva menos HABC_vdesc.
	cout<<"El valor a pagar es de: "<<HABC_vn<<endl;//Usamos cout para mostrar un mensaje y usamos endl para un salto de linea.
	return 0;//Usamos return para terminar la ejecucion de una funcion.
}//Cerramos llave.
