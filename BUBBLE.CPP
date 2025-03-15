#include<iostream.h>
#include<iomanip.h>
#include<conio.h>
void main()
{
int data[10];
int n,i,temp;
clrscr();
cout<<"enter no of elements:";
cin>>n;
cout<<"Enter array elemets";
for(i=1;i<=n;i++)
{
cin>>data[i];
}

for(int k=1;k<n;k++)
{
	int ptr=1;
	while(ptr<=n-k)
	{
	if(data[ptr]>data[ptr+1])
	{
	temp=data[ptr+1];
	data[ptr+1]=data[ptr];
	data[ptr]=temp;
	}
	ptr=ptr+1;
}}
cout<<"elements are:";
for(i=1;i<=n;i++)
{
cout<<data[i]<<endl;
}
getch();
}
