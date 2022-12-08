//PostesDf
#include<iostream>
#include<algorithm>
using namespace std;
int postes[1000000];
int main()
{
int n, k;
cin>>k;
cin>>n;
for (int i=0;i<n;i++) cin>>postes[i];
sort(postes, postes+n);
int mini=1e8;
for (int i=0;i<=n-k;i++)
{
	int ultimo = postes[i+k-1];
	mini = min(mini, ultimo-postes[i]);
}
cout<<mini;
}

