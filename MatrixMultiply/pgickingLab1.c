//CS350 LAB
//Student name: PEter Gicking
//Student ID: 906600590
//Date: 10/1/14
//Program name: pgickingLab1.c
//
//Algorithmn name: matrix  multiply
//Algorithm: brute force
//Worst case running time analysis: O(n^3)
//Possible Application area: Physics and graphics

#include <stdio.h>

int main(){

    //printf("Hellow world\n");

    FILE *fp, *ifp;
    int size = 0;
    fp = fopen("Data4.txt","r");
    ifp = fopen("matrix.out","w");

    fscanf(fp,"%d",&size);
    //printf("%d", size);

    int m1[size][size];
    int m2[size][size];
    int final[size][size];
    int tempMulti[size];
    int temp1 = 0;
    int temp2 = 0;
    int multiTemp = 0;
    int total = 0;

    //first array
    //j iterates row
    int i = 0;
    int j = 0;
    int m = 0;
    for( i = 0; i < size; ++i){
        for(j = 0; j < size; ++j){
            fscanf(fp,"%d",&m1[i][j]);
            //printf("m1[%d][%d] = %d ",i,j,m1[i][j]);
        }
    }

    //second array
    for(i = 0; i < size; ++i){
        for(j = 0; j < size; ++j){
            fscanf(fp,"%d",&m2[i][j]);
            //printf("m2[%d][%d] = %d ",i,j,m2[i][j]);
        }
    }

    //m1 row m2 column 
    for(i = 0; i < size; ++i){
        //m1 column m2 row
        for(j = 0; j < size; ++j){
          //
          for(m = 0; m < size; ++m){
            temp1 = m1[i][m];
            temp2 = m2[m][j];
            total += temp1 * temp2;
          }
            final[i][j] = total;
            temp1 = 0;
            temp2 = 0;
            total = 0;
        }
    }
    int k = 0; 
    for(i = 0; i < size; ++i){
        for(k = 0; k < size; ++k){
            //printf("%d ",final[i][k]);
            fprintf(ifp, "%d ", final[i][k]);
        }
        //printf("EOL\n");
        fprintf(ifp, "\n");
    }

    fclose(ifp);
    fclose(fp);

    

    return 0;

}
