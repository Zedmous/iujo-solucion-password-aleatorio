#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int obtenerNumRandom(int longitud);
int obtenerLongitudArrayChar(char caracteres[]);


void imprimirMensaje(string mensaje){
	cout << mensaje<< endl;
}

void imprimirString(string mensaje,string dato){
	cout << mensaje<< dato<< endl;
}

void imprimirEntero(string mensaje,int dato){
	cout << mensaje<< dato<< endl;
}

void imprimirFloat(string mensaje,float dato){
	cout << mensaje<< dato<< endl;
}

string leerString(string mensaje){
	string r="";
	cout << mensaje;//se usa
	cin >> r;
	return r;
}

float leerFloat(string mensaje){
	float r=0.0;
	cout << mensaje;
	cin >> r;
	return r;
}

int leerEntero(string mensaje){
	int r=0;
	cout << mensaje;
	cin >> r;
	return r;
}

float calcularSuma(float a,float b){
	return a+b;
}

int obtenerLongitudArrayChar(char caracteres[]){
	int contador = 0;
    while (caracteres[contador] != '\0') {
        contador++;
    }
    return contador;
}
char obtenerLetraoNumero(){
	//Definimos un arreglo con todos los caracteres posibles que se generara el paswword.
	char caracteres[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J',
                         'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T',
                         'U', 'V', 'W', 'X', 'Y', 'Z',
                         'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j',
                         'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't',
                         'u', 'v', 'w', 'x', 'y', 'z',
                         '0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
    //cout << obtenerLongitudArrayChar(caracteres)<<endl;                  
	int longitud = obtenerLongitudArrayChar(caracteres);
	int pos= obtenerNumRandom(longitud);
	cout << "Posicion: " << pos<<endl;
	char act='*';
	char ant=caracteres[pos];
	do{
		pos= obtenerNumRandom(longitud);
		act=caracteres[pos];
	}while (act==ant);
	return act;
}
int obtenerNumRandom(int longitud){
    srand(time(NULL)); // Configuramos la semilla con el tiempo actual
    int numero = rand() % (longitud-1);
    return numero;
}
int main(int argc, char** argv) {
	imprimirMensaje("----------INICIO PROGRAMA----------");
	int cantidad=leerEntero("Ingrese la cantidad de caracteres que poseera el password: ");
	string password="";
	int i=0; 
	while(i<cantidad){
		password=password + obtenerLetraoNumero();
		i++;
	}
	imprimirString("El password generado es: ",password);
    imprimirMensaje("----------FIN DEL PROGRAMA----------");
	return 0;
}

