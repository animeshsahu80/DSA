#include <bits/stdc++.h>
using namespace std;

void rotate(int *input, int d, int n)
{	
    int arr[n];
    int k=0;
    for(int i=d;i<n;i++){
        arr[k]=input[i];
        k++;
    }
    for(int i=0;i<d;i++){
        arr[k]=input[i];
        k++;
    }
    for(int i=0;i<n;i++){
        input[i]=arr[i];
    }
    

}
int main()
{
	int t;
	cin >> t;
	
	while (t--)
	{
		int size;
		cin >> size;

		int *input = new int[size];

		for (int i = 0; i < size; ++i)
		{
			cin >> input[i];
		}

		int d;
		cin >> d;

		rotate(input, d, size);

		for (int i = 0; i < size; ++i)
		{
			cout << input[i] << " ";
		}
		
		delete[] input;
		cout << endl;
	}

	return 0;
}