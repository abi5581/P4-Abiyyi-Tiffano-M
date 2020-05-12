#include<iostream>
using namespace std;

int main (){
	int x[4],i;
	for(i=0;i<=3;i++)
	{
		cout<<"masukkan nilai "<<i+1<<"  :  ";
		cin>>x[i];
	}
	cout<<endl;
	for(i=0;i<=3;i++)
	{
		cout<<"nilai ke "<<i+1<<"  = "<<x[i]<<endl;
	}
	cout<<endl;
	return 0;
}
