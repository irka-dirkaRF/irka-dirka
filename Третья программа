#include <iostream>

using namespace std;

void build_ziggurat(int** a, int n)
{
    for (int i = 0; i < n; i++)
        for (int j = i; j < n-i; j++){
          a[i][j]=i+1;
          a[j][i]=i+1;
          a[n-j-1][n-i-1]=i+1;
          a[n-i-1][n-j-1]=i+1;
        }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            cout << a[i][j] << "    ";
        cout << endl;
    }

}
int main()
{
    int n;
cin >> n;
int** ziggurat=new int*[n];
    for(int i=0;i<n;i++)
    ziggurat[i]=new int[n];
build_ziggurat(ziggurat, n);
delete [] ziggurat;
    return 0;
}
