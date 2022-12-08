#include<iostream>
using namespace std;

int main(){
	int tam=3;
	int M[tam][tam];
	cout<<"ingrese los elementos de la matriz 3x3"<<endl;
	for(int i=1;i<=tam;i++){
		for(int j=1;j<=tam;j++){
			cin>>M[i][j];
		}
	}
	if(M[1][1]==M[1][3]){
		if(M[3][1]==M[3][3]){
			cout<<"Tesoro encontrado";
		}
		else{cout<<"Sigue buscando";
		}
	}
	else{cout<<"Sigue buscando";
	}
	
	
	return 0;
}
