#include<stdio.h>
#include<stdlib.h>
#include <time.h> 

void quicksort(int a[], int beg, int end);
int partition(int a[], int beg, int end);
void print(int a[], int size);

/*---------------------------------------------------------------------------------*/

int main()
{
	clock_t t; 
    t = clock(); 
    /////////////////////////////////////////////////////////
    
    printf("\nQuick Sort with Random element as pivot\n");
    int x, item;
	int i, n, size, range;
	
Select:	
	printf("\nSelect Size\t:\n");
	printf("\n1. 100\n");
	printf("2. 1000\n");
	printf("3. 5000\n");
	printf("4. 10000\n");
	printf("5. 50000\n");
	scanf("%d", &x);
	switch(x)
	{
		case 1:
			size=100;
		break;
		case 2:
			size=1000;
		break;
		case 3:
			size=5000;
		break;
		case 4:
			size=10000;
		break;
		case 5:
			size=50000;
		break;
		default:
			printf("\nEnter correct option\n");
			goto Select;
    }
    
	int a[size];
	printf("\nEnter Range\n");
	scanf("%d",&range);
	for(i = 0; i<size; i++)
		a[i]=rand()%range;
	print(a, size);
	quicksort(a,0,size-1);
	printf("\n\nThe array sorted (QUICK) in ascending order\n\n");
	
	print(a, size);
    
    
    /////////////////////////////////////////////////////////////
    t = clock() - t; 
    double time_taken = ((double)t)/CLOCKS_PER_SEC; 
  
    printf("\n\nThis Program took %f seconds to execute \n", time_taken);
	
}

/*---------------------------------------------------------------------------------*/

void print(int a[], int size)
{
	int i;
	for (i = 0; i < size; i++)
         printf("%d\t", a[i]);
    
}

/*---------------------------------------------------------------------------------*/

int partition(int a[], int beg, int end)
{
	int pivotIndex = beg + rand()%(end - beg + 1);
    int pivot, temp;
    int i = beg - 1;
    int j;
    pivot = a[pivotIndex];
    temp=a[pivotIndex];
	a[pivotIndex]=a[end];
	a[end]=temp;
    for (j = beg; j < end; j++)
    {
        if (a[j] < pivot)
        {
            i++;
            temp=a[i];
			a[i]=a[j];
			a[j]=temp;
        }
 
    }
    temp=a[i+1];
	a[i+1]=a[end];
	a[end]=temp;
    return i + 1;
}

/*---------------------------------------------------------------------------------*/

void quicksort(int a[], int beg, int end)
{
	int loc;
	if(beg<end)
	{
		loc=partition(a, beg, end);
		quicksort(a, beg, loc-1);
		quicksort(a, loc+1, end);
	}
}

/*---------------------------------------------------------------------------------*/
