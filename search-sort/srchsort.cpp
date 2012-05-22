#include <cstdlib>
#include <iostream>
#include "array.h"
using namespace std;
const int ARRAYMAX = 16;                                                                              //sets a const to 16
const int DATAYMAX = 256;                                                                             //another const set to 256
int main(int argc, char *argv[])
{
    int array_sort;
    int array_value;
    int rtrn;
    int dataArray[ARRAYMAX];                                                                        //sets a int to the const arraymax
    initArray(dataArray, DATAYMAX, ARRAYMAX);                                                       //calls function initArray
    printArray(dataArray, ARRAYMAX);                                                                //calls function printArray
    cout << "would you like to sort the array(1 is yes, 2 is no): " << endl;                        //asks user for input 
    cin >> array_sort;
//*******************************
//   above asks user for var array_sort
//   goes to below while loop and switch 
//   statement. Used to check if user 
//   wants to sort array or not
//*******************************
                                                                              
       while(array_sort != 1 && array_sort !=2)
       {
             cout << "that is not a valid choice, please enter a valid input: " <<endl;
             cin >>array_sort;          
                        
       }
//*********************
// above makes sure that the user enterd a valid..
// choice for the selection (1=yes, 2 =no)
//*********************
    switch(array_sort)                                                                              //checks if user wants to sort arrayh
	{
                      case 1:                                                                       //if (1)yes, goes through this
                             sortArray(dataArray, ARRAYMAX);                                        //calls function sort array    
                             printArray(dataArray, ARRAYMAX);                                       //calls function print array
                             cout << "Enter the item you would like to search for(bin): " <<endl;
                             cin >> array_value;
                             rtrn = binarySearch(dataArray, ARRAYMAX, array_value);
                             cout << "the item your looking for is in position: " << rtrn << endl;
//*************************
//  The above asks the user for the item that
// they want to search for.
// it sets the int rtrn to the return call of the binarySearch function 
// then when finished the below break statment finished the program
//*************************
                            break;
                      case 2:                                                                       //if users doesnt want to sort..
                           cout << "Enter the item you would like to search for(lin): " << endl;
                            cin >> array_value;
                            rtrn = linearSearch(dataArray, ARRAYMAX, array_value);
                            cout << "the item your looking for is in position: " << rtrn << endl;
//**************************
// asks the user for the item that they want to search for 
// it sets the int rtrn to the return value of...
// the linearSearch function 
// below break statment finishes the program
//****************************
                            break;
   }
    system("PAUSE");
    return EXIT_SUCCESS;
}

