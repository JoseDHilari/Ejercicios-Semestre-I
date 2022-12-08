#include<iostream>
#include<conio.h>
#include<iomanip>

using namespace std;

int main(){
	int n;
	float numeros[100],calif, suma=0;
	
	cout<<"Introduzca la cantidad de calificaciones: ";
	cin>>n;
	
	for(int i=0; i<n; i++){
		cout<<i+1<<". Digite la calificacion: ";
		cin>>numeros[i];
		suma+=numeros[i];
	}
	
	calif=suma/n;
	cout<<"\nLa calificacion final es: "<<fixed<<setprecision(1)<<calif<<endl;
	
	getch();
	return 0;
}