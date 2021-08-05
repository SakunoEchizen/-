#include"func.h"

//Shell��������һ��ͻ��O(n2)�������㷨���Ǽ򵥲�������ĸĽ��档�����������Ĳ�֮ͬ�����ڣ��������ȱȽϾ����Զ��Ԫ�ء�ϣ�������ֽ���С��������



//�Ƚ�����������ļ�¼���зָ��Ϊ���������зֱ����ֱ�Ӳ������򣬾����㷨������
//ѡ��һ����������t1��t2������tk������ti > tj��tk = 1��
//���������и���k�������н���k ������
//ÿ�����򣬸��ݶ�Ӧ������ti�����������зָ�����ɳ���Ϊm �������У��ֱ�Ը��ӱ����ֱ�Ӳ������򡣽���������Ϊ1 ʱ������������Ϊһ�������������ȼ�Ϊ�������еĳ��ȡ�

int* Shell_Sort(int* a, int len)
{
	int step, preIndex, current;//stepΪ������Ҳ����������ĸ�����preIndex�ǵ�ǰҪ����Ԫ�ص�ǰһ����current��¼��ǰԪ��
	for (step = len / 2; step > 0; step = step / 2)//���ó��ȼ����step���������������
	{
		for (int i = 0; i < step; i++)// i��������ı��
		{
			for (int j = i+step; j < len; j = j + step)	//j�ǵ�i��Ԫ�ص��±꣬��Ϊ���飬����ÿ��С��Ԫ�����step
			{
				if(a[j]<a[j-step])	//���a[j] < a[j-step]����Ѱ��a[j]λ�ã������������ݵ�λ�ö����ơ�
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