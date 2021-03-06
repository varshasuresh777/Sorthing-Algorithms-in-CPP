#include<iostream>
using namespace std; 
void swap(int *a, int *b) {
  int t = *a;
  *a = *b;
  *b = t;
}
int partition(int array[],int low, int high){
    int pivot = array[high]; 
    int i = (low-1); 
    for(int j= low; j<high;j++){
        if(array[j]<pivot){
            i++;
            swap(&array[i], &array[j]);
        }
    }
    swap(&array[i + 1], &array[high]);
    return (i + 1);
}
void printArray(int array[], int size) {
  for (int i = 0; i < size; ++i) {
    cout<<array[i]<<" ";
  }
  cout<<"\n";
}
void quicksort(int array[], int low, int high) {
  if (low < high) {
      int pi = partition(array, low, high);
      quicksort(array, low, pi - 1);
      quicksort(array, pi + 1, high); }
  }
int main()
{
    int arr[] = {9, 7, 5, 11, 12, 2, 14, 3, 10, 6};
    int n =sizeof(arr) / sizeof(arr[0]);
    quicksort(arr,0,n-1);
    printf("sorted Array\n");
    printArray(arr,n);
    return 0;   }
