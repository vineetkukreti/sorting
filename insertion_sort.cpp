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
void insertion_sort(int a[],int n)
{
	for(int i = 1;i<n;i++)
	{
		int j = i-1;
		int temp = a[i];
		while(a[j]>temp&&j>=0)
		{
			a[j+1] = a[j];
			j--;
		}
		a[j+1] = temp;
		
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
	insertion_sort(a,n); // function to sort the array
	cout<<"Array after sorting  :";
	print_array(a,n);
	return 0;
}

