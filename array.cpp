//Pairut Dumkuengthanant
//64856070

#include <iostream>
#include "array.h"
#include "matrix.h"
using namespace std;

//typedef Array<double> Dbarray;
//typedef Array<char> Chrray;

template
  < class T >
void fillMatrix( Matrix <T> & m )
{
  int i, j;
  for ( i = 0; i < m.numRows(); i++ )
    m[i][0] = T();
  for ( j = 0; j < m.numCols(); j++ )
    m[0][j] = T();
  for ( i = 1; i < m.numRows(); i++ )
    for ( j = 1; j < m.numCols(); j++ )
    {
      m[i][j] = T(i * j);
    }
}
void test_int_matrix()
{ // here is a start, but make it better
    Matrix < int > m(10,5);
    fillMatrix( m );
    cout << m;
    // PUT YOUR TRY/CATCH HERE AND TEST EXCEPTIONS
}
void test_double_matrix()
{ // you get to write this entire function
       Matrix < double > M(8,10);
    fillMatrix( M );
    cout << M;
    // PUT YOUR TRY/CATCH HERE AND TEST EXCEPTIONS
}
int main()
{	
   Array<int> ar(5);
   Matrix<int>m(10,5);
   test_int_matrix();
   test_double_matrix();

   try
   {
     cout<<m[5]<<endl;
     cout<<m[-100]<<endl;
   }
   catch(IndexOutOfBoundsException)
   {
	cout<<"Index out of Bounds"<<endl;
   }
   try
   {
     cout<<ar[4]<<endl;
     cout<<ar[55]<<endl;
   }
   catch(IndexOutOfBoundsException)
   {
	cout<<"Index out of Bounds"<<endl;
   }
	
   return 0;
}







