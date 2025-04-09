/// week08-2.cpp
/// 泡泡排序法的模擬, YouTube bubble sort dance 影片
#include <stdio.h>
int main()
{

    int a[10] = {9,8,7,6,5,4,3,2,1,0,};
    for(int i=0; i<10; i++) printf("%d ", a[i]);
    printf("\n");

    for(int k=0; k<9; k++){ ///重複很多次
        for(int i=0; i<10-1; i++){ /// 兩兩相鄰的跳舞
            if( a[i] > a[i+1] ){ ///左右的大小不對
                int temp = a[i]; ///就交換
                a[i] = a[i+1];
                a[i+1] = temp;
            }
        }
        for(int i=0; i<10; i++) printf("%d ", a[i] );
        printf("\n");
    }
}
