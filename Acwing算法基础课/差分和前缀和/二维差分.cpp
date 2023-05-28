#include<iostream>
#include<string>
#include<algorithm>
#include<cmath>
#define ll long long

using namespace std;

int a[1010][1010],b[1010][1010];	//aΪԭ���飬bΪ�������
 
void operate(int x1,int y1,int x2,int y2,int d)	//��ԭ����[x1,y1],[x2,y2]֮���Ԫ�ؼ���d 
{
	b[x1][y1]+= d;
	b[x1][y2+1]-= d;
	b[x2+1][y1]-= d;
	b[x2+1][y2+1]+= d; 
} 
int main()
{
	int p,q,m,x1,x2,y1,y2,d;
	cin >> p >> q >> m;
	
	for(int i=1;i<=p;i++)	//ԭ�����ʼ�� 
	{
		for(int j=1;j<=q;j++)
			cin >> a[i][j];
	}
	
	for(int i=1;i<=p;i++)	//��������ʼ�� 
	{
		for(int j=1;j<=q;j++)
			b[i][j] = a[i][j] - a[i-1][j] - a[i][j-1] + a[i-1][j-1]; 
	}

	for(int i=1;i<=m;i++)	//��������޸� 
	{
		cin >> x1 >> y1 >> x2 >> y2 >> d;
		operate(x1,y1,x2,y2,d);
	}
	
	for(int i=1;i<=p;i++)	//��������ǰi,j��͵���ԭ����a[i][j] 
	{
		for(int j=1;j<=q;j++)
			b[i][j]+= b[i-1][j] + b[i][j-1] - b[i-1][j-1]; 
	}
	
	for(int i=1;i<=p;i++)
	{
		for(int j=1;j<=q;j++)
			cout << b[i][j] << " ";
		cout << endl;
	}
	return 0;
	
 } 
