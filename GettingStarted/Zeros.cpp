// Number Of Zeros in factorial
//Refrence : Cracking the Coding interview by Gayle Laakmaan  McDowell
#include <bits/stdc++.h>
using namespace std;

//Method to find number of factors of 5 in it.
int factor(int num){
	int count = 0;
	while(num %5 == 0){
		count++;
		num/=5;
	}
	return count;
}

//One way to find no. of Zeros in factorial of given number.
void Zeros1(int num){
	int count = 0;
	for (int i = 5; i <= num; ++i)
	{
		/* code */
		 count += factor(i);
	}
	cout<<"No. Of Zeros by method 1 : "<<count<<endl;
}

//Second way to find no. of zeros in given number.
void Zeros2(int num){
	int count = 0;
	for(int i = 5; num/i ;i = i*5){
		count += num/i;
	}
	cout<<"No. Of Zeros by method 2 : "<<count<<endl;
}



int main(){
	int n;
	cin>>n;
	Zeros1(n);
	Zeros2(n);
	return 0;
}
