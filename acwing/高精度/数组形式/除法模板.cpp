#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

const int N=1e5;
string s;
long long int b;
long long int ans[N],a[N];
int main()
{
	cin>>s>>b;							//a�Ǳ�����  b�ǳ��� 
	int len=s.length();	
	for(int i=0;i<len;i++)
		a[i+1]=s[i]-'0';				//����洢 
	
	//
	cout << "����" << endl;
	for (int j=1;j<=len;j++)
		cout << a[j];
	cout << endl;
	
	
	
	//
	long long int tmp=0;				//�����м��������longlong 
	for(int i=1;i<=len;i++)
	{
		a[i]+=tmp*10;					//�ۼ�ǰ��ʣ���� 
		ans[i]=a[i]/b;					//�������������Ϊ����������������0 
		tmp=a[i]-ans[i]*b;				//����ʣ�µ��� 
	}
	int i;
	for(i=1;i<len;i++)
		if(ans[i]!=0)					//��0 
			break;
	for(;i<=len;i++)
		cout<<ans[i];					//��� 
	return 0;
}

