#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,temp,rem;
	cin>>n;
	if(n>=0)
	cout<<n<<endl;
	else
	{
		temp=n;
		n=n/10;
		rem=temp%10;
		temp=temp/100;
		temp=temp*10+rem;
		if(temp>n)
		cout<<temp<<endl;
		else
		cout<<n<<endl;	
	}
	return 0;
}
