#include<iostream>

//c++ 用于处理字符串
#include<string>  

//生成随机数
#include <stdlib.h> 
#include <time.h> 


using namespace std;

#define Bubble_Sort_Use 1
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


struct Student
{
	string name;
	int age;
	int score;
	string teacher_name[3];
};

struct Teacher
{
	string name;
	Student* stu;
};

void creat_student(Student* student);

void printf_teacher(void);

int sui_ji_shu_test(void);

void swap_test_show(void);

void swap2(int* a, int* b);

void swap1(int a, int b);

int show_fun01(void);

void cout_test(void);