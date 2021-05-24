#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main(void) {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,flag=1;
	    cin>>n;
	    string s[n];
	    for(int i=0;i<n;i++)
	    cin>>s[i];
	    for(int i=0;i<n-1;i++)
	    {
	        if(s[i]==s[i+1] && s[i]=="cookie" || s[n-1]=="cookie")
	        flag=0;
	    }
	    if(n==1 && s[0]=="cookie")
	    flag=0;
	    if(flag==1)
	    cout<<"YES"<<endl;
	    else
	    cout<<"NO"<<endl;
	}
	return 0;
	}
