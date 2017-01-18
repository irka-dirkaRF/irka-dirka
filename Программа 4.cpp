#include <iostream>
using namespace std;

void  outer_points(int n, int m){
	int *start = new int[n];
	int *konec = new int[n];
	for (int i=0; i<n; i++)
	   {
		  cin>>start[i]>>konec[i];
	   }
	for (int i=0; i<m; i++)
	  {
		int tochka, kolvo=0;
		cin>>tochka;
		for (int k=0; k<n; k++)
		  {
			if (tochka<=konec[k] && tochka>=start[k])
			  {
				kolvo=kolvo+1;
			  }
		  }
		cout<<n-kolvo<<" ";
	  }
}

int main(){
	int n, m;
	cin>>n>>m;
	outer_points(n, m);
	return 0;
}
