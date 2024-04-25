#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;

const int n = 14;

struct edge	
{
	int b, e;	//һ���ߵ������յ� 
	int v;	//Ȩֵ 
	edge() {}
	edge(int x,int y, int z) : b(x), e(y), v(z) {}
}E[n], res[n];	//�߼�����,��С�������ı߼�����  


int par[n + 1];	//����ǰ������,�������ж��Ƿ��л� 
int cut;	//��¼��С�������ı߼�����Ĵ�С 

bool cmp(const edge &x, const edge &y)
{
	if(x.v == y.v)
		return x.b < y.b;
	return x.v < y.v;
}

int find(int x)
{
	while(par[x] != x)
		x = par[x];
	return x;
}

int main()
{	
	for(int i = 0; i < n; i ++ )	//��ʼ���߼�����,�������·��в������� 
	{
		char x, y;
		int t;
		cin >> x >> y >> t;
		E[i] = edge(x - 'a' + 1, y - 'a' + 1, t);	//��a����1,b����2,�����Դ����� 
	}	

	sort(E, E + n, cmp);	//�����б߰�Ȩֵ��������
	
	for(int i = 0; i <= n; i ++ )	par[i] = i;	//��ʼ��ǰ�������ǰ��Ϊ�Լ� 	
	
	cout << "�����߼���������:" << endl;
	for(int i = 0; i < n; i ++ )
	{
		char c1 = E[i].b + 'a';
		char c2 = E[i].e + 'a';
		cout << c1 << " " << c2 << " " << E[i].v << endl; 
//		cout << E[i].b << " " << E[i].e << " " << E[i].v << endl;			
	}
	cout << endl; 

	for(int i = 0; i < n; i ++ )	//�������б�
	{
		int l = find(E[i].b), r = find(E[i].e);	//Ҫ�ҵ��ʼ��ǰ���ڵ�,������Ϊ�Ǹ��ڵ� 
		if(l != r)	//��������γɻ� 
		{
			par[r] = l;	//�޸�ǰ������	
			res[cut ++] = edge(E[i].b, E[i].e, E[i].v);
		}
	} 
	
	//
	cout << "��С�������߼���������:" << endl;
	for(int i = 0; i < cut; i ++ )
	{
		char c1 = res[i].b + 'a';
		char c2 = res[i].e + 'a';
		cout << c1 << " " << c2 << " " << res[i].v << endl; 
//		cout << res[i].b << " " << res[i].e << " " << res[i].v << endl;		
	}
	cout << endl; 
	//	
	
	

	return 0;	
} 


/*�������� 
a b 4
a h 8
b h 11
h i 7
i c 2
b c 8
h g 1
g f 2
c f 4
c d 7
d f 14
d e 9
f e 10
i g 6
*/

