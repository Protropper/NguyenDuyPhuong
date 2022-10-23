#include "nhanMaTranKe.h"
#include "DSke.h"
#include "DScanh.h"
#include <conio.h>
#include <windows.h>

int main()
{

	Linkedlist list[Max];
	int arr[Max][Max];
	int size;
	matrix_reader("input1.txt", arr, size);
	print_matrix(arr,size);
	
	cout<<endl;
	
	chuyenMaTranKe(list,arr,size);
	inDSke(list,size);
	outputFile("input1_1.txt",list,size);
/////////////////////////////////////////////////////	
	cout<<endl<<endl;
//////////////////////////////////////////////////////
	Linkedlist list2[Max];
	int arr2[Max][Max];
	int size2;
	matrix_reader("input2.txt", arr2, size2);
	print_matrix(arr2,size2);
	
	cout<<endl;
	
	chuyenMaTranKe(list2,arr2,size2);
	inDSke(list2,size2);
	outputFile("input2_1.txt",list2,size2);
///////////////////////////////////////////////////////
	cout<<endl<<endl;
//////////////////////////////////////////////////////
	inDScanh("input1_2.txt",arr,size);
///////////////////////////////////////////////////////
	cout<<endl<<endl;
//////////////////////////////////////////////////////
	inDScanh2("input2_2.txt",arr2,size2);
}