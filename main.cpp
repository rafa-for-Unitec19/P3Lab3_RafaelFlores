#include <iostream>
#include "Triangulo.hpp"
#include "Circulo.hpp"
#include "Piramide.hpp"
#include "Esfera.hpp"

using  namespace std;

const string label[] = {"Lado 1", "Lado 2", "Lado 3", "Altura", "Radio"};

int getNumber(){
	int n;
	while(true){
		cin.get();
		cout << "Ingrese el numero para buscar su Numero Triangular previo" << endl;
		cin >> n;
		if(n > 1){
			break;
		}else{
			cout << "El numero es Invalido!!!\nDebe ser mayor que 1" << endl; 
		}
	}
	return n;
}

float getNumbers(int key){
	float n;
	while(true){
		cin.get();
		cout << "Ingrese el/la "<< label[key] << " del objeto" << endl;
		cin >> n;
		if(n > 0){
			return n;
		}else{
			cout << "El numero es Invalido!!!\nDebe ser un numero positivo" << endl; 
		}
	}
}

void crearTriangulo(){
	float l1 = getNumbers(0);
	float l2 = getNumbers(1);
	float l3 = getNumbers(2);
	Triangulo temp (l1, l2, l3);
	cout << "El Area del Traingulo es: " << temp.getVarArea() << endl;
	cout << "La altura del Triangulo es: " << temp.getAltura() << endl;
}

void crearCirculo(){
        float r = getNumbers(4);
        Circulo temp (r);
	cout << "EL Area del Circulo es: " << temp.getArea() << endl;
        cout << "La Circunferencia del circulo es: " << temp.getCircunferencia() << endl;
        cout << "El Diametro del Circulo es: " << temp.getDiametro() << endl;
}


void crearPiramide(){
	cout << "Debe crear un triangulo: " << endl;
	float l1 = getNumbers(0);
	float l2 = getNumbers(1);
	float l3 = getNumbers(2);
        float alt = getNumbers(3);
        Piramide temp (Triangulo(l1, l2, l3), alt);
	cout << "EL Volumen de la Piramide es: " << temp.getVolumen() << endl;
}

void crearEsfera(){
	cout << "Debe crear un circulo: " << endl;
	float r = getNumbers(4);
	Circulo cTemp(r);
	Esfera temp (cTemp);
	cout << "El Volumen de la Esfera es: " << temp.getVolumen() << endl;
}

int sucesion(int n){
	return n == 1 ? 1 : n + sucesion(n-1);
}

int piramidal(int m){
	int prev, act = 0, cont = 1;
	while (act < m){
		prev = act;
		act = sucesion(cont);
		if (act == m){
			return act;
		}
		cont++;
	}
	return prev;
}

int menu(){
	int op;
	cout << "Ingrese la opción que desee:"
		<< "\n\t1. Identificar Numero Triangular Previo"
		<< "\n\t2. Calcular el Area de un Triangulo"
		<< "\n\t3. Calcular el area de un CIrculo"
		<< "\n\t4. Calcular volumen de Piramide"
		<< "\n\t5. Calcular volumen de Cilindro" 
		<< "\n\t6. Salir"<< endl;
	cin >> op;
	return op;
}

void selector(){
	bool flag = false;
	while(!flag){
		switch(menu()){
			case 1:
				cout << piramidal(getNumber()) << " <- Es el numero Triagular previo al ingresado" << endl;
				break;
			case 2:
				crearTriangulo();
				break;
			case 3:
				crearCirculo();
				break;
			case 4:
				crearPiramide();
				break;
			case 5:
				crearEsfera();
				break;
			case 6:
				flag = true;
				break;
			default:
				cout << "La opcion es invalida!!!!" << endl;
		}
		cin.get();
	}
}

int main(){
	selector();
	return 0;
}
