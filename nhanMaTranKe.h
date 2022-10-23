#include <iostream>
#include <fstream>
#include <stdlib.h>
#define Max 10

using namespace std;

void matrix_reader(string file, int arr[][Max], int &size){
    size = -1; 
    ifstream input(file);
    string line;

    int rows, cols; 
    for(rows = 0; getline( input, line ); ++rows)
    {
        string element = "";
        cols = 0;
        for(int t = 0; t < line.length(); ++t){
            if(line[t] != ' '){
                element += line[t];
            }
            if(line[t] == ' ' || t == line.length() - 1){
                arr[rows][cols] = atoi(element.c_str());
                cols++;
                element = ""; 
            }
        }
        if(size == -1) size = cols;
    }
    size = rows;
}

void print_matrix(int a[][Max], int size){
    for(int i = 0; i < size; ++i){
        for(int j = 0; j < size; j++){
            cout << a[i][j] << "\t";
        }
        cout << "\n";
    }
}
