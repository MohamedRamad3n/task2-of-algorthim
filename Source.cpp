#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

// this is using bubbleSort
void Sort(vector<int> &arr){
	bool swapped = true;
	int n = arr.size();
	int c = 0;
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < n - i - 1; j++)
		{
			if (arr[j] <arr[j + 1])
			{
				swap(arr[j], arr[j + 1]);
				swapped = false;
			}
			c++;
		}
		if (swapped == true)
			break;

	}
	cout << "# of rounds :" << c << endl;  //to print the num of rounds in looping
}

void print(vector<int> &v){
	int n = v.size();
	for (int i = 0; i < n; i++){
		cout << v[i] << "  ";
	}
	cout << endl;
}


int main(){
	vector<int> employeeSalary = { 3000, 4030, 8000, 2000, 1200, 100000, 5000, 3000 };
//nt n = sizeof(arr) / sizeof(arr[0]);
	Sort(employeeSalary);
	print(employeeSalary);
}