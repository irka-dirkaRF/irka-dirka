#include<iostream>
#include<algorithm>
using namespace std;

void thriceQSort(int *a, int *b, float*c, int *d, int left, int right)		//�������, ����������� ������ �������� ��������, 
{																	//� ����� �������� ����� �� ������������
int i = left, j = right;											//� �������� ������� � ��������� �����
    int tmp;
    int mid = c[(left + right) / 2];
 
    while (i <= j) {
        while (c[i] > mid)
        i++;
        while (c[j] < mid)
        j--;
        if (i <= j) {
            swap(a[i],a[j]);
			swap(b[i],b[j]);
 			swap(c[i],c[j]);
			swap(d[i],d[j]);
            i++;
            j--;
        }
    };
 
    if (left < j)
    thriceQSort(a, b, c, d, left, j);
    if (i < right)
    thriceQSort(a, b, c, d, i, right);
 
}

void Continious_knapsack(int W, int n)
{
double sum = 0.0;			//�����
int *Wi = new int [n];	//������ ������ �����
int *Ci = new int [n];	//������ ��������� �����
float *Cu = new float [n];	//������ �������� ��������� �����
int *abc = new int [n];		//������, ������������ ������ ���������, ������ ��� ������� ������ ��������
float *abc1 = new float [n];	//��� ���� �������� ������ ����������� ���������� ����� � �������

for(int i=0; i<n; i++)
	{
	abc[i] = i;
	abc1[i] = 0.0;
	cin>>Wi[i];
	cin>>Ci[i];
	Cu[i] = Ci[i] / Wi[i];
	}

thriceQSort(Wi, Ci, Cu, abc, 0, n-1);

for(int i=0; i<n; i++)						//������ ��������
	{
	if(W >= Wi[i])
		{
		sum += Ci[i];
		abc1[abc[i]] = 1.0; 
		W -= Wi[i];																												
		}
	else
		{
		abc1[abc[i]] = (float) W / Wi[i];
		sum += (float)W / Wi[i] * Ci[i];
		for(int i=0; i<n; i++)
		cout<<abc1[i]<<' ';
		cout<<endl;
		cout<<sum;
		return ;
		}
	}
		

}

int main()
{
int W, n;
cin>>W>>n;
Continious_knapsack(W, n);
return 0;
}
