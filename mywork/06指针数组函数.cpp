#include <iostream>
using namespace std;
void bubblesort(int * arr,int len)
{
    for (int i = 0; i < len - 1;i++)
    {
        for (int j = 0;j < len -i -1;j++)
        {
            //如果j＞j+1 交换数字
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
{//案例:封装一个函数,利用冒泡排序,实现对整形数组的升序排序
/*1.创建数组
2.创建函数,实现冒泡排序
3.打印排序后的数组*/
    int arr[10] = {4,3,6,9,1,2,10,8,7,5};
    int len = sizeof(arr) / sizeof(arr[0]);
    bubblesort(arr,len);
    printarray(arr,len);

    system("pause");
    return 0;

}