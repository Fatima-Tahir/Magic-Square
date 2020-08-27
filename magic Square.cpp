# include <iostream>
# include <ctime>
# include <iomanip>
# include <cstdlib>
using namespace std;
const int rows = 7;
const int cols = 7;
void display(int a[rows][cols])
{
	for (int i = 0; i<rows; i++)
	{
		for (int j = 0; j<cols; j++)
		{
			cout<<setw(5) << a[i][j] << "  ";
		}
		cout << endl<<endl;
	}
}


int main()
{
	int magic[rows][cols]={0};
	int nRow=0,nCol=0;
	int current_row=0;
	int current_col=rows/2;
	magic[current_row][current_col] = 1;
	for(int i=2;i<=rows*rows;i++)
	{
		nRow=current_row-1;
		nCol=current_col+1;
		if(current_row-1<0)
		{
			nRow=rows-1;
		}
		if(nCol>=cols)
		{
			nCol=0;
		}
		if(magic[nRow][nCol]!=0)
		{
			nRow=current_row+1;
			nCol=current_col;
		}
		magic[nRow][nCol]=i;
		current_row=nRow;
		current_col=nCol;
	}
	cout<<"            Magic Square of Number "<<rows<<endl<<endl;
	cout<<"      ----------------------------------------"<<endl;
	display(magic);
}
