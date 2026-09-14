#include <stdio.h>

int main(void) {
    int sonlar[10] = {50, 3, 90, 10, 20, 7, 100, 2, 45, 8};
    int hajmi = sizeof(sonlar) / sizeof(sonlar[0]);



    for ( int i = 0; i < hajmi; i++)
    {
        for ( int j = 0; j < hajmi - i -1; j++)
        {
            if (sonlar[j] > sonlar[j +  1 ])
            {
               int vaqtinchalik = sonlar[j];
               sonlar[j] = sonlar[j + 1];
               sonlar [j + 1 ] = vaqtinchalik;
        
               
            }
              
        }

        printf("Iter %d: ", i + 1);

        for (int k = 0; k < hajmi; k++)
        {
            printf("%d ", sonlar[k]);

            
        }

            printf("\n");
        

     
    }
    

    return 0;
}