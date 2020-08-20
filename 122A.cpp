#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,flag=0;
	cin>>n;
	int a[]={4,7,44,47,74,77,447,477,774,744,747,474,};
	for(int i=0;i<12;i++)
	{
		if(n%a[i]==0)
		{
		flag=1;
		break;
		}
	
	}
	if(flag==1)
	cout<<"YES";
	else
	cout<<"NO";
	return 0;
	
	
	
}
