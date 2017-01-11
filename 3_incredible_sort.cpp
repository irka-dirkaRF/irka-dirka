#include<iostream>
using namespace std;

void incredible_sort(int n, int k)
{
int x;

int *a = new int [k+1];

for(int i=0; i<=k; i++)
a[i]=0;

for(int i=0; i<n; i++)
	{
	cin>>x;
	a[x]++;
	}

for(int i=k; i>0; i--)
while (a[i]>0) 
		{
		cout<<i<<' ';
		a[i]--;
		}
}

int main()
{
int n, k;
cin>>n>>k;
incredible_sort(n,k);
return 0;
}
