#include<iostream>
#include<string>
#include<algorithm>
#include<cmath>
#define ll long long

using namespace std;

int a[1010][1010],b[1010][1010];	//aΪԭ���飬bΪǰ׺�� 
int main()
{
	int p,q,m,x1,x2,y1,y2;
	cin >> p >> q >> m;
	for(int i=1;i<=p;i++)	//ԭ����ĳ�ʼ�� 
	{
		for(int j=1;j<=q;j++)
			cin >> a[i][j];
			//b[i][j] = a[i][j] + b[i][j-1] + b[i-1][j] - b[i-1][j-1] ;
	}
	
	for(int i=1;i<=p;i++)	//ǰ׺������ 
	{
		for(int j=1;j<=q;j++)
			b[i][j] = a[i][j] + b[i][j-1] + b[i-1][j] - b[i-1][j-1] ;
	}
	
	for(int i=1;i<=m;i++)
	{
		cin >> x1 >> y1 >> x2 >> y2;
		cout << "ans:" ;
		cout << b[x2][y2] - b[x2][y1-1] - b[x1-1][y2] + b[x1-1][y1-1];
		cout << endl;
	}
	

	return 0;
	
 } 
