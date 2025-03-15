#include<stdio.h>
#include<conio.h>
#include<iostream.h>
void main()
{
	int i,n,item,b,e,mid;
	cout<<"Enter the size";
	cin>>n;
	int a[20];
	for(i=0;i<n;i++)
	{
		cout<<"enter the element "<<(i+1)<<"\t";
		cin>>a[i];
	}
	cout<<"enter element to search";
	cin>>item;
	b=0;
	e=n-1;
	mid=int(b+e/2);
	while(b<=e && a[mid]!=item)
	{
		if(a[mid]>item)
		{
			e=mid-1;
		}
		else
		{
			b=mid+1;
		}
		mid=int(b+e/2);
	}
	if(a[mid]==item)
	{
		cout<<"element found";
	}
	else
	{
		cout<<"element not found";
	}
	getch();
}