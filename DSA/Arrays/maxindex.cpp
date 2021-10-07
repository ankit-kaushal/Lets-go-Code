#include <bits/stdc++.h>
using namespace std;

/* For a given array arr[],
returns the maximum j – i such that
arr[j] > arr[i] */
int maxIndexDiff(int arr[], int n)
{

		int rightMax[n];
		rightMax[n-1]= arr[n-1];
		for(int i = n-2; i>=0; i--)
			rightMax[i] = max(rightMax[i+1] , arr[i]);
		
		//rightMax[i] = max{ arr[i...(n-1] }


		
		int maxDist = INT_MIN;
		int i = 0, j = 0;
		while(i<n && j<n)
		{
			if(rightMax[j] >= arr[i])
			{
				maxDist = max( maxDist, j-i );
				j++;
			}
			else // if(rightMax[j] < leftMin[i])
				i++;
		}
		
		return maxDist;
		
		
}

// Driver Code
int main()
{
	int arr[] = { 34,8,10,3,2,80,30,33,1};
	int n = sizeof(arr) / sizeof(arr[0]);
	int maxDiff = maxIndexDiff(arr, n);
	cout << maxDiff;
	return 0;
}

