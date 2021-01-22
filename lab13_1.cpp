#include <iostream>
using namespace std;


template <typename T>
void insertionSort(T d[],int N){
	for(int i=1;i<N;i++)
	{
		int j=i;
		while(d[j]>d[j-1] and j>0)
		{
			T temp=d[j];
			d[j]=d[j-1];
			d[j-1]=temp;
			j--;
		}
		cout<<"Pass "<<i<<":";
		for(int i2=0;i2<N;i2++)
		{
			cout<<d[i2]<<" ";
		}
		cout<<endl;
	}
}

int main(){
	int a[10] = {10,9,8,7,6,5,4,3,2,1};
	cout << "Input Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";
	cout << "\n\n";
	
	insertionSort(a,10);
	
	cout << "\nSorted Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";	
}
