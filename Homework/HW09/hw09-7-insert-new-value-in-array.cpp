/*
    จากอาเรย์เดิม ที่มีค่าอยู่ก่อนแล้วคือ { 9, 2, 6, 1, 7 } จงเขียนโปรแกรมเพื่อรับค่าจากผู้ใช้อีก N จำนวน เพื่อนำไปต่อในอาเรย์เดิม และจัดเรียงใหม่จากน้อยไปยังมาก
    
    Test case:
        Enter new element of Array :
            4
        Input :
            3
        Input :
            4
        Input :
            2
        Input :
            5
    Output:
        Old Array: 9 2 6 1 7
        New Array: 1 2 2 3 4 4 5 6 7 9
*/
#include <stdio.h>

int main() {
    int oldArray[] = { 9, 2, 6, 1, 7 } ;
    int n, i, j, temp ;

    printf( "Enter new element of Array : \n" ) ;
    scanf( "%d", &n ) ;

    int newArray[n + 5] ; // รวมอาเรย์เดิมกับอาเรย์ใหม่
    
    // คัดลอกอาเรย์เดิมไปยังอาเรย์ใหม่
    for (i = 0; i < 5; i++) {
        newArray[i] = oldArray[i];
    }//end for

    // รับค่าจากผู้ใช้และเพิ่มเข้าอาเรย์ใหม่
    printf( "Input :\n " ) ;
    for ( i = 5 ; i < n + 5 ; i++ ) {
        scanf( "%d", &newArray[i] ) ;
    }//end for  

    // ใช้ Bubble Sort เพื่อจัดเรียงใหม่
    for  ( i = 0 ; i < n + 5 - 1 ; i++ ) {
        for ( j = 0 ; j < n + 5 - 1 - i ; j++ ) {
            if ( newArray[j] > newArray[j + 1] ) {
                // สลับค่า
                temp = newArray[j] ;
                newArray[j] = newArray[j + 1] ;
                newArray[j + 1] = temp ;
            }//end if
        }//end for
    }//end for

    printf( "Old Array: " ) ;
    for ( i = 0 ; i < 5 ; i++ ) {
        printf( "%d ", oldArray[i] ) ;
    }//end for

    printf( "\nNew Array: " ) ;
    for ( i = 0 ; i < n + 5 ; i++ ) {
        printf( "%d ", newArray[i] ) ;
    }//end for
 
    return 0 ;
}//end function
