#include <iostream>
#include <algorithm>
#include <cstring>

using namespace  std;

int main()
{
	int a, b, y1, y2;// < >=
	
	cin >> a >> b >> y1 >> y2;
	
	if(y1 < a && y2 < a)//�����ܽ� 
	{
		printf("%d-N %d-N\n", y1, y2);
		puts("zhang da zai lai ba");
	}
	else if(y1 > a && y2 > a)//���ܽ� 
	{
		printf("%d-Y %d-Y\n", y1, y2);
		puts("huan ying ru guan");
	}
	else if(y1 < a && y2 >= b)//y2��ͬy1 
	{
		printf("%d-Y %d-Y\n", y1, y2);
		printf("qing %d zhao gu hao %d", 2, 1);
	}
	else if(y2 < a && y1 >= b)//y1��ͬy2 
	{
		printf("%d-Y %d-Y\n", y1, y2);
		printf("qing %d zhao gu hao %d", 1, 2);
	}

	else if(y1 >= a && y2 < a && y1 < b)//ֻ��y1�ܽ� 
	{
		printf("%d-Y %d-N\n", y1, y2);
		printf("%d: huan ying ru guan", 1);
	}

	else if(y2 >= a && y1 < a && y2 < b)//ֻ��y2�ܽ� 
	{
		printf("%d-N %d-Y\n", y1, y2);
		printf("%d: huan ying ru guan", 2);
	}

		
	return 0;
}
