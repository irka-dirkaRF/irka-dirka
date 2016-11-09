#include <iostream>

using namespace std;

int strange_sum(int* a, int n)
{
    int summ = 0;
    if (n%2==0){
        int b[n/2];
        int c[n/2];
        for (int i = 0; i < n/2; i++){
        b[i]=a[i];
        c[i]=a[i+n/2];
        }
        summ = strange_sum( b, n/2 ) + strange_sum ( c, n/2 );
    }
    else {
        if ( n != 1 ){
        int b [(n-1)/2];
        int c [(n-1)/2];
        for ( int i = 0; i < (n-1)/2; i++){
            b[i] = a[i];
            c[i] = a[i + (n-1)/2];
        }
        summ = strange_sum( b, (n-1)/2) + strange_sum( c, (n-1)/2) + a[n-1];
        }
        else{
            summ+=a[n-1];
        }
        }
        return summ;
    }
int main()
{
    int n;
    cin>>n;
    int* Array = new int [n];
    for ( int i = 0; i < n ; i++)
        cin>>Array[i];
    cout<< strange_sum( Array, n);
    return 0;
}
