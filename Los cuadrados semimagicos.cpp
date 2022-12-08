#include<iostream>
using namespace std;

int main(){
	int tam, ope, pun=0, tot=0, cont=1, cop;
	cout<<"ingrese el tamaño de la matriz cuadrada"<<endl;
	cin>>tam;
	
	int M[tam][tam];
	ope=(tam+1)*2;
	cout<<"ingrese los elementos de la matriz"<<endl;
	for(int i=1;i<=tam;i++){
		for(int j=1;j<=tam;j++){
			cin>>M[i][j];
		}
	}
	cop=M[3][3];
	int V[ope];
	M[3][3]=cop;
	//primera diagonal
	for(int a=1; a<=tam;a++){
		tot=tot+M[a][a];
	}
	V[cont]=tot;
	
	cont=cont+1;
	V[cont]=0;
	//segunda diagonal
	for(int b=1;b<=tam;b++){
		V[cont]=V[cont]+M[b][tam-b+1];
	}
	cont=cont+1;
	V[cont]=0;
	//filas
	for(int c=1;c<=tam;c++){
		for(int d=1;d<=tam;d++){
			V[cont]=V[cont]+M[d][c];
		}
		cont=cont+1;
		V[cont]=0;
	}
	//columnas
	for(int e=1;e<=tam;e++){
		for(int f=1;f<=tam;f++){
			V[cont]=V[cont]+M[e][f];
		}
		cont=cont+1;
		V[cont]=0;
	}
	//comprobacion
	for(int g=1;g<cont;g++){
		if(tot==V[g]){
			pun=pun+1;
		}	
	}
	for(int i=1;i<=ope;i++){
		cout<<V[i]<<endl;
	}
	
	
		if(pun==ope){
		cout<<endl<<"1";
	}
	else{
		cout<<endl<<"0";
	}
	
	return 0;

}

