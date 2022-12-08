#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int numeros[100], n, q;
	cout<<"Introduzca la cantidad de numeros: ";
	cin>>n;
	
	for(int i=0; i<n; i++){
		cout<<"Digite el numero: ";
		cin>>numeros[i];
	}
	cout<<"Cuantos numeros no quiere que salga: ";
	cin>>q;
	for(int i=0; i<n; i++){
		if(i<n-q){
			cout<<numeros[i]<<" ";
		}
	}
	
	getch();
	return 0;
}