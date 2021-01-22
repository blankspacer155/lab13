#include<iostream>
using namespace std;

const int N = 5;

void inputMatrix(double [][N]);

void findLocalMax(const double [][N], bool [][N]);

void showMatrix(const bool [][N]);

int main(){
	double A[N][N]; 
	bool B[N][N]; 
	cout << "Input the matrix.....\n";
	inputMatrix(A);
	findLocalMax(A,B);
	cout << "Result is \n";
	showMatrix(B);
	return 0;
}

void showMatrix(const bool ans[][N])
{
	for(int i=0;i<N;i++)
	{
		for(int j=0;j<N;j++)
		{
			cout<<ans[i][j]<<" ";
		}
		cout<<endl;
	}

}

void inputMatrix(double A[][N])
{
	for(int i=0;i<N;i++)
	{
		cout<<"Row "<<i+1<<": ";
		for(int j=0;j<N;j++)
		{
			double input;
			cin>>input;
			A[i][j]=input;
		}
	}
}

void findLocalMax(const double A[][N], bool ans[][N])
{
	for(int i=0;i<N;i++)
	{
		for(int j=0;j<N;j++)
		{
			if(!(i==0 or i==N-1 or j==0 or j==N-1) and (A[i][j]>=A[i-1][j] and A[i][j]>=A[i+1][j] and A[i][j]>=A[i][j-1] and A[i][j]>=A[i][j+1]))
			{
				ans[i][j]=true;
				
			}
			else 
			{
				ans[i][j]=false;
			}
		
		}
	}
}