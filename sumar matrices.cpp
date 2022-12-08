#include<iostream>
using namespace std;

int main(){
	int tam;

	cout<<"ingrese el tamaño de la matriz cuadrada"<<endl;
	cin>>tam;
	int M1[tam][tam], M2[tam][tam], M3[tam][tam];
	
	cout<<"ingrese los valores de la primer matriz"<<endl;
		for(int i=1;i<=tam;i++){
			for(int j=1;j<=tam;j++){
				cin>>M1[i][j];
			}
		}
	cout<<"ingrese los valores de la segunda matriz"<<endl;
		for(int i=1;i<=tam;i++){
			for(int j=1;j<=tam;j++){
				cin>>M2[i][j];
			}
		}
	cout<<"la matriz resultante es: "<<endl;
	
	for(int i=1;i<=tam;i++){
			for(int j=1;j<=tam;j++){
				M3[i][j]=M1[i][j]+M2[i][j];
				cout<<M3[i][j]<<" ";
			}
		cout<<endl;
	}
	
	return 0;
}
