#include<iostream>
#include<algorithm>

using namespace std;

const int N=1e5+7;

int t[N],a[N],n,m;
int main()

{
	cin>>n;
	for(int i=1;i<=n;i++)
		cin>>a[i],t[i]=a[i];

	sort(t+1,t+n+1);
  
	//����ͬԪ�ظ��� 
	m=unique(t+1,t+n+1)-t-1;//��Ϊ����������t[0]�ĵ�ַ��ʵ���������ַ(*t+0)������û�д��Ԫ�صģ�����Ҫ��ȥ��t+1) 
	cout << "m:" << m << endl;
  
	for(int i=1;i<=n;i++)
		a[i]=lower_bound(t+1,t+1+m,a[i])-t;
    
    //��ɢ��֮��Ľ�� 
    for(int i=1;i<=n;i++)
    	cout << a[i] << " ";
}
