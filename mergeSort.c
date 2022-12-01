#include<stdio.h>
#include<stdlib.h>

int* inputData(int);
void mergeSort(int[],int, int);
void showData(int *,int);

int main() {
	int *pointer_array;
	int nRows;
	printf("MERGESORT\n num of rows: ");
	scanf("%i",&nRows);
	
	pointer_array=inputData(nRows);
	mergeSort(pointer_array,0,nRows-1);
	showData(pointer_array,nRows);
	return 0;
}

int* inputData(int nRows){
	int i=0;
	int *pointer_array;
	for(i=0; i<nRows; i++){
		printf("Num: ");
		scanf("%i",&*(pointer_array+i));		
	}
	return pointer_array;
}

void mergeSort(int array[],int firstVal, int lastVal) {
	if (firstVal < lastVal) 
	{
		int middleVal = (firstVal + lastVal) / 2;
		mergeSort(array, firstVal, middleVal);
		mergeSort(array, middleVal + 1, lastVal);

		int size=middleVal-firstVal+1;
		int aux[size];
		int k = 0, j = middleVal + 1;
		int i;
		for(i = firstVal; i <= middleVal; i++){
			aux[i-firstVal] = array[i];
		}
		
		i=firstVal;
		while (k < size && j <= lastVal){
			if(aux[k] < array[j]){
				array[i]=aux[k];
				k++;
			}else{
				array[i] =array[j];
				j++;
			}
			i++;
		}
				
		while (k < size){
			array[i] = aux[k];
			i++;
			k++;
		}			
	}
}

void showData(int *array, int nRows){
	int i=0;
	for(i=0; i<nRows; i++){
		printf("%i ",*(array+i));		
	}
}


