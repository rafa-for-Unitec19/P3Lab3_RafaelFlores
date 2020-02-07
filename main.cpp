#include <iostream>

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

float getNumbers(float key){
	int lbl = (int)key, n;
	while(true){
		cin.get();
		cout << "Ingrese el/la "<< label[lbl] << " del objeto" << endl;
		cin >> n;
		if(n > 0){
			return n;
		}else{
			cout << "El numero es Invalido!!!\nDebe ser un numero positivo" << endl; 
		}
	}
}

int sucesion(int n){
	if (n == 1){
		return 1;
	}else{
		return n + sucesion(n-1);
	}
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
		<< "\n\t5. Calcular volumen de Circulo" << endl;
	cin >> op;
	return op;
}

int selector(){
	int n;
	while(true){
		switch(menu()){
			case 1:
				//n = getNumber();
				cout << piramidal(getNumber()) << " <- Es el numero Triagular previo al ingresado" << endl;
				break;
			case 2:
				break;
			case 3:
				break;
			case 4:
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
