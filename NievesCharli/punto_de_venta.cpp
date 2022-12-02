//Autor: Charli Steven Nieves Reinado
#include <iostream> //Llamando a la libreria para lograr tener ingreso a los dispositivos de ingreso y/o salida.
using namespace std;//Es acceder al espacio del nombre donde está encerrado toda la libreria.
int main()//Aqui iniciamos la ejecucion del programa.
{//Abrimos llave.
	float CSNR_x,CSNR_s=0,CSNR_vb,CSNR_piva=12,CSNR_viva,CSNR_pdesc=10,CSNR_vdesc,CSNR_vb;//Usamos float para representar un caracter y declaramos las variables flotantes.
	int CSNR_i=0,CSNR_l;//Usamos int para representar un caracter y declaramos las variables enteras.
	cout<<"Ingrese l: ";cin>>CSNR_l;//Usamos cout para mostar por pantalla cualquier dato y cin para que el usuario ingrese datos.
	do{//Usamos do-while para repetir una instruccion hasta que la expresion especificada sea falsa.
		cout<<"Ingrese x: ";cin>>CSNR_x;////Usamos cout para mostrar por pantalla cualquier dato y cin para que el usuario ingrese datos.
		CSNR_i=CSNR_i+1;//Aumentamos el contador.
		CSNR_s=CSNR_s+CSNR_x;//Acumulamos.
	}while(CSNR_i<CSNR_l);//Esto se va a repetir mientras la expresion sea falsa.
	CSNR_vb=CSNR_s;//La variable CSNR_vb es igual a la variable CSNR_s.
	CSNR_viva=CSNR_vb*CSNR_piva/100;//La variable CSNR_viva es igual a la variable CSNR_vb por la variable CSNR_piva dividido entre 100.
	CSNR_vdesc=CSNR_vb*CSNR_pdesc/100;//La variable CSNR_vdesc es igual a la variable CSNR_vb por la variable CSNR_pdesc divido entre 100.
	CSNR_vb=CSNR_vb+CSNR_viva-CSNR_vdesc;//La variable CSNR_vn es igual a la variable CSNR_vb mas la variable CSNR_viva menos CSNR_vdesc.
	cout<<"El valor a pagar es de: "<<CSNR_vb<<endl;//Usamos cout para mostrar un mensaje y usamos endl para un salto de linea.
	return 0;//Usamos return para terminar la ejecucion de una funcion.
}//Cerramos llave.
