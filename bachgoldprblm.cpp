#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,n;
	cin>>n;
	cout<<n/2<<endl;
	if(n%2==0)
	{
		for(int i=0;i<n/2-1;i++)
		{
			cout<<"2"<<" ";
		}
		cout<<"2"<<endl;
	}
	if(n%2==1)
	{
		for(int i=0;i<n/2-1;i++)
		{
			cout<<"2"<<" ";
		}
		cout<<"3"<<endl;
	}
	return 0;
}
