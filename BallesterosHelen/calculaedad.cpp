//Autor: Helen Anai Ballesteros Cedeño
#include <iostream> //Llamando a la libreria para lograr tener ingreso a los dispositivos de ingreso y/o salida.
using namespace std;//Es dar paso ingreso al espacio del nombre donde está encerrado toda la libreria.
int main()//Aqui iniciamos la ejecucion del programa.
{//Abrimos llave.
	int HABC_aa,HABC_ma,HABC_da,HABC_an,HABC_mn,HABC_dn,HABC_a,HABC_m,HABC_d;//Usamos int para representar un caracter y declaramos las variables enteras.
	cout<<"Ingrese la fecha actual :";cin>>HABC_aa>>HABC_ma>>HABC_da;//Usamos cout para mostar por pantalla cualquier dato y cin para que el usuario ingrese datos.
	cout<<"Ingrese la fecha de nacimiento: ";cin>>HABC_an>>HABC_mn>>HABC_dn;//Usamos cout para mostar por pantalla cualquier dato y cin para que el usuario ingrese datos.

      	if(HABC_da>HABC_dn){//Usamos if como una composición de seleccion para tomar elecciones en  base a una expresion y abrimos llave.

		HABC_d=HABC_da-HABC_dn;//Si se cumple la expresion entonces la variable HABC_d es igual a la variable HABC_da menos HABC_dn.

	}else{//Si no se cumple la expresion cerramos llave, usamos else y abrimos llave.
		HABC_da=HABC_da+30;//La avariable HABC_da es igual a HABC_da mas 30.
		HABC_ma=HABC_ma-1;//La variable HABC_ma es igual a HABC_ma menos 1.
		HABC_d=HABC_da-HABC_dn;//La variable HABC_d es igual a HABC_da menos HABC_dn.
	}//Cerramos llave y la estructura del if.

      	if(HABC_ma>HABC_mn){//Usamos if como una composición de seleccion para tomar elecciones en  base a una expresion y abrimos llave.
	
HABC_m=HABC_ma-HABC_mn;//Si se cumple entonces HABC_m es igual a HABC_ma menos HABC_mn

	}else{//Si no se cumple la expresion cerramos llave,usamos else y abrimos llave.

		HABC_ma=HABC_ma+12;//La variable HABC_ma es igual a la variable  HABC_ma mas 12.
		HABC_aa=HABC_aa-1;//La variable HABC_aa es  igual a la variable  HABC_aa menos 1.
		HABC_m=HABC_ma-HABC_mn;//La variable HABC_m es igual a la variable HABC_ma menos la variable HABC_mn.
	}//Cerramos llave y la estructura del if.
                HABC_a=HABC_aa-HABC_an;//La variable HABC_a es igual a HABC_aa menos la variable HABC_an.

	cout<<"Usted tiene "<<HABC_a<<" años, "<<HABC_m<<" meses,"<<HABC_d<<" dias"<<endl;//Presentamos el resultado por pantalla y usamos endl para un salto de linea.
	return 0;//Usamos return para terminar la ejecucion de una funcion.
	
}//Cerramos llave.
