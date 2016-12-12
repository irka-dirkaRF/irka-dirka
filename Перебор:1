#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n, temp;
    cin >> n;
    int *a = new int [n];
    for (int i = 0; i < n; i++){
    	cin >> temp;
    	double root = sqrt(temp);
    	int simple = 0; //количество простых делителей элемента
    	int divide = 0; //количество делителей делителя элемента
    	if(temp != 1 && temp != 2 && temp != 3){
    	    for(int j = 2; j < root + 1; j++){
    		    if(temp % j == 0){
    			for(int k = 2; k < j; k++){
    				if(j % k == 0){
    					divide++;
    				}
    			}
    			if (divide == 0){
    				simple++;
    			}
    		}
    	}
    }
    if(simple <= 2 && temp != 2 && temp != 3 && temp != 1) {
    	a[i] = temp;
    } else { a[i] = -1;
    }
    }
    int multiplication = 1;
    for (int m = 0; m < n; m++){
    	if (a[m] != -1) {
    		multiplication *= a[m];
    	}
    }
    cout << multiplication;
	return 0;
}
