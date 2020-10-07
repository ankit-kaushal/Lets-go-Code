#include <stdio.h>
#include <string.h>
#define N 8
#define INF 9999999
int Flow[N][N];
int visited[N];
int min(int a, int b);
int dfs(int s, int t, int minimum);

int graph[N][N] = { {0, 2, 0, 0, 0, 0, 0, 4}, 
                    {0, 0, 0, 2, 0, 0, 0, 3}, 
                    {0, 0, 0, 4, 3, 0, 0, 0}, 
                    {5, 0, 0, 0, 0, 0, 0, 0},
                    {0, 0, 0, 0, 0, 4, 0, 0},
                    {0, 0, 0, 2, 0, 0, 0, 3},
					{3, 0, 5, 0, 2, 0, 0, 0},
					{0, 0, 0, 0, 0, 0, 0, 0} }; 


int main() {
	int sent;
    memset(Flow, 0, sizeof(Flow));
    memset(visited, 0, sizeof(visited));
    int s = 6;
    int t = 7;
    int max_flow = 0;
    while (sent = dfs(s, t, INF)) {
        max_flow += sent;
        memset(visited, 0, sizeof(visited));
    }
    printf("The max flow from source to sink is %d", max_flow);
    printf("\n");
}

int min(int a, int b)
{
	if(a<b)
	{
		return a;
	}
	else
	{
		return b;
	}
}


int dfs(int s, int t, int minimum) {
	int i, sent;
    visited[s] = 1;
    if (s == t)
        return minimum;
    for (i = 0; i < N; i++) {
        int flow_capacity = graph[s][i] - Flow[s][i];
        if (!visited[i] && flow_capacity > 0) {
            if (sent = dfs (i, t, min(minimum, flow_capacity))) {
                Flow[s][i] += sent;
                Flow[i][s] -= sent;
                return sent;
            }
        }
    }
    return 0;
}

