#include<stdio.h>
#include<stdlib.h>

int* inputText(int);
void quickSort(int[], int , int );
void showText(int *,int);

int main() {
	int *pointer_array;
	int nRows;
	
	
	printf("QUICKSORT\n number or rows: ");
	scanf("%i",&nRows);
	
	pointer_array=inputText(nRows);
	quickSort(pointer_array,0,nRows-1);
	showText(pointer_array,nRows);
	
	return 0;
}

int* inputText(int nRows){
	int i=0;
	int *pointer_array;
	for(i=0; i<nRows; i++){
		printf("Num: ");
		scanf("%i",&*(pointer_array+i));		
	}
	return pointer_array;
}


void quickSort(int array[], int left, int right) {
    int i = left, j = right;
    int pivot = array[(left + right) / 2];
    int aux;
	  
    while (i <= j)
    {
    	while (array[j] > pivot){
        	j--; 
		}
		
        while (array[i] < pivot){
        	i++;
		}	
        	
		
        if (i <= j) 
        {
            aux = array[i];
            array[i] = array[j];
            array[j] = aux;
			
            i++;
            j--;
        }
    } 
    
    if (i < right){
    	quickSort(array, i, right);
	}

    if (left < j){
    	quickSort(array, left, j);
	}		
}


void showText(int *array, int nRows){
	int i=0;
	for(i=0; i<nRows; i++){
		printf("%i ",*(array+i));		
	}
}
