#include<iostream>
using namespace std;

    
    bool checkrow(int sudoku[][20],int row,int col)
    {
        for(int i=0;i<row;i++)
        {
            if(sudoku[row][i]>=1&&sudoku[row][i]<=9)
            return true;
        }
        return false;
    }
    bool checkcol(int sudoku[][20],int row,int col)
    {
        for(int i=0;i<row;i++)
        {
            if(sudoku[i][col]>=1&&sudoku[i][col]<=9)
            return true;
        }
        return false;
    }
    bool submatrix(int sudoku[][20],int row,int col)
    {
        for(int i=0;i<row;i++)
        {
            if(sudoku[3*(row/3)+i/3][3*(col/3)+i%3]>=1&&sudoku[3*(row/3)+i/3][3*(col/3)+i%3]<=9)
            return true;
        }
        return false;
    }
    bool isValidSudoku(int sudoku[][20],int row,int col)
    {
        if(checkrow( sudoku, row, col)&&checkcol( sudoku, row, col)&&submatrix( sudoku, row, col))
        {
            return true;
        }
       return((isValidSudoku)?"true":"false"); 
    }
int main()
{
    int sudoku[20][20];
    int row,col,i,j,digit;
    cout<<"enter the value of row: ";
    cin>>row;
    cout<<"\n Enter the value of col: ";
    cin>>col;
    cout<<"Enter the values of sudoku: \n";
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            cin>>sudoku[i][j];
        }
    }
    cout<<"\n So the sudoku looks like before Modification: ";
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            cout<<"\n\t \t"<<sudoku[i][j];
        }
    }
    cout<<isValidSudoku(sudoku,row,col);
    
return 0;
}
//int sudoku[][]={{5,3,0,0,7,0,0,0,0},{6,0,0,1,9,5,0,0,0},{0,9,8,