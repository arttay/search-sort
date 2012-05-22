#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <cstring>

using namespace std;

void initArray(int A[], int arraySize, int modValue)                            //function prototye
{
  int i;                                                                        // int i
  
  
  srand(0);                                                                     //sets seed for random # gen
  for(i=0; i < 16; i++)                                                         //starts loops for random # gen
  {
           A[i] = rand()% modValue;                                             //sets random #'s to each element in A[i]
  }                                                                               //mods it by arraymax
return;

}

void printArray(int A[], int arraySize)                                         //function prototype
{
     int i;                                                                     //int i
     for(i=0; i <16; i++)                                                       //starts for loops to print each element in the array
              cout << A[i]<< " " <<endl;                                        //line that prints each element
              return;
              
 }
              
void sortArray(int A[], int arraySize)                                          //function prototype(bubblesort)
{
	int i;                                                                      //declares int i
	int j;                                                                      //declares int j
	int indexMin;                                                               //declares indexMin
	int valueMin;                                                               //decalres valueMin

	for (i=0; i<16; i++)                                                        //starts for loop
	{
		indexMin=i;                                                             //sets indexMin to 1
		valueMin=A[i];                                                          //sets valueMin to array A sub i(A[i])
		
		for(j=i+1; j<16; j++)                                                   //nested for loop, checks next mumber of i
		{
			if (A[j]<valueMin)                                                  //checks if A sub J is less than valueMin
			{
				indexMin=j;                                                     //if A[j] is set indexMin to J
				valueMin=A[j];                                                  //and valueMin to A sub j
			}
		}
		A[indexMin]=A[i];                                                       //in nested for loop, if the if failes, set A[indexMin to A[i]
		A[i]=valueMin;                                                          //and A[i] to valueMin
	}
	
    return;
}
 int binarySearch(int A[], int arraySize, int item)
 {
     int left;
     int right;
     int mid;
     int rtrn;
//*********************************
// defines 4 int's, left, right, mid and rtrn
//**********************************
     
     left = 0;
     right = arraySize - 1;
     rtrn = -1;
//*****************************************
// definitionis for int left, right and rtrn
// sets left to 0, right to arraySize(16) -1
// and rtrn to -1, (it)will be changed it item is found
//*******************************************     

     while(rtrn < 0 && left <= right)
//*******************************
// starts loop to find item
// while rtrn is less than 0
// and left is less than or greater to right
//*********************************
     {                                                                                
                mid = (left + right) /2;                                        //mid is set to sum of left & right divided by 2
                    if(item < A[mid])                                           //checks if item is less than the above algorithm
                            
                                     right = mid -1;                            //if so, set right to mid - 1
                                   
                    else if(item > A[mid])                                      //other option to if statement
                    
                         left = mid + 1;                                        //if other, sets left to mid -1
                    else 
                    rtrn = mid;                                                 //if neither, sets rtrn to mid
                }                                                               //end while
                return (rtrn);                                                  //returns rtrn
     }                                                                          //end binarySearch
    
int linearSearch(int A[], int arraySize, int item)                              //function definition for linearSearch
{
    int location;                                                               //defines int location
    bool found = false;                                                         //defines bool found, set to false 
    
    location = 0;                                                               //sets location to 0
    
    while(location < arraySize && !found)
    {
//******************************************
// while loop, continues while location is less than arraySize
// and found is false
//**********************************************
                   if(A[location] == item)
                                  found = true;  
                   else
                       location++;
//********************************************
// body of while loop:
// if statement checks if array locatoin, "location"
// is equal to item, sets found to true if so
// if not, it increase int location by 1
//********************************************
    }                                                                           //end while
    if(found)                                                                   //if found is true...
             return (location);                                                 //return location
    else     
        return (-1);                                                            //if not, return -1
    
    
    
    
    
    
}//end linearSearch                                       
                                        
                                        
                                        
                                        
                                        
                                        
                                        
     
