#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int numeros[100], fecha,cont=0;
	
	cout<<"Introduzca la cantidad de fechas a identificar: ";
	cin>>fecha;
	
	for(int i=0; i<fecha; i++){
		cout<<i+1<<". Digite la fecha: ";
		cin>>numeros[i];
	}
	cout<<endl;
	for(int i=0; i<fecha; i++){
		if(numeros[i]%4 != 0 || (numeros[i]%100==0 && numeros[i]% 400!=0)){
			
		}
		else{
			cont++;
		}
	}
	cout<<cont<<" son bisiestos"<<endl;
	
	getch();
	return 0;
}