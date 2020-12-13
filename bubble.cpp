#include<iostream>
#include<iomanip>
using namespace std;
void sort(int data[])
{
	int temp;
	for(int i=0;i<10;i++)
	{
		for(int j=9;j>i;j--)
			{
				if(data[j-1]>data[j])
			{	temp=data[j];
		data[j]=data[j-1];
		data[j-1]=temp;
				}
		}
	}
}

int main()
{
	int data[10]={10,5,8,2,6,9,4,3,7,1};
	sort(data);
	for(int a=0;a<10;a++)
	{
		cout.setf(ios::left);
		cout<<setw(5)<<data[a];
	}
cout<<endl;
return 0;
}