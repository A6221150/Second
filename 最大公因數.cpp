#include <iostream>
using namespace std ;

int gcd( int a , int b ) ;

int main()
{
	int a ;
	int b ;
	
	for( int j=1 ; j<=5 ; j++ )
	{
		cin >> a >> b ;
		cout << gcd( a , b ) << endl ;
	}
}
int gcd( int a , int b ) 
{
	int max ;
	
	max = a ;
	
	if( max<b )
	max = b ;
	
	for( int counter=max ; counter!=0 ; counter-- )
	{
		if( a%counter==0 && b%counter==0 )
		{
			return counter ;
		}
	} 
}
