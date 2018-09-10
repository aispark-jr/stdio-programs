#include<stdio.h>

int main()
{
	int i[5], a;
	for ( a = 0; a < 5; a++)
	{
		scanf ( "%d", &i[a] );
	}
	for ( a = 0; a < 5; a++ )
        {
		printf ( "%d\n", i[a] );
	}
}
