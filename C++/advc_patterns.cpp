#include<bits/stdc++.h>
using namespace std;
void pattern_7(int n){
	int i,j,space=0;
	
	for(i=n;i>0;i--){
		for(j=0;j<i;j++){
			cout << "*";
		}
		for(j=0;j<space;j++){
			cout <<" ";
		}
		for(j=0;j<i;j++){
			cout << "*";
		}
		cout <<endl;
		space+=2;
	}
		cout <<"------------Pattern_7-----------------" << endl; //this is for seperating it from next pattern going to print
}

void pattern_8(int n){
	int i,j,space=2*n-2;
	
	for(i=1;i<=n;i++){
		for(j=0;j<i;j++){
			cout << "*";
		}
		for(j=0;j<space;j++){
			cout <<" ";
		}
		for(j=0;j<i;j++){
			cout << "*";
		}
		cout <<endl;
		space-=2;
	}
//	for(i=0;i<n+n;i++)
//		cout<<"*";
//	cout<<endl;
		cout <<"------------Pattern_8-----------------" << endl; //this is for seperating it from next pattern going to print
}

int main(){
	int n;
	n=5;
	pattern_7(n);
	pattern_8(n);	
}
