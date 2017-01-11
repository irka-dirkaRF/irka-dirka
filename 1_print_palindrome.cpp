#include<iostream>
using namespace std;

/*void next_palindrom(int *a)
{

}*/

int odinOdinOdin(int n)            //только для чётных
{
n/=2;
int x = 1;
for(int i=1; i<n; i++)
	{	
	x *= 10;
	x++;
	}
return x;
}

void reversePrint(int k)
{
while(k>0)
	{
	cout<<k % 10;
	k/=10;
	}
}

int sumOfDigits(int k)
{
int sum = 0;
while(k > 0)
	{
	sum += k % 10;
	k /= 10;
	}
return sum;
}

void print_palindrom(int n)
{
if (n % 2 == 0)
{
	int r = odinOdinOdin(n);
	for(int i = r; i <= r * 9; i++)
		{
		if (sumOfDigits(i) % 9 == 0)
			{
			cout<<i; 
			reversePrint(i); 
			cout<<endl;
			}
		} 
} else
if (n % 2 != 0)
	{
	n--;
	int r = odinOdinOdin(n);
	for(int i = r; i <= r * 9; i++)
		{
		cout<<i;
		cout<<9-(sumOfDigits(i)*2 % 9);
		reversePrint(i); 
		cout<<endl;
		} 
	}
return ;
}

int main()
{
int n;
cin>>n;
print_palindrom(n);
return 0;
}
