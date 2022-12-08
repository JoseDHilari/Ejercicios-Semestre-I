#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int numeros[100], num, M;
	
	cout<<"Introduzca la cantidad de numeros que tendra el arreglo: "; cin>>num;
	
	if(num>=1 && num<=100){
		
		for(int i=0; i<num; i++){
			cout<<"Digite los numeros: ";
			cin>>numeros[i];
		}
		
		cout<<"------------------------"<<endl;
		cout<<"Digite el numero de multiplos: "; cin>>M;
		
		for(int i=0; i<num; i++){
			if(numeros[i]%M==0){
				cout<<numeros[i];
			}
			else{
				cout<<" X ";
			}
		}
	}
	else{
		cout<<"Error vuelva a intentarlo :)";
	}
	
	getch();
	return 0;
}