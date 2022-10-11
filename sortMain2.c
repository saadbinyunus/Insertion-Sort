#include <stdio.h>
 
#include <stdlib.h>
 
#include "mySort.h"
 
 
 
int main(int argc, char * argv[])
 
{
  if(argc > 1){
    
  int i;


	// Array initialization
	int input[100000];
	int n_input;
	

	n_input=argc;

	//Assignment of values into array
	for(i=1; i < n_input ;i++){ 
	input[i]=atoi(argv[i]);
	}

	mySort(input, n_input);
	

    /* Check that the data array is sorted. */
 
    for(i = 0; i < n_input-1; i++) {
 
        if (input[i] > input[i+1]) {
 
            fprintf(stderr, "Sort error: data[%d] (= %d)"
 
              " should be <= data[%d] (= %d)- -aborting\n",
 
              i, input[i], i+1, input[i+1]);
 
            exit(1);
 
        }
 
    }
 
    
 
    /* Print sorted array to stdout */
 
    for(i = 1; i < n_input; i++) {
 
        printf("%d\n", input[i]);
 
    }
 
    exit(0);
 
    
      }


  

  else{
   
    int data[100000]; /* Array of ints to sort */
 
    int nDataItems;   /* number of actual items in the array */
 
    int i;
 
    
 
    /* Test data */
 
    nDataItems = 4;
 
    data[0] = 10;
 
    data[1] = 20;
 
    data[2] = 30;
 
    data[3] = 40;
 
    
 
    mySort(data, nDataItems);
 
    
 
    /* Check that the data array is sorted. */
 
    for(i = 0; i < nDataItems-1; i++) {
 
        if (data[i] > data[i+1]) {
 
            fprintf(stderr, "Sort error: data[%d] (= %d)"
 
              " should be <= data[%d] (= %d)- -aborting\n",
 
              i, data[i], i+1, data[i+1]);
 
            exit(1);
 
        }
 
    }
 
    
 
    /* Print sorted array to stdout */
 
    for(i = 0; i < nDataItems; i++) {
 
        printf("%d\n", data[i]);
 
    }
 
    exit(0);
 
  }}
