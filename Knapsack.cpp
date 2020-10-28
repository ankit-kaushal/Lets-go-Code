#include <bits/stdc++.h>
#define N 105
#define WMAX 205

struct item{
	int profit;
	int weight;
};

using namespace std;

item arr[N];
int M[N][WMAX];

void find_solution(int i, int w){
	if (i == 0){
		return;
	}
	if (M[i][w] == M[i-1][w]){
		find_solution(i-1, w);
	}
	else{
		find_solution(i-1, w - arr[i].weight);
		printf("%d " ,i );
	}
}

int main(){
	int n, p, W;
	scanf("%d %d" ,&n ,&W);

	for (int i = 1; i <= n; i++){
		scanf("%d %d" ,&arr[i].profit ,&arr[i].weight);
	}

	for (int i = 0; i <= W; i++){
		M[0][i] = 0;
	}

	for (int i = 1; i <= n; i++){
		for (int w_ = 1; w_ <= W; w_++){
			if (arr[i].weight > w_){
				M[i][w_] = M[i-1][w_];
			}
			else{
				M[i][w_] = max(M[i-1][w_], arr[i].profit + M[i-1][w_ - arr[i].weight]);
			}
		}
	}

	printf("profit: %d\n" ,M[n][W]);
	printf("solution set: ");
	find_solution(n, W);
	printf("\n");
	return 0;
}
