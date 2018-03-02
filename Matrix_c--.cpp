#include <iostream>
#include <stdio.h>
#include <time.h>

using namespace std;

int main(){
	int N;
	cin>>N;
	int Matrix_A[N][N];
	int Matrix_B[N][N];
	int Matrix_AB[N][N];
	int Operations = N*N*((2*N)-1);
	cout<< Operations <<endl;
	for (int i=0;i<N;i++){
		for (int j=0;j<N;j++){
			Matrix_A[i][j] = 1;
			Matrix_B[i][j] = 2;
		}
	}
	clock_t Init = clock();
	for (int i=0;i<N;i++){
		for (int j=0;j<N;j++){
			int count = 0;
			for (int k=0;k<N;k++){
				count += Matrix_A[i][k]*Matrix_B[k][j];
			}
			Matrix_AB[i][j] = count;
		}
	}
	double execution_Time = (double)(clock() - Init)/CLOCKS_PER_SEC ;
	cout<<execution_Time/Operations<<endl;
	return 0;
}