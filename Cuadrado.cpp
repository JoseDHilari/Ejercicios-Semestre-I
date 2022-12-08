//pb Cuadrado
#include<iostream>
using namespace std;
int main()
{
int N;
cin>>N;
int matriz[N][N];
for (int i=0;i<N;i++)
{
	for (int j=0;j<N;j++)
	{
		cin>>matriz[i][j];
	}
}
for (int j=0;j<N;j++)
{
for (int i=N-1;i>=0;i--)
    {
    	cout<<matriz[i][j]<<" ";
	}
	cout<<"\n";
}	
}

