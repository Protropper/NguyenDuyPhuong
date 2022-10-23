#pragma once
#include "LinkedList.h"
#include <fstream>
#define Max 10
void chuyenMaTranKe(Linkedlist L[],int a[][Max], int size)
{	int cols,rows,tmp;
	for(rows = 0; rows<size ; rows++)
	{
		for(cols = 0;cols<size; cols++)
		{
			if(a[rows][cols] == 1)
			{
				tmp=cols+1;
				L[rows].insertNode(tmp);
			}
		}
	}
	
}

void inDSke(Linkedlist L[],int size)
{
	for(int i=0;i<size;i++)
	{	cout<<i+1<<char(16);
		L[i].printList();
		cout<<"\n";
	}
}



void outputFile(string file, Linkedlist L[], int size)
{
	ofstream output (file);
	if (output.is_open())
	{
		for(int i=0;i<size;i++)
		{	
			output<<i+1<<" ";
			Node* temp = L[i].head;
			while (temp != NULL) {
				output << temp->data <<" ";
				temp = temp->next;
			}
			output<<"\n";
		}
	}
	output.close();
}