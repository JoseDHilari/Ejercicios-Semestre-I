#include<iostream>
using namespace std;

int main(){
	int num,nbi,cot;
	int V[9];
	cout<<"ingrese el numero"<<endl;
	cin>>num;
	nbi=0;
	cout<<endl;
	if(0<=num && num<=500){	
		for(num;num>=2;num){
				V[nbi]=num%2;
				num=num/2;
				
				nbi=nbi+1;
			}
		V[nbi]=num;
		for(nbi;nbi>=0;nbi--){
			cout<<V[nbi]<<endl;
		}
	}
	else{cout<<"error, revise los datos ingresados";
	}
	return 0;
}
