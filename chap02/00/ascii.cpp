#include <stdio.h>
int main()
{
    char c;
    printf("����һ���ַ�: ");
 
    // ��ȡ�û�����
    scanf("%c", &c);  
    
    // %d ��ʾ����
    // %c ��ʾ��Ӧ�ַ�
    printf("%c �� ASCII Ϊ %d", c, c);
    return 0;
}
