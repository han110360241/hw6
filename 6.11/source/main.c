#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int arr[10];
    int n,i,a;

    printf("隨機輸入10個數字\n");
    for (i = 0; i < 10; i++)
    {
        scanf_s("%d", &arr[i]);
    }
    if (arr[0] < arr[1] && arr[1] < arr[2] && arr[2] < arr[3] && arr[3] < arr[4] && arr[4] < arr[5] && arr[5] < arr[6] && arr[6] < arr[7] && arr[7] < arr[8] && arr[8] < arr[9])
    {
        for (a = 0; a < 10; a++)
        {
            printf("%d", arr[a]);
        }
    }
    else
    {
        for (i = 0; i < 10; ++i) 
        {
            for (int j = 0; j < i; ++j) 
            {
                if (arr[j] > arr[i]) 
                {
                    int temp = arr[j];
                    arr[j] = arr[i];
                    arr[i] = temp;
                }
              
            }
        }
    }
    for (a = 0; a < 10; a++)
    {
        printf("%d", arr[a]);
    }

        
   

    
  





        system("pause");
        return 0;

}