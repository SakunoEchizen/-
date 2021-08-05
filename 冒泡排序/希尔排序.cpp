#include"func.h"

//Shell发明，第一个突破O(n2)的排序算法，是简单插入排序的改进版。它与插入排序的不同之处在于，它会优先比较距离较远的元素。希尔排序又叫缩小增量排序。



//先将整个待排序的记录序列分割成为若干子序列分别进行直接插入排序，具体算法描述：
//选择一个增量序列t1，t2，…，tk，其中ti > tj，tk = 1；
//按增量序列个数k，对序列进行k 趟排序；
//每趟排序，根据对应的增量ti，将待排序列分割成若干长度为m 的子序列，分别对各子表进行直接插入排序。仅增量因子为1 时，整个序列作为一个表来处理，表长度即为整个序列的长度。

int* Shell_Sort(int* a, int len)
{
	int step, preIndex, current;//step为步长，也就是子数组的个数。preIndex是当前要排序元素的前一个，current记录当前元素
	for (step = len / 2; step > 0; step = step / 2)//利用长度计算出step（子数组个数），
	{
		for (int i = 0; i < step; i++)// i是子数组的编号
		{
			for (int j = i+step; j < len; j = j + step)	//j是第i组元素的下标，因为分组，所以每个小组元素相距step
			{
				if(a[j]<a[j-step])	//如果a[j] < a[j-step]，则寻找a[j]位置，并将后面数据的位置都后移。
				{ 
					current = a[j];
					preIndex = j - step;
					while (preIndex >= 0 && a[preIndex] > current)
					{
						a[preIndex + step] = a[preIndex];
						preIndex=preIndex-step;
					}
					a[preIndex + step] = current;
				}
			}
		}
	}
	return a;
}