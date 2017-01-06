
//Pairut Dumkuengthanant
//64856070

#include <iostream>
using namespace std;
#include <iomanip>
#include <assert.h>
#include "array.h"


#ifndef MATRIX_H
#define MATRIX_H
template <typename Type>

class Matrix
{
private:
	int rows, cols;
	Array <Array<Type>*>m;
public:
	Matrix( int newRows, int newCols): rows( newRows), cols( newCols ), m( rows )
	{
		for(int i =0;i<rows;i++)
			m[i]=new Array <Type>(cols);
	}
	int numRows()
	{
		return rows;
	}
	int numCols()
	{
		return cols;
	}
	Array < Type > & operator []( int row )
	{

		if(row<0||row>rows){
			IndexOutOfBoundsException e; 
			throw e;
			}
		return *m[row];
	}
	void print(ostream & out)
	{
		for(int i=0;i<rows;i++)
			cout<<m[i]<<endl;
	}
	friend ostream & operator << ( ostream & out, Matrix & m )
	{
		m.print( out );
		return out;
	}
};
#endif /* MATRIX_H */












