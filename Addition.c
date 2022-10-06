//Question : Accept N numbers from user and perform their Addition

// *Input
// Value of N = 5
// Values : 10  20  30  40  50

// *Output
// Addition is : 150

// Algoithm
/*
    START
        Accept the number of elements from user
        Allocate the memory to store that numbers
        Accept the numbers from user
        Perform Addition of all numbers
        Display the Addition
        Deallocate the memory
    END
*/

#include<stdio.h>       // For printf and scanf
#include<stdlib.h>      // For malloc and free

//////////////////////////////////////////////////////////
//
//  Application Name : Addition of N numbers
//  Input  : N numbers
//  Output : Addition
//  Author : Ghansham Ashok Pawar
//  Date   : 6 October 2022
//
//////////////////////////////////////////////////////////

int main()
{
	int *Arr = NULL;	// Poiter to hold the address of Array
	int iSize = 0;		// Variable to hold size of array
	int i = 0;			// Loop counter
	int iSum = 0;		// To hold the addition
	
	printf("Enter How Many Element's Addition You Want : ");
	scanf("%d",&iSize);
	
	// Allocating Memory for the Array (Dynamically)
	Arr = (int *)malloc(iSize * sizeof(int));
	
	// Accepting Numbers from User
	printf("Enter The Elements : \n");
	
	for(i = 0; i < iSize; i++)
	{
		scanf("%d",&Arr[i]);
	}
	
	// Performing Addition
	for(i = 0; i < iSize; i++)
	{
		iSum = iSum + Arr[i];
	}
	
	// Diplaying The Addition Output
	printf("Addition  is : %d\n",iSum);
	
	// Deallocating Memory for the Array	
	free(Arr);


	return 0;
}

