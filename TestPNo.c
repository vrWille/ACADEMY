#include <stdio.h>

int main(){

    long long int pno;
    int yy,mm,dd,no, chkNo;

    // get personal number from user
    // 6209151103
    scanf("%lld",&pno);

    // split the number in yy, mm, dd, no, chkNo
    //get year
    yy = pno / 100000000;
    //get month
    mm = (pno / 1000000) - ((pno / 100000000)* 100);
    //get day
    dd = (pno / 10000) - ((pno / 1000000) * 100);
    //get no
    no = (pno / 10) - ((pno / 10000) * 1000);


    printf("%d \n", yy);
    printf("%d \n", mm);
    printf("%d \n", dd);
    printf("%d \n", no);

    //check month
    if(mm > 12){printf("Månaden är inte giltig!");}
    //check day
    switch(mm){
        
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            if(dd > 31){printf("Dagen är inte giltigt!");}
        break;      
        case 4: case 6: case 9: case 11:
            if(dd > 30){printf("Dagen är inte giltigt!");}
        break;
        case 2:
                 if(dd > 29){printf("Dagen är inte giltigt!");}
        break;

    } 
    



    return 0;
}