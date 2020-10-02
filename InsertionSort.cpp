#include <iostream>
using namespace std;
void display(int *array, int size) {
   for(int i = 0; i<size; i++)
      cout << array[i] << " ";
   cout << endl;
}
void insertion_sort(int *arr, int from, int to)
{
	int key = 0;
	int j = 0;
	
	for(int i = from + 1; i <= to; i++)
	{
		key = arr[i];
		j = i - 1;
		while(key < arr[j] && j >= from)
		{
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j+1] = key;
	}
}


void doiSort(int buf[], int len, int maxl)
{
	if (len >= maxl)
	{
		return;
	}
	if (len == 1)
	{
		if (buf[0] > buf[1])
		{
			//cout << " Shift 1" << endl;
			int r = buf[1];
			buf[1] = buf[0];
			buf[0] = r;
		}
		doiSort(buf, 2, maxl);
	}
	else
	{
		int m = buf[len];
		for (int i = 0; i < len; i++)
		{
			if (buf[i] > m)
			{
				//cout << "insert " << buf[i] << "->" << buf[len] << " " << endl;
				for (int j = len; j > i; j--)
				{
					int t = buf[j];
					buf[j] = buf[j - 1];
					buf[j - 1] = t;
				}
				break;
			}
		}

		doiSort(buf, len + 1, maxl);
	}
	return;
}
