//Autor: Charli Steven Nieves Reinado
#include <iostream> //Llamando a la libreria para lograr tener ingreso a los dispositivos de ingreso y/o salida.
using namespace std;//Es acceder al espacio del nombre donde está encerrado toda la libreria.
int main()//Aqui iniciamos la ejecucion del programa.
{//Abrimos llave.
	int CSNR_aa,CSNR_ma,CSNR_da,CSNR_an,CSNR_mn,CSNR_dn,CSNR_a,CSNR_m,CSNR_d;//Usamos int para representar un caracter y declaramos las variables enteras.
	cout<<"Ingrese la fecha actual :";cin>>CSNR_aa>>CSNR_ma>>CSNR_da;//Usamos cout para mostar por pantalla cualquier dato y cin para que el usuario ingrese datos.
	cout<<"Ingrese la fecha de nacimiento: ";cin>>CSNR_an>>CSNR_mn>>CSNR_dn;//Usamos cout para mostar por pantalla cualquier dato y cin para que el usuario ingrese datos.

      	if(CSNR_da>CSNR_dn){//Usamos if como una composición de seleccion para tomar elecciones en  base a una expresion y abrimos llave.

		CSNR_d=CSNR_da-CSNR_dn;//Si se cumple la expresion entonces la variable CSNR_d es igual a la variable CSNR_da menos CSNR_dn.

	}else{//Si no se cumple la expresion cerramos llave, usamos else y abrimos llave.
		CSNR_da=CSNR_da+30;//La avariable CSNR_da es igual a CSNR_da mas 30.
		CSNR_ma=CSNR_ma-1;//La variable CSNR_ma es igual a CSNR_ma menos 1.
		CSNR_d=CSNR_da-CSNR_dn;//La variable CSNR_d es igual a CSNR_da menos CSNR_dn.
	}//Cerramos llave y la estructura del if.

      	if(CSNR_ma>CSNR_mn){//Usamos if como una composición de seleccion para tomar elecciones en  base a una expresion y abrimos llave.
	
CSNR_m=CSNR_ma-CSNR_mn;//Si se cumple entonces CSNR_m es igual a CSNR_ma menos CSNR_mn

	}else{//Si no se cumple la expresion cerramos llave,usamos else y abrimos llave.

		CSNR_ma=CSNR_ma+12;//La variable CSNR_ma es igual a la variable  CSNR_ma mas 12.
		CSNR_aa=CSNR_aa-1;//La variable CSNR_aa es  igual a la variable  CSNR_aa menos 1.
		CSNR_m=CSNR_ma-CSNR_mn;//La variable CSNR_m es igual a la variable CSNR_ma menos la variable CSNR_mn.
	}//Cerramos llave y la estructura del if.
                CSNR_a=CSNR_aa-CSNR_an;//La variable CSNR_a es igual a HABC_aa menos la variable CSNR_an.

	cout<<"Usted tiene "<<CSNR_a<<" años, "<<CSNR_m<<" meses,"<<CSNR_d<<" dias"<<endl;//Presentamos el resultado por pantalla y usamos endl para un salto de linea.
	return 0;//Usamos return para terminar la ejecucion de una funcion.
	
}//Cerramos llave.
