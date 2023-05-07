#include <stdio.h>
#include <stdlib.h>
void main()
{
    int menu;
    do{
        int tahun, angka[12]={31,28,31,30,31,30,31,30,31,30,31,30}, bilangan;
        char NamaBulan[12][10]={"Januari", "Februari", "Maret", "April", "Mei", "Juni", "Juli", "Agustus", "September", "Oktober", "November", "Desember"};
        system("cls");
        printf("Menu\n");
        printf("1.Tahun Kabisat\n");
        printf("2.Bulan yang jumlah tanggalnya 31\n");
        printf("pilihan:");
        scanf("%d", &menu);
        switch(menu){
        case 1:
            printf("Masukkan Tahun :"); scanf("%d", &tahun);
            if(tahun%4==0){
                printf("\n\ntahun kabisat");
        }else{
            printf("\n\nBukan tahun kabisat");}
            getch();
            break;
        case 2:
            printf("Masukkan no bulan "); scanf("%d", &bilangan);
            printf("\n\nPada bulan %s jumlah hari adalah %i", NamaBulan[bilangan-1], angka[bilangan-1]);
            getch();
            break;
        default:
            printf("\nInputan tidak valid");
        }
    }while(menu!=2);//while menu tidak sama dengan 6
}
