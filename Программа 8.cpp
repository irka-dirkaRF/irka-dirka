#include <iostream>
#include <cmath>

using namespace std;

void Migraine_minimization(int n) {
	int maxkvadr, kol=0;
	while (n>0)
	 {
		maxkvadr=(int)sqrt(n);
		n=n-maxkvadr*maxkvadr;
		kol=kol+1;
	}
	cout<<4*kol;
}

int main() {
	int n;
	cin>>n;
	Migraine_minimization(n);
	return 0;
}
