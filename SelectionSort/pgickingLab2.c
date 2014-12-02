//PETER GICKING
//9006600590
//10/8/14
//pgickingLab2.c
//
//Algorithmn: SelectionSort
//Algorithn: Brute force
//Worst case running time analysis: O(n^2)
//Possible application area: Protein folding sorting chains

#include <stdio.h>

int main(){

    FILE *fp, *ifp;
    fp = fopen("data1.txt","r");
    ifp = fopen("selectionsort.out","w");

    int i = 0;
    int j = 0;
    int k = 0;
    int count = 0;
    int temp = 0;
    int size = 0;
    int SmallestIndex = 0;
    int current = 0;
    int currentNum = 0;
    int Min;

    fscanf(fp,"%d",&size);

    int Unsorted[size];
    int Sorted[size];


    for(k = 0; k < size; ++k){
        fscanf(fp,"%d",&Unsorted[k]);
    }

    for(i = 0; i < size; ++i){
        //currentNum = Unsorted[0];
        Min = i;
        
        for(j = i + 1; j < size; ++j){
            //find smallest element
            if(Unsorted[j] < Unsorted[Min]){
                //Store the index of the smallest element
                //And the number
                //current = j;
                //currentNum = Unsorted[i];
                Min = j;
                printf("Smallest Number: %d  ", Unsorted[Min]);
            }
            //Once you have smallest, put it in the sorted array;
            
        }
        //Sorted[i] = currentNum; 
        //Swap
            temp = Unsorted[i];
            Unsorted[i] = Unsorted[Min];
            Unsorted[Min] = temp;
    }


    for(i = 0; i < size; ++i){
       fprintf(ifp,"%d ",Unsorted[i]); 
       //printf("%d ",Unsorted[i]);
    }
    fprintf(ifp, "\n");

    fclose(fp);
    fclose(ifp);

    return 0;
}

