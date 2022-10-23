#include "nhanMaTranKe.h"
#include "DSke.h"
using namespace std;

int main()
{
	int arr[Max][Max];
	int size;
	matrix_reader("input1_2.txt",arr,size);
	ofstream output("output1_2.txt");
	
//////////////////////////////////////////
	int arr0[Max][Max];					//
	for(int i = 0; i <size; ++i){		//
        for(int j = 0; j < size; j++){	//	matrix 0
        	arr0[i][j]=0;				//
		}								//
	}									//
//////////////////////////////////////////
	
	for(int i = 0; i < size; ++i){
		int tmp1 = arr[i][0];
		int tmp2 = arr[i][1];
//        for(int j = 0; j < 2; j++){
//            cout << arr[i][j] << "\t";
					arr0[tmp1-1][tmp2-1] = 1;
					arr0[tmp2-1][tmp1-1] = 1; 
        }
	
///////////////////////////////////////////	ma tran ke
	for(int i = 0; i < 6; ++i){
        for(int j = 0; j < 6; j++){
        	cout <<arr0[i][j] <<"\t";
            output << arr0[i][j] << " ";
        }
        cout<<"\n";
        output << "\n";
    }
    output<<"\n \n";
///////////////////////////////////////////  
	int tmp1,tmp2;
    Linkedlist ds[6];
    for(int i = 0 ; i < 6 ; i ++ )
    {
    	for(int j = 0 ; j < 10 ; j ++ )
    	{
			 tmp1 = arr[j][0];
			 tmp2 = arr[j][1];
			if(tmp1 == (i+1))
				ds[i].insertNode(tmp2);
			if(tmp2 == (i+1))
				ds[i].insertNode(tmp1);
		}
	}
	
	inDSke(ds,6);
	for(int i=0;i<6;i++)
		{	
			output<<i+1<<" ";
			Node* temp = ds[i].head;
			while (temp != NULL) {
				output << temp->data <<" ";
				temp = temp->next;
			}
			output<<"\n";
		}
		
		output<<"\n\n";
	int count;
	
	for(int i = 0; i < 6; ++i){
		count = 0;
        for(int j = 0; j < 6; j++){
        	if(arr0[i][j] == 1 )
        	{
        		count ++;
			}
		}
		cout<<"Dinh "<<i+1<<" bac " <<count<<"\n";
		output<<"Dinh "<<i+1<<" bac " <<count<<"\n";
	}
	output.close();
}
    

