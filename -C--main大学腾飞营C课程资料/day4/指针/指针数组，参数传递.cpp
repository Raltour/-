#include<stdio.h> 
void printArray(int *arr, int size) 
//void printArray(int arr[], int size) 
//������һ����Ϊ printArray �ĺ���������һ������ָ�� arr ��һ������ size ��Ϊ������
// int arr[], �����������飬��ʵ��һ��ָ�롣 
// ������int *arr���ǲ���ֱ�Ӵ𰸺ͽ����Ҳ�ǶԵģ���������������һ����˼���԰� 
{
    for (int i = 0; i < size; i++) { // �������飬�ӵ�һ��Ԫ�ص����һ��Ԫ��
        printf("%d ", arr[i]); // ��ӡ��ǰԪ�ص�ֵ
    }
    printf("\n"); // ��ӡ���з�����ʾ�������
}

int main() {
    int arr[] = {1, 2, 3, 4, 5}; // ��������ʼ��һ����������
    int size = sizeof(arr) / sizeof(arr[0]); // ��������Ĵ�С����Ԫ�ظ���
    printArray(arr, size); // ���ú���printArray��������arr�����С��Ϊ�������ݸ�����
    return 0; // ����������������־����ʾ��������ִ�н���
}

