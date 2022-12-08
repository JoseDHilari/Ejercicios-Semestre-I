#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int arreglo[100], num, mayor=0, menor;
	
	cout<<"Introduzca la cantidad de numeros que contendra el vector: ";
	cin>>num;
	
	for(int i=0; i<num; i++){
		cout<<"Digite: ";
		cin>>arreglo[i];
	}
	
	for(int i=0; i<num; i++){
		if(arreglo[i] > mayor){
			mayor = arreglo[i];
		}
	}
	menor=mayor;
	for(int i=0; i<num; i++){
		if(arreglo[i]<menor){
			menor = arreglo[i];
		}
		
	}
	cout<<"-------------------\n";
	cout<<"El menor es: "<<menor<<endl;
	cout<<"El mayor es: "<<mayor;
	
	getch();
	return 0;
}