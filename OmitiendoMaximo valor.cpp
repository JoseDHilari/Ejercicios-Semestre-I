#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int vector[100], N, mayor=0;
	
	cout<<"Cuantos valores tendra su vector: ";
	cin>>N;
	
	for(int i=0; i<N; i++){
		cout<<"Ingrese dato: ";
		cin>>vector[i];
	}
	for(int i=0; i<N; i++){
		if(vector[i]>mayor){
			mayor=vector[i];
		}
	}
	cout<<"-----------------"<<endl;
	for(int i=0; i<N; i++){
		if(vector[i]!=mayor){
			cout<<vector[i]<<" ";
		}
		else{
			cout<<" 0 ";break;
		}
	}
	
	getch();
	return 0;
}