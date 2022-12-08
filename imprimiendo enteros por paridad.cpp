#include<iostream>
using namespace std;

int main(){
	int num,tot,par;
	
	cout<<"ingrese la cantidad de datos:"<<endl;
	cin>>num;
	if(num>=1 && num<=20){
		tot=num;
		int V[num];
		cout<<"ingrese los datos"<<endl;
		for(num;num>0;num--){
			cin>>V[num];
		}
		cout<<"ingrese 0 para los pares y 1 para los impares"<<endl;
		cin>>par;
		if(par==0){
			for(tot;tot>0;tot--){
				if(V[tot]%2==0){
				cout<<V[tot]<<" ";
				}
			}
		}
		if(par==1){
			for(num;tot>0;tot--){
				if(V[tot]%2==1){
				cout<<V[tot]<<" ";
				}
			}
		}
	}
	else{cout<<"la cantidad de datos no puede exeder los 20";
	}
	
	return 0;
}
