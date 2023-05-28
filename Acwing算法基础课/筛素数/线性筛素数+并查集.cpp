#include<iostream>
#include<algorithm>
#include<cstring>
#define maxn 100010

using namespace std;

bool isPrime[maxn];
int prime[maxn],pre[maxn],cut,ans;

void getPrime(int n)
{
	memset(isPrime,1,sizeof(isPrime));
	isPrime[0] = isPrime[1] = 0;
	for(int i=2;i<=n;i++)
	{
		if(isPrime[i])
			prime[++cut] = i;
		for(int j=1;j<=cut && prime[j]*i<=n ;j++)
		{
			isPrime[i*prime[j]] = 0;
			if(i % prime[j] == 0)
				break;
		}
	}
}

int find(int x)
{
	if(pre[x] == x)
		return x;
	else
		return pre[x] = find(pre[x]);
}

void unite(int x,int y)
{
	int fx = find(x);
	int fy = find(y);
	if(fx != fy)
		pre[fx] = fy;	
} 

int main()
{
	int a,b,p,l,r,s;
	cin >> a >> b >> p;
	for(int i=a;i<=b;i++)	
		pre[i] = i;
		
	getPrime(10*b);
	
//	cout << "Prime:" << endl;
//	for(int i=1;i<=10;i++)
//		cout << prime[i] << " ";
//	cout << endl;
	
	for(int i=1;;i++)	//�ҵ������ӵ���߽� 
	{
		if(prime[i] >= p)
		{
			l = i;
			break;			
		}

	}

	for(int i=1;;i++)	//�ҵ������ӵ��ұ߽� 
	{
		if(prime[i] == b)
		{
			r = i;
			break;		
		}
		if(prime[i] > b)
		{
			r = i-1;
			break;
		}

	}
//	cout << "�߽�" << l << " " << r << endl;

	for(int i=l;i<=r;i++)	//�������������� 
	{
		int pp = 0; 
		while(pp*prime[i] < a)	pp++;
		while((pp+1)*prime[i] <= b)	
		{
			unite(prime[i]*pp,prime[i]*(pp+1));
			pp++;
		}
	}
	
	for(int i=a;i<=b;i++)
	{
		if(pre[i] == i)
			ans++;
	}
	cout << ans << endl;
	return 0;	
} 
