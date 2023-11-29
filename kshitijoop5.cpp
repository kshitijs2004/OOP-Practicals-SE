/*
Write a function template for selection sort that inputs, sorts and outputs an integer array and
a float array.
*/

#include<iostream>
using namespace std;
int n;
#define size 10
template<class T>
void sel(T A[size])
{
    int i,j,min;
    T temp;
    for(i=0;i<n-1;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if(A[j]<A[min])
            min=j;
        }
        temp=A[i];
        A[i]=A[min];
        A[min]=temp;
    }
    cout<<"\nSorted array:";
    for(i=0;i<n;i++)
    {
        cout<<" "<<A[i];
    }
}

int main()
{
    int A[size];
    float B[size];
    int i;
    int ch;
    do
	{
		cout<<"\n* * * * * SELECTION SORT SYSTEM * * * * *";
		cout<<"\n--------------------MENU-----------------------";
		cout<<"\n1. Integer Values";
		cout<<"\n2. Float Values";
		cout<<"\n3. Exit";
		cout<<"\n\nEnter your choice : ";
		cin>>ch;
		
		switch(ch)
		{
			case 1:
				cout<<"\nEnter total no of int elements:";
                cin>>n;
                cout<<"\nEnter int elements:";
                for(i=0;i<n;i++)
                {
                    cin>>A[i];
                }
                sel(A);
				break;
				
			case 2:
				cout<<"\nEnter total no of float elements:";
                cin>>n;
                cout<<"\nEnter float elements:";
                for(i=0;i<n;i++)
                {
                    cin>>B[i];
                }
                sel(B);
				break;
				
			case 3:
				exit(0);
		}
	}while(ch!=3);
   
   
    
   return 0;
    
}


OUTPUT:

jspm@jspm-Vostro-3470:~$ c++ oops5.cpp 
jspm@jspm-Vostro-3470:~$ ./a.out

* * * * * SELECTION SORT SYSTEM * * * * *
--------------------MENU-----------------------
1. Integer Values
2. Float Values
3. Exit

Enter your choice : 1

Enter total no of int elements:2

Enter int elements:12
13

Sorted array: 12 13
* * * * * SELECTION SORT SYSTEM * * * * *
--------------------MENU-----------------------
1. Integer Values
2. Float Values
3. Exit

Enter your choice : 2

Enter total no of float elements:3 

Enter float elements:1.2
1.3
1.4

Sorted array: 1.2 1.3 1.4
* * * * * SELECTION SORT SYSTEM * * * * *
--------------------MENU-----------------------
1. Integer Values
2. Float Values
3. Exit

Enter your choice : 3
