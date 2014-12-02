//CS350 Homework 4
//Student Name: Peter Gicking
//Student ID: 906600590
//Date: October 24, 2014
//Program 1 Name: Heapsort
//Algorithm 1 Name: Heapsort
//Algorithm 1 family: Divide and Conquer
//Worst Case Running Time Analysis: n lg n
//Possible Application Area: Sorting

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

struct heap
{
    int *S;
    int heapsize;
};

void siftdown(struct heap *H, int i);
int root(struct heap *H);
void removekeys(int n, struct heap *H, int S[]);
void makeheap(int n, struct heap *H);

void siftdown(struct heap *H, int i)
{
    int parent, largerchild;
    int siftkey;
    bool spotfound;
    int t;

    siftkey = H->S[i];
    parent = i;
    spotfound = false;
    while((2*parent)+1 <= H->heapsize && !spotfound)
    {
        if((2*parent)+2 <= H->heapsize && H->S[2*parent+1] < H->S[2* parent+2])
        {
            largerchild = (2*parent) + 2;
        }
        else
            largerchild = (2*parent) + 1;

        if(siftkey < H->S[largerchild])
        {
            H->S[parent] = H->S[largerchild];
            parent = largerchild;
        }
        else
            spotfound = true;
    }
    H->S[parent] = siftkey; 
    //printf("\nparent: %d || index: %d ", H->S[parent], parent);
    //printf("\n");
    //for(t = 0; t < H->heapsize; ++t)
    //{
    //    printf(" %d", H->S[t]);
    //}
}

int root(struct heap *H)
{
    int keyout;

    keyout = H->S[0];
    H->S[0] = H->S[H->heapsize];
    H->heapsize = H->heapsize - 1;
    siftdown(H, 0);
    return keyout;
}

void removekeys(int n, struct heap *H, int S[]) 
{
  FILE *outfile = fopen("heapsort.out", "w");
  int i;

  //printf("\nSorted array: ");
  for (i = n; i > 0; --i) {
    S[i] = root(H);
    //printf(" %d", S[i]);
  }
  //printf("\n");

//  printf("\nWriting to file");
  for (i=1; i<=n; ++i) {
    fprintf(outfile, "%d ", S[i]);
//    printf(" %d",H->S[i]);
  }
//  printf("\n");
}
 
void makeheap(int n, struct heap *H) 
{
  FILE *outfile = fopen("heapsort.out", "w");
  int i;
 
  H->heapsize = n;
  for (i = n/2; i >= 0; --i) {
    siftdown(H, i);
  }
//  for (i=0; i<n; ++i) {
//    fprintf(outfile, "%d ", H->S[i]);
//  }

//   printf("\n\n");
//  for (i=0; i<10; ++i) {
//    printf("Value: %d: ", H->S[i]);
//    if(i*2+1 <= 9) {
//      printf("Left child: %d\n", H->S[i*2+1]);
//    }
//    if(i*2+2 <= 9) {
//      printf("Right child: %d\n", H->S[i*2+2]);
//    }
//  } 
}

int main()
{
    FILE *fp, *ifp;
    fp = fopen("data1.txt","r");

    int i;
    int n;
    struct heap myHeap;

    if(!fp)
    {
        exit(1);
    }

    fscanf(fp, "%d", &n);

    myHeap.S = malloc(n*sizeof(int));
    //myHeap.heapsize = n;
   for (i=0; i<n; ++i) 
   {
     fscanf(fp, "%d", &myHeap.S[i]);
   }
  //printf("\nn: %d",n);    
  makeheap(n, &myHeap);
  removekeys(n, &myHeap, myHeap.S);
}


