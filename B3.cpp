#include "nhanMaTranKe.h"
#include "DScanh.h"
using namespace std;
int main()
{
//////////////////////////////////////////////
	int arr[Max][Max];						//
	int size,tmp,cols,rows;					//
	matrix_reader("input1_1.txt",arr,size);	//
//////////////////////////////////////////////
	int arr1[Max][Max];
	size = 6;
//////////////////////////////////////////////
	for(int i = 0; i < size; ++i){			//
        for(int j = 0; j < size; j++){		//
			tmp = arr[i][j];				//
			rows = i;						//
			if(j == 0)						//
            	continue;					//	lay so 1
			for(cols = 0 ; cols <6;cols ++)	//
				if(cols+1 == tmp)			//
					arr1[rows][cols] = 1;	//
		}									//					
	}										//
//////////////////////////////////////////////

//////////////////////////////////////////	
	int arr3[Max][Max];					//
	for(int i = 0; i <size; ++i){		//
        for(int j = 0; j < size; j++){	//	matrix 0
        	arr3[i][j]=0;				//
		}								//
	}									//
//////////////////////////////////////////

	ofstream output ("output1_1.txt");
	


//////////////////////////////////////////	
	for(int i = 0; i < size; ++i){		//
        for(int j = 0; j < size; j++){	//
        	if(arr1[i][j] == 1)			//
        		arr3[i][j] = 1;			//
		}								//	matrix ke
	}									//
	cout<<endl;							//
	print_matrix(arr3,size);			//
//////////////////////////////////////////

	for(int i = 0; i < size; ++i){
        for(int j = 0; j < size; j++){
            output << arr3[i][j] << "\t";
        }
        output << "\n";
    }

	output<<"\n \n";


cout<<endl;	
//////////////////////////////////////////////////////////////
	for(int i = 0; i < size; ++i){							//
        for(int j = 0; j < size; j++){						//
			if(j==0)										//
			{	tmp = arr[i][j];							//
				continue;									//
			}												// danh sach canh
			if(tmp<arr[i][j])								//
				if(arr[i][j]<size+1)						//
					{										//
						cout<<tmp<<char(16)<<arr[i][j]<<endl;//
						output<<tmp<<" "<<arr[i][j]<<endl;	//		
					}										//
		}													//
	}														//
//////////////////////////////////////////////////////////////	


	output<<"\n\n";
	int count;
	for(int i = 0; i < size; ++i){
		count = 0;
        for(int j = 0; j < size; j++){
        	if(arr3[i][j] == 1 )
        	{
        		count ++;
			}
		}
		cout<<"Dinh "<<i+1<<" bac " <<count<<"\n";
		output<<"Dinh "<<i+1<<" bac " <<count<<"\n";
	}
}