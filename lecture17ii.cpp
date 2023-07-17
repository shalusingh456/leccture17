#include<iostream>
using namespace std;
int main()
{
	int a[10];
	int i;
	for(i=0;i<10;i++)
	int least_index ;
	
	//start of selection sort
	int least_index ;  //stores the index of the least element
	int j;
	least_index = 0;
	for(j=i;j<9;i++)
	{
		if(a[j]<a[least_index]) least_index=j; // if we find an index in j=(0,9) at which a[j] is less  than the index  which we assumed,then this j will be the new least index
 	}
 	int temp;
 	temp = a[0];
 	
	 a[least_index];
 	a[least_index]=temp;
 	
 	cout<<"The element after sorting are :";
 	for(i=0;i<10;i++)cout<<a[i]<<" ";
	
	
}