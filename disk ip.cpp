#include<stdio.h>
int main()
{
	int n=100;
	int block_size=512;
	int fcb=1;
	int ib=1;
	int count_start=0;
	int count_end=0;
	int count_io=0;
	int linked_start=0;
	int linked_end=n-1;
	int linked_io=0;
	int indexed_io=0;
	count_end++;
	linked_start++;
	indexed_io++;
	int mid=n/2;
	if(count_end<mid)
	{
		count_end++;
		count_io++;
	}
	indexed_io++;
	count_end++;
	linked_end++;
	indexed_io++;
	count_io+=(count_end-count_start+1);
	linked_io+=(linked_end-linked_start+1);
	indexed_io+=ib;
	printf("contagious allocation:%d disk operations\n`",count_io);
	printf("linked allocation:%d disk i/o operations \n",linked_io);
	printf("indexed allocation:%d disk i/o operations\n",indexed_io);
	return 0;
}
