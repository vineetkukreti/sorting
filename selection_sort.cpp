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
void selection_sort(int a[],int n)
{
	int i,j,min;
	for(i=0;i<n;i++)
	{
		min = i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[min])
				min = j;
		}
		swap(a[i],a[min]);
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
	selection_sort(a,n); // function to sort the array
	cout<<"Array after sorting  :";
	print_array(a,n);
	return 0;
}

