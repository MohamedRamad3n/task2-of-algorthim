#include<iostream>
using namespace std;

int sum(int number){
	if (number != 0)
		return number + sum(number - 1);
	else
		return 0;
}
int main(){
	int n;
	cout << "Please Enter A Positive Number: ";
	cin >> n;
	cout << "Sum Of Number =  " << sum(n)<<endl;
	return 0;
}