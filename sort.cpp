#include <iostream>
#include <cstdlib>//for "exit()" on some systems
#include <vector>
#include <string>

using namespace std;
void bubbleSort(auto& Data);

void printArray(int num[]) {
	for(int i= 0; i < 5; i++) {
		cout<<num[i]<<" "<<endl;
	}
	cout<<endl;
}

int main()
{
	int num[] = { 2, 5, 3, 43, 4};
	
	cout<<"Before sorting"<<endl;	
	printArray(num);
	bubbleSort(num);
	cout<<"After sorting"<<endl;
	printArray(num);
	return 0;

}

void bubbleSort(auto& Data) 
	{

for (int k = 1; k < 5; k++) {
	for (int i = 0; i < 5 - 1; i++) {
		if (Data[i] > Data[i +1])
		{
			//pre-defined function
			swap(Data[i], Data[i + 1]); 
		} 
	} 
}
}
