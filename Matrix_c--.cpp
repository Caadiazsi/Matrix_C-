#include <iostream>
#include <stdio.h>
#include <time.h>

using namespace std;

int main(){
	for (int N=50;N<=450;N+=50){
		int Matrix_A[N][N];
		int Matrix_B[N][N];
		int Matrix_AB[N][N];
		int Operations = N*N*((2*N)-1);
		cout<<"Size: "<< N <<endl;
		cout<<"Operations: " << Operations <<endl;
		for (int i=0;i<N;i++){
			for (int j=0;j<N;j++){
				Matrix_A[i][j] = 1;
				Matrix_B[i][j] = 2;
			}
		}
		long double execution_Time = 0;
		clock_t Init = clock();
		for (int times=0;times<10;times++){ 
			for (int i=0;i<N;i++){
				for (int j=0;j<N;j++){
					int count = 0;
					for (int k=0;k<N;k++){
						count += Matrix_A[i][k]*Matrix_B[k][j];
					}
					Matrix_AB[i][j] = count;
				}
			}
		}
		execution_Time = (long double)(clock() - Init)/CLOCKS_PER_SEC ;
		cout<<"Execution Time: "<<execution_Time/(Operations*10)<<endl;
		cout<<"----------------------------------------"<<endl;
	}	
	return 0;
}