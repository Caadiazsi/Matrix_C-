#include <iostream>

using namespace std;

int main(){
	int N;
	cin>>N;
	int Matrix_A[N][N];
	int Matrix_B[N][N];
	for (int i=0;i<N;i++){
		for (int j=0;j<N;j++){
			Matrix_A[i][j] = 1;
			Matrix_B[i][j] = 2;
		}
	}
	return 0;
}