#include<iostream>
using namespace std;

int main()
{
	int i,j,k;
	int n = 5;
	for(i=0;i<n;i++){
        for(j=0;j<n-i-1;j++)
            cout<<" ";
		for(k=0;k<i+1;k++){
			cout<<"* ";
		}
        cout<<"\n";
	}
	for(i=0;i<n;i++){
        for(j=0;j<i;j++)
            cout<<" ";
		for(k=1;k<n-i;k++){
			cout<<" *";
		}
        cout<<"\n";
	}
	return 0;
}
