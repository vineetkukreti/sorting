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
	bool isSorted = true;
	for(int i = 0;i<n-1;i++)
	{
		for(int j = 0;j<n-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
				swap(a[j],a[j+1]);
				isSorted = false;
			}
		}
		if(isSorted == true)
		{
			break;
		}
	}
}
int main()
{
	int n;
	cout<<"Enter the no of element : ";
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

