#include "func.h"

//它的工作原理是通过构建有序序列，对于未排序数据，在已排序序列中从后向前扫描，找到相应位置并插入。

//一般来说，插入排序都采用in - place在数组上实现。具体算法描述如下：
//1.从第一个元素开始，该元素可以认为已经被排序；
//2.取出下一个元素，在已经排序的元素序列中从后向前扫描；
//3.如果该元素（已排序）大于新元素，将该元素移到下一位置；
//4.重复步骤3，直到找到已排序的元素小于或者等于新元素的位置；
//5.将新元素插入到该位置后；
//重复步骤2~5。


int* Insertion_Sort(int* a, int len)
{
	int current;
	int preIndex;
	for (int i = 1; i < len; i++)
	{
		current = a[i];
		preIndex = i - 1;
		while (preIndex >= 0 && a[preIndex] > current)
		{
			a[preIndex + 1] = a[preIndex];
			preIndex--;
		}
		a[preIndex + 1] = current;
	}
	return a;
}

//通常采用in-place排序（即只需用到O(1)的额外空间的排序），因而在从后向前扫描过程中，需要反复把已排序元素逐步向后挪位，为最新元素提供插入空间
