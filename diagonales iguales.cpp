#include<iostream>
using namespace std;

int main(){
	int tam,pun=0;
	cout<<"ingrese el tamaño de la matriz cuadrada"<<endl;
	cin>>tam;
	
	int M[tam][tam];
	cout<<"ingrese los elementos de la matriz"<<endl;
	for(int i=1;i<=tam;i++){
		for(int j=1;j<=tam;j++){
			cin>>M[i][j];
		}
	}
	for(int c=0;c<tam;c++){
		if(M[c+1][c+1]==M[c+1][tam-c]){
			pun=pun+1;
		}
	}
	if(pun==tam){
		cout<<endl<<"Iguales";
		}
	else{cout<<"No iguales";
		}
		
	return 0;
}
