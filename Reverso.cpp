//Reverso
#include<iostream>
using namespace std;
int main()
{
int a;
cin>>a;
int x[a];
for (int i=0;i<a;i++)
{
	cin>>x[i];
}
for (int i=1;a-i>=0;i++)
{
	cout<<x[a-i]<<" ";
}
}

