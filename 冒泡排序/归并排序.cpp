#include"func.h"


int* Merge_Sort(int* a, int l, int mid, int r)
{	
	if(l >= r)
		return NULL;

	Merge_Sort(a, l,l+(mid-l)/2, mid);
	Merge_Sort(a, mid+1, mid + 1+ ((r-mid -1) / 2),r);
	Merge(a, l,mid, r);
	return a;
}

int* Merge(int* a, int l, int mid, int r)
{
	int Lmax = mid, Rmin = mid + 1;
	int* temp = new int[r - l+1];
	int cnt=0;

	while (l<=mid && Rmin<=r) 
	{
		temp[cnt++] = a[l] <= a[Rmin] ? a[l++] : a[Rmin++];
	}

	while (l <= Lmax)
	{
		temp[cnt++] = a[l++];
	}

	while (Rmin<= r)
	{
		temp[cnt++] = a[Rmin++];
	}

	memcpy(a, temp,sizeof(int)*(r - l+ 1));

	delete temp;

	return a;
}