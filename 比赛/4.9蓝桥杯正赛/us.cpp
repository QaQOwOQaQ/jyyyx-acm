#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

int main()
{
    char c;
    
    c = -1;
    printf("�з�����:%d -> �޷�����:%d\n", c, (unsigned char)c);
    c = -128;	
	printf("�з�����:%d -> �޷�����:%d\n", c, (unsigned char)c);
	cout << "--------------------------------------------------\n";
    c = 127;
    printf("�з�����:%d -> �޷�����:%d\n", c, (unsigned char)c);
    c = 64;
    printf("�з�����:%d -> �޷�����:%d\n", c, (unsigned char)c);
    c = 0;
    printf("�з�����:%d -> �޷�����:%d\n", c, (unsigned char)c);
   
   
   
   
    /*
    int i = -1;
    printf("char = %d", i);
    
    unsigned int i = -1;
    printf("unsigned int = %d", i);
    
    unsigned long long c = -1;
    printf("unsigned long long = %d", ll);
    
    long long c = -1;
    printf("long long = %d", ll);
    */
    return 0;
}
