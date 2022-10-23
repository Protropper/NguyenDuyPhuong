#pragma once
#include "LinkedList.h"
#include <fstream>
#define Max 10

//void chuyenMaTranKe2(Linkedlist L[],int a[][Max], int size)
//{	int cols,rows,tmp;
//	for(rows = 0; rows<size ; rows++)
//	{
//		for(cols = 0;cols<size; cols++)
//		{
//			if(a[rows][cols] == 1 && rows>cols)
//			{
//				tmp=cols+1;
//				L[rows].insertNode(tmp);
//			}
//		}
//	}
//	
//}

void inDScanh(string file,int a[][Max], int size)
{
	int cols,rows;
	ofstream output (file);
	if (output.is_open())
	{
		for(rows = 0; rows < size ; rows++)
		{
			for(cols = 0;cols<size; cols++)
			{
				if(a[rows][cols] == 1 && rows<cols)
				{
					cout<<rows+1<<char(16)<<cols+1<<endl;
					output<<rows+1<<" "<<cols+1<<"\n";
				}
			}		
		}
	}
}

void inDScanh2(string file,int a[][Max], int size)
{
	int cols,rows;
	ofstream output (file);
	if (output.is_open())
	{
		for(rows = 0; rows < size ; rows++)
		{
			for(cols = 0;cols<size; cols++)
			{
				if(a[rows][cols] == 1 )
				{
					cout<<rows+1<<char(16)<<cols+1<<endl;
					output<<rows+1<<" "<<cols+1<<"\n";
				}
			}		
		}
	}
}