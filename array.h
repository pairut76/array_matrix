
//Pairut Dumkuengthanant
//64856070
#include <iostream>
using namespace std;
#include <iomanip>
#include <assert.h>
#include <exception>

#ifndef ARRAY_H
#define ARRAY_H


class IndexOutOfBoundsException : public exception
{
	virtual const char* what() const throw()
	{
		return "index out of bounds!\n";
	}
};
template <typename type>
class Array

{
private: 
	int len;
	type *buf; 
public:
	Array( int newLen ): len( newLen ), buf( new type[newLen] ){}
	
	Array<type>( const Array &l ): len( l.len ), buf( new type[l.len] )
	{
		for( int i=0; i<l.len; i++)
			buf[i]=l.buf[i];
	}
	int length()
	{
		return len;
	}
	type & operator[]( int i )
	{
		if(i<0||i>len){
			IndexOutOfBoundsException e; 
			throw e;
			}
		return buf[i];
		
	}
	void print( ostream & out )
	{
		for( int i=0;i<len;i++)
			out<<setw(5)<<setprecision(2)<<fixed<<buf[i];
			//out<<buf[i];
	}
	friend ostream & operator <<( ostream & out, Array & a)
	{
		a.print(out);
		return out;
	}
	friend ostream & operator<<(ostream & out, Array *ap)
	{
		ap->print( out );
		return out;
	}
};



#endif /* ARRAY_H */












