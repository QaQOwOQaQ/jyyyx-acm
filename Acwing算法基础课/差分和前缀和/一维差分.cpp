#include<iostream>
#include<string>
#include<algorithm>
#include<cmath>
#define ll long long

using namespace std;

int a[1010],b[1010];	//aΪԭ���飬bΪ������� 

int main()
{
	int n,m,l,r,d;
	cin >> n >> m;
	for(int i=1;i<=n;i++)	//ԭ�����ʼ�� 
		cin >> a[i];
		
	for(int i=1;i<=n;i++)	//������鶨�� 
		b[i] = a[i] - a[i-1];

	for(int i=1;i<=m;i++)
	{
		cin >> l >> r >> d;
		b[l]+= d;	
		b[r+1]-= d;
	}
	
	for(int i=1;i<=n;i++)
	{
		a[i] = a[i-1] + b[i];
	}
	for(int i=1;i<=n;i++)
		cout << a[i] << " ";
	cout << endl;
	
	return 0;
 } 
