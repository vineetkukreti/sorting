#include<iostream>
using namespace std;
void print_array(int a[],int n)
{
	for(int i = 0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
}
void bubble_sort(int a[],int n)
{
	for(int i = 0;i<n-1;i++)	// loop for number of passes
	{
		for(int j = 0;j<n-1-i;j++) // loop for number of comparsion
		{
			if(a[j]>a[j+1])
			{
				swap(a[j],a[j+1]);
			}
		}
	}
}
int main()
{
	int n;
	cout<<"Enter the no of element : ";
//	 7
//	 33 56 78 11 34 4 0 
	cin>>n;
	int a[n];
	printf("Enter %d elements : ",n);
	for(int i = 0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"Array before sorting : ";
	print_array(a,n);// function to print the array
	bubble_sort(a,n); // function to sort the array
	cout<<"Array after sorting  :";
	print_array(a,n);
	return 0;
}

