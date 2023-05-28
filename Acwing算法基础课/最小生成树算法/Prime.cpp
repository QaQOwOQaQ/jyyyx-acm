#include <iostream>
#include <limits.h>
#include <cstring>
#include <algorithm>

using namespace std;

const int n = 9;

int INF = INT_MAX;	//û�б�ֱ�������ľ�����Ϊ���ֵ 
int vex[10];	//��СȨֵ�ߵ���� 
int lowcost[10]; 	//��СȨֵ�ı� 
bool check[10];

int G[9][9] = 
{
	{0, 4, INF, INF, INF, INF, INF, 8, INF}, 
	{4, 0, 8, INF, INF, INF, INF, 11, INF},
	{INF, 8, 0, 7, INF, 4, INF, INF, 2},
	{INF, INF, 7, 0, 9, 4, INF, INF, INF},
	{INF, INF, INF, 9, 0, 10, INF, INF, INF},
	{INF, INF, 4, 14, 10, 0, 2, INF, INF},
	{INF, INF, INF, INF, INF, 2, 0, 1, 6},
	{8, 11, INF, INF, INF, INF, 1, 0, 7},
	{INF, INF, 2, INF, INF, INF, 6, 7, 0}	
};

int main()
{
	//��ʼ�� 
	for(int i = 0; i < n; i ++ )
	{	
//		check[i] = 1;	//��ʼ�����е㶼û���߹� 
		lowcost[i] = G[0][i]; //��СȨֵ�߶��Ǵ�0������ 
		vex[i] = 0;	//0��Ϊ������СȨֵ�ߵ���� 
	}	
	memset(check, true, sizeof check);
	
	
	for(int p = 1; p < n; p ++ )	//��lowcost���ҵ�һ��Ȩֵ��С�ıߣ�����Ҫ�ڱ���0 
	{
		int now = INF;	//��ǰ״̬�µ���СȨֵ�� 
		int k = 0;	//������СȨֵ�ߵ���� 
		for(int j = 1; j < n; j ++ )	//�ҵ�ָ����С�ߵ����	
		{
			if(check[j] && lowcost[j] && lowcost[j] < now)	//lowcostΪ0��һ���� 
			{
				now = lowcost[j];	
				k = j;
			}	  		
		}	
		
		cout << "��ǰ�������Ķ���:" << k << endl;
		check[k] = false;	//�൱�ڵ�����k�Ѿ��б��ˣ������ٱ����� 
		
		for(int i = 0; i < n; i ++ )	//��������Ȩֵ��С�ı� 
		{
			if(check[i] && lowcost[i] && lowcost[i] > G[k][i])	
			{
				lowcost[i] = min(lowcost[i], G[k][i]);
				vex[i] = k;	
			}
		}
	
	cout << "��ǰȨֵ��С�ıߣ�" << endl; 
	for(int i = 0; i < n; i ++ )
		cout << lowcost[i] << " ";
	cout << endl;
	}
	


	for(int i = 0; i < n; i ++ )	printf("(%d, %d)�ߵ�ȨֵΪ��%d\n",vex[i], i, lowcost[i]);
	


	return 0;
}
