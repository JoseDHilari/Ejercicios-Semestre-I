#include<iostream>
using namespace std;
int main(){
	int fil, col;
	cout<<"ingrese la dimensiones de la matriz, la mcantidad de columnas debe ser par"<<endl;
	cin>>fil>>col;
	int Mat[fil][col];
	
	if(col%2==0){
		cout<<"ingrese los datos de la matriz"<<endl;
		for(int i=1;i<=fil;i++){
			for(int j=1;j<=col;j++){
				cin>>Mat[i][j];
			}
		}
	
		int cont=0, mcol, tod;
		mcol=col/2;
		tod=mcol*fil;
		for(int i=1;i<=fil;i++){
			for(int j=1;j<=mcol;j++){
				
				if(Mat[i][j]==Mat[i][mcol+j]){
				cont=cont+1;
				}
			}
		}
	
		if(tod==cont){cout<<endl<<"1";
		}
		else{cout<<endl<<"0";
		}
	}
	else{cout<<"revise los datos ingresados";
	}
	
	return 0;
}
