#include<bits/stdc++.h>
using namespace std;
int main()
{
	string a;
	int flag=1;
	cin>>a;
	for(int i=0;i<a.size();i++)
	{
	    if(a[i]=='W'&& a[i+1]=='U' && a[i+2]=='B')
		{
	        i+=2;
	        if(!flag){
	            cout<<" ";
	        }
	        continue;
	    }
		else
		{
	        flag=0;
	        cout<<a[i];
	    }
	}
			
				
	return 0;
	
}
