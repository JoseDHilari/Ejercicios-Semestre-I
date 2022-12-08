#include<iostream>
using namespace std;

int main(){
	int num, mov, rmv;
	cout<<"ingrese la cantidad de elementos del vector"<<endl;
	cin>>num;
	
	int V[num];
	cout<<"ingrese la cantidad de movimientos que se realizara al vector"<<endl;
	cin>>mov;
	rmv=num-mov;
	cout<<"ingrese los elementos del vector"<<endl;
		for(int i=0;i<num;i++){	
			cin>>V[i];
		}
	cout<<"el vector resultante es:"<<endl;
		for(rmv;rmv<num;rmv++){
			cout<<V[rmv]<<" ";
		}
		for(int j=0;j<=mov;j++){
			cout<<V[j]<<" ";
		}
		
	return 0;
}
