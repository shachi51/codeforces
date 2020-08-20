#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,p,q,count=0;
	cin>>n;
	cin>>p;
	int arr[500];
	for(int i=0;i<p;i++)
	{
		cin>>arr[i];
	}
	cin>>q;
	for(int i=p;i<p+q;i++)
	{
		cin>>arr[i];
	}
	sort(arr,arr+(p+q));
	for(int i=1;i<=p+q;i++)
	{
		if(arr[i-1]!=arr[i])
		count++;	
	}
	if(count==n)
	cout<<"I become the guy."<<endl;
	else
	cout<<"Oh, my keyboard!"<<endl;
	return 0;
	
	
}
