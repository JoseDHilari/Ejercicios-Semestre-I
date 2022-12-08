#include<iostream>
using namespace std;

int main(){
	
	int num,cop,sum,prpu=0;
	cout<<"ingrese la cantidad de datos que poseen los vectores"<<endl;
	cin>>num;
	cop=num;
	sum=num;
	int V1[num],V2[num];
	cout<<"ingrese los datos del primer vector"<<endl;
	for(num;num>0;num--){
		cin>>V1[num];
	}
	cout<<"ingrese los datos del segundo vector"<<endl;
	for(cop;cop>0;cop--){
		cin>>V2[cop];
	}
	for(sum;sum>0;sum--){
		prpu=prpu+(V1[sum]*V2[sum]);
	}
	cout<<endl<<"El producto punto es: "<<prpu;
	return 0;
}
