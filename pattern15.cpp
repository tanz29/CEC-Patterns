#include<iostream>
using namespace std;

int main()
{
	int i,j,k;
	int n = 5;
	for(i=0;i<n;i++){
        for(j=0;j<n-i-1;j++)
            cout<<" ";
		for(k=0;k<2*i+1;k++){
			cout<<"*";
		}
        cout<<"\n";
	}
	return 0;
}
