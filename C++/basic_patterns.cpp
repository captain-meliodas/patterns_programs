#include<bits/stdc++.h>
using namespace std;
/*
Question- pattern_1(Source codechef)

A
BC
DEF
GHIJ

You are given an integer N. Print the N line pattern of the same kind sequence.
Note: Everytime after Z, you should start printing A again/
*/
void pattern_1(int n){
	int i,j;
	int x = 1;
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			if(x>26)
				x = 1;
			cout << char(x+65-1);
			x+=1;
		}
		cout <<endl;
	}
	cout <<"------------Pattern_1-----------------" <<endl; //this is for seperating it from next pattern going to print
}

/*
Question- pattern_2
5
*
**
***
****
*****

*/

void pattern_2(int n){
	int i,j;
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			cout << "*";
		}
		cout <<endl;
	}
	cout <<"------------Pattern_2-----------------" << endl; //this is for seperating it from next pattern going to print
}

/*
Question- pattern_3
4
****
***
**
*

*/

void pattern_3(int n){
	int i,j;
	for(i=n;i>0;i--){
		for(j=1;j<=i;j++){
			cout << "*";
		}
		cout <<endl;
	}
	cout <<"------------Pattern_3-----------------" <<endl; //this is for seperating it from next pattern going to print
}

/*
Question- pattern_4
4
*
**
***
****
***
**
*

*/
void pattern_4(int n){
	int i,j;
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			cout << "*";
		}
		cout <<endl;
	}
	for(i=n-1;i>0;i--){
		for(j=1;j<=i;j++){
			cout << "*";
		}
		cout <<endl;
	}
	cout <<"------------Pattern_4-----------------" << endl; //this is for seperating it from next pattern going to print
}




/*
Question- pattern-5
5
	*
   * *
  * * *
 * * * *
* * * * *

*/

void pattern_5(int n){
	int i,j;
	int space=n-1;
	for(i=1;i<=n;i++){
		for(j=1;j<=space;j++){
			cout <<" ";
		}
		space-=1;
		for(j=1;j<=i;j++){
			cout <<"* ";
		}
		cout <<endl;
	}
	cout <<"------------Pattern_5-----------------" << endl; //this is for seperating it from next pattern going to print
	
}


/*
Question- pattern-6
5
	*
   * *
  * * *
 * * * *
* * * * *
* * * * *
 * * * *
  * * *
   * *
    *

*/

void pattern_6(int n){
	int i,j;
	int space=n;
	for(i=0;i<n;i++){
		for(j=1;j<=space;j++){
			cout <<" ";
		}
		for(j=0;j<i;j++){
			cout << "* ";
		}
		space-=1;
		cout <<endl;
	}
	space=0;
	for(i=n;i>0;i--){
		for(j=1;j<=space;j++){
			cout <<" ";
		}
		for(j=0;j<i;j++){
			cout << "* ";
		}
		space+=1;
		cout <<endl;
	}
	
	cout <<"------------Pattern_6-----------------" << endl; //this is for seperating it from next pattern going to print
}

int main(){
	int n,testcases;
	cin >> testcases;
	
	while(testcases!=0){
		cin >> n;
		pattern_1(n);
		pattern_2(n);
		pattern_3(n);
		pattern_4(n);
		pattern_5(n);
		pattern_6(n);
		testcases-=1;
	}
}
