#include <iostream>
#include <string>
using namespace std;

/*
Funcion que no retorna ningun dato
Tiene 1 parametro:
	Parametro 1: es tipo string de variable llamada mensaje.
su funcion es imprimir un mensaje.
*/
void imprimirMensaje(string mensaje){
	cout << mensaje<< endl;
}

/*
Funcion que no retorna ningun dato, 
Tiene 2 parametros:
	Parametro 1: es tipo string de variable llamada mensaje.
	Parametro 2: es tipo string de variable llamada dato.
su funcion es imprimir una variable de tipo string.
*/
void imprimirString(string mensaje,string dato){
	cout << mensaje<< dato<< endl;
}

/*
Funcion que no retorna ningun dato, 
Tiene 2 parametros:
	Parametro 1: es tipo string de variable llamada mensaje.
	Parametro 2: es tipo int de variable llamada dato.
su funcion es imprimir una variable de tipo int.
*/
void imprimirEntero(string mensaje,int dato){
	cout << mensaje<< dato<< endl;
}

/*
Funcion que no retorna ningun dato, 
Tiene 2 parametros:
	Parametro 1: es tipo string de variable llamada mensaje.
	Parametro 2: es tipo int de variable llamada dato.
su funcion es imprimir una variable de tipo float.
*/
void imprimirFloat(string mensaje,float dato){
	cout << mensaje<< dato<< endl;
}

/*
Funcion que retorna un dato de tipo string, 
Tiene 1 parametro:
	Parametro 1: es tipo string de variable llamada mensaje.
su funcion es leer una variable de tipo string.
*/
string leerString(string mensaje){
	string r="";
	cout << mensaje;//se usa
	cin >> r;
	return r;
}

/*
Funcion que retorna un dato de tipo float, 
Tiene 1 parametro:
	Parametro 1: es tipo string de variable llamada mensaje.
su funcion es leer una variable de tipo float.
*/
float leerFloat(string mensaje){
	float r=0.0;
	cout << mensaje;
	cin >> r;
	return r;
}

/*
Funcion que retorna un dato de tipo int, 
Tiene 1 parametro:
	Parametro 1: es tipo string de variable llamada mensaje.
su funcion es leer una variable de tipo int.
*/
int leerEntero(string mensaje){
	int r=0;
	cout << mensaje;
	cin >> r;
	return r;
}


/*
Funcion que retorna un dato de tipo float, 
Tiene 2 parametros:
	Parametro 1: es tipo float de variable llamada a.
	Parametro 2: es tipo float de variable llamada b.
su funcion es calcular la suma de dos numeros.
*/
float calcularSuma(float a,float b){
	return a+b;
}

int main(int argc, char** argv) {

	imprimirMensaje("----------INICIANDO PROGRAMA----------");
	imprimirMensaje("--------------------------------------");
	float numero1=0.0;
	float numero2=0.0;
	imprimirMensaje("----------PASO 1----------");
	imprimirMensaje("----------LECTURA DE DATOS----------");
	numero1=leerEntero("Ingrese el numero 1: ")
	numero2=leerEntero("Ingrese el numero 2: ")
	imprimirMensaje("----------PASO 2----------");
	imprimirMensaje("----------PROCESAR DATOS----------");
	float suma=calcularSuma(numero1,numero2)
	imprimirMensaje("----------PASO 3----------");
	imprimirMensaje("----------SALIDAS DE DATOS----------");
	imprimirFloat("La suma es: ",suma)



	imprimirMensaje("----------FIN DEL PROGRAMA----------");
	imprimirMensaje("--------------------------------------");
	return 0;
}

