#include <iostream>
using namespace std;
void bubblesort(int * arr,int len)
{
    for (int i = 0; i < len - 1;i++)
    {
        for (int j = 0;j < len -i -1;j++)
        {
            //���j��j+1 ��������
            if (arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
void printarray(int *arr,int len)
{
    for (int i = 0; i <len;i++)
    {
        cout << arr[i] << endl;

    }
}
int main()
{//����:��װһ������,����ð������,ʵ�ֶ������������������
/*1.��������
2.��������,ʵ��ð������
3.��ӡ����������*/
    int arr[10] = {4,3,6,9,1,2,10,8,7,5};
    int len = sizeof(arr) / sizeof(arr[0]);
    bubblesort(arr,len);
    printarray(arr,len);

    system("pause");
    return 0;

}