//Palindromos Coding Rush
#include<iostream>
using namespace std;
int main()
{
int x;
int cont=0;
cin>>x;
while (cont<x)
{
	int e=0;
	string A;
	cin>>A;
	for (int i=0;i<A.length();i++)
	{
		if (A[i]==A[A.length()-1-i])
		{
			e++;
		}
	}
	if (e==A.length())
	{
		cout<<"P"<<endl;
	}
	else
	{
		cout<<"NP"<<endl;
	}
	cont++;
}
}

