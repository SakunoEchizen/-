#include<iostream>
#include<string>  //c++ 用于处理字符串

using namespace std;

#define Bubble_Sort_Use 0
#define Selection_Sort_Use 0
#define Insertion_Sort_Use 0
#define Shell_Sort_Use 0

int* Bubble_Sort(int* a,int len);

int* Selection_Sort(int* a,int len);

void cout_test(void);

int* Insertion_Sort(int* a, int len);

int* Shell_Sort(int* a, int len);

void* printf_array(int* a, int len);

int* Merge_Sort(int * a,int l,int mid, int r);

int* Merge(int* a,int l,int mid, int r);

void ptr_test(void);