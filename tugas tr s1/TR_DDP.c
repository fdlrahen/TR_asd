#include <stdio.h>
#include <conio.h>
#include <windows.h>
COORD coord={0,0};

//-------------------------Login------------------------------
int main()
{
//loading bar
    char a = 177, b = 219, str[]="54321";
    system("color 79");
    gotoxy(56,11);printf("Ultramen Here");
    gotoxy(58,12);printf("loading...");
    gotoxy(36,14);
    for (int bar = 0; bar < 50; bar++)
        printf("%c", a);
    gotoxy(36,14);
    for (int bar= 0; bar < 50; bar++) {
        printf("%c", b);
        Sleep(75);
    }
//pasword
    char user[5]="tugas",pass[8]="kematian",word[8],name[5];
    int i,j,k,l,p,input,cek,nilai,salah;
    p=0;
    salah=0;
    awal:
    system("cls");
    printf("\n\n\n\n\n\n\n\n");
    printf("\t\t\t\t\t");
    printf("--SELAMAT DATANG!--\n");
    printf("\n\t\t\t\t\t");
    printf("USERNAME  : ");
    scanf("%s",&name);
    cek=0;
    for(i=0;i<5;i++){
        if(name[i]==user[i]){
            cek=cek+1;
        }else{
            cek=0;
        }
    }
    printf("\n\t\t\t\t\t");
    printf("PASSWORD  : ");
    for(i=0;i<8;i++){
        input=getch();
        if(input==13){
            goto cek;
        }else{
            word[i]=input;
            printf("*");
        }
    }
    nilai=0;
    for(i=0;i<8;i++){
        if(pass[i]==word[i]){
            nilai=nilai+1;
        }else{
            nilai=0;
        }
    }
    getch();
    cek:
    if(cek==5&&nilai==8){
        printf("\n\n\t\t\t\t  ");
        printf("Selamat datang di Tugas Kematian");
        printf("\n\n\t\t\t\t       ");
        printf("Klik ENTER untuk lanjut");
        getch();
        system("cls");
        return home();
    }else{
        if(cek==5){
            printf("\n\n\t\t\t\t\t   ");
            printf("Password salah");
            goto bawah;
        }else if(nilai==8){
            printf("\n\n\t\t\t\t\t   ");
            printf("Username salah");
            goto bawah;
        }else{
            printf("\n\n\t\t\t\t     ");
            printf("Username dan Password salah");
            goto bawah;
        }
    }
    bawah:
    salah=salah+1;
    if(salah==3){
        printf("\n\n\t\t  ");
        printf("Anda telah salah menginput username dan password sebanyak 3 kali\n");
        printf("\n\t\t\t\t\tAnda akan keluar dalam ");
        for( i =1 ; i<= 5; i++ ) {
            gotoxy(51, 20);
            printf("%c", str[p++]);
            Sleep(1000);
            if(p == strlen(str))
            p = 0;
        }
        system("cls");
        return 0;
    }else{
        printf("\n\n\t\t\t\t     ");
        printf("Klik ENTER untuk mengulangi");
        printf("\n\n\t\t\t\t  ");
        printf("Anda memiliki %d kesempatan lagi!",3-salah);
        getch();
        goto awal;
    }
    return 0;
}
void gotoxy(int x,int y){
    coord.X=x;
    coord.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}
//-------------------------Loading------------------------------
void hidecursor()
{
    HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO info;
    info.dwSize = 100;
    info.bVisible = FALSE;
    SetConsoleCursorInfo(consoleHandle, &info);
}
void showcursor()
{
    HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO info;
    info.dwSize = 20;
    info.bVisible = TRUE;
    SetConsoleCursorInfo(consoleHandle, &info);
}
int loading()
{
    hidecursor();
    int i;
    char str[] ="\|/-";
    int j=0;
    gotoxy(52, 10);
    printf("loading...");
    for( i =1 ; i<= 10; i++ )
    {
    gotoxy(50, 10);
    printf("%c", str[j++]);
    Sleep(200);
    if(j == strlen(str))
        j = 0;
    }
    system("cls");
    showcursor();
    return 0;
}
//-------------------------Menu------------------------------
int home()
{
    int i,pilih;
    printf("\n\n\n\n\n\n\n");
    printf("\t\t\t\t  ");
    for(i=0;i<43;i++){
        printf("=");
    }
    printf("\n");
    printf("\t\t\t\t  ");
    printf("=  TR Dasar-Dasar Pemrograman Kelompok 5  =\n");
    printf("\t\t\t\t  ");
    for(i=0;i<43;i++){
        printf("=");
    }
    printf("\n");
    printf("\t\t\t\t  ");
    printf("=  Menu :                                 =\n");
    printf("\t\t\t\t  ");
    printf("=  1. Rumah Pola                          =\n");
    printf("\t\t\t\t  ");
    printf("=  2. Bank                                =\n");
    printf("\t\t\t\t  ");
    printf("=  3. Bendera                             =\n");
    printf("\t\t\t\t  ");
    printf("=  4. Author                              =\n");
    printf("\t\t\t\t  ");
    printf("=  5. Exit                                =\n");
    printf("\t\t\t\t  ");
    for(i=0;i<43;i++){
        printf("=");
    }
    printf("\n");
    printf("\t\t\t\t  ");
    printf("Pilih : ");
    scanf("%d",&pilih);
    switch(pilih){
    case 1:
        system("cls");
        loading();
        rumah();
        break;
    case 2:
        system("cls");
        loading();
        bank();
        break;
    case 3:
        system("cls");
        loading();
        bendera();
        break;
    case 4:
        system("cls");
        loading();
        author();
        break;
    case 5:
        system("cls");
        keluar();
        break;
    default:
        printf("\t\t\t\t  ");
        printf("Inputan salah\n");
        printf("\t\t\t\t  ");
        printf("Tekan ENTER untuk mengulang");
        getch();
        system("cls");
        return home();
    }
    return 0;
}
//-------------------------Rumah-Pola------------------------------
int rumah()
{
    printf("\n\n");
    printf("\t==============================\n");
    printf("\t=         Rumah Pola         =\n");
    printf("\t==============================\n");
    int i,j,k,l,tinggi,jeda,exit;
    jeda=10;
    char bahan;
    printf("\t Masukkan tinggi : ");
    scanf("%d",&tinggi);
    printf("\t Masukkan bahan  : ");
    scanf("%c%c",&bahan,&bahan);
    printf("\n");
    for(i=0;i<tinggi;i++){
        printf("\t");
        for(j=0;j<tinggi;j++){
            printf(" ");
        }
        for(k=0;k<tinggi;k++){
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),124);
            Sleep(jeda);
            printf("%c",bahan);
        }
        printf("\n");
    }
    for(i=0;i<tinggi;i++){
        printf("\t");
        for(j=1;j<tinggi-i;j++){
            printf(" ");
        }
        for(k=0;k<(2*i)+1;k++){
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),122);
            Sleep(jeda);
            printf("%c",bahan);
        }
        for(l=0;l<tinggi*4;l++){
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),118);
            Sleep(jeda);
            printf("%c",bahan);
        }
        printf("\n");
    }
    for(i=0;i<tinggi;i++){
        printf("\t");
        for(j=0;j<(2*tinggi)-1;j++){
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),125);
            Sleep(jeda);
            printf("%c",bahan);
        }
        for(k=0;k<tinggi*4;k++){
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),120);
            Sleep(jeda);
            printf("%c",bahan);
        }
        printf("\n");
    }
    kembali();
    return rumah();
}
//-------------------------Bank------------------------------
int bank()
{
    char pin_saya[6]="123456", pin_input[6];
    int nomcepat[5]={50000,100000,500000,1000000,5000000};
    int i,bahasa,pilnomcepat,input,cek,salah_pin,menu_lain,no_rektrans,nomtrans,pil_trans;
    int nomsetor,pil_pecahan,nom_pecahan,jenis_rek,saldo,lanjut_trans,exit;
    saldo=35000000;
    salah_pin=0;
    bhs:
    printf("\n\n\t");
    for(i=0;i<30;i++){
        printf("=");
    }
    printf("\n");
    printf("\t|       Pilihan Bahasa       |\n");
    printf("\t");
    for(i=0;i<30;i++){
        printf("-");
    }
    printf("\n");
    printf("\t| 1. Bahasa Indonesia        |\n");
    printf("\t| 2. Bahasa Inggris          |\n");
    printf("\t");
    for(i=0;i<30;i++){
        printf("=");
    }
    printf("\n");
    printf("\tPilih : ");
    scanf("%d",&bahasa);
    if(bahasa==1){
        goto menu_pin;
    }
    else if(bahasa==2){
        printf("\n\tAnda harus memilih Bahasa Indonesia\n");
        printf("\tTekan tombol ENTER untuk mengulang");
        getch();
        system("cls");
        goto bhs;
    }else{
        printf("\n\tInputan salah\n");
        printf("\tTekan tombol ENTER untuk mengulang");
        getch();
        system("cls");
        goto bhs;
    }
    menu_pin:
    system("cls");
    printf("\n\n\t");
    for(i=0;i<30;i++){
        printf("=");
    }
    printf("\n");
    printf("\t|           PIN ATM          |\n");
    printf("\t");
    for(i=0;i<30;i++){
        printf("=");
    }
    printf("\n");
    printf("\tMasukkan PIN ATM Anda : ");
    for(i=0;i<6;i++){
        input=getch();
        if(input==13){
            goto menu_cek;
        }else{
            pin_input[i]=input;
            printf("*");
        }
    }
    cek=0;
    for(i=0;i<6;i++){
        if(pin_input[i]==pin_saya[i]){
            cek=cek+1;
        }else{
            cek=0;
        }
    }
    getch();
    menu_cek:
    if(cek==6){
        printf("\n\n\tPIN Benar. Silahkan lanjut");
        getch();
        system("cls");
        goto menu_transaksi;
    }else{
        printf("\n\n\tPIN Salah");
        goto bawah;
    }
    bawah:
    salah_pin=salah_pin+1;
    if(salah_pin==3){
        printf("\n\n\tAnda telah salah PIN sebanyak 3 kali");
        getch();
        system("cls");
        return home();
    }else{
        printf("\n\tKlik ENTER untuk mengulangi");
        printf("\n\n\tAnda memiliki %d kesempatan lagi!",3-salah_pin);
        getch();
        goto menu_pin;
    }
    menu_transaksi:
    printf("\n\n\t");
    for(i=0;i<30;i++){
        printf("=");
    }
    printf("\n");
    printf("\t|  Nominal Penarikan Cepat   |\n");
    printf("\t");
    for(i=0;i<30;i++){
        printf("-");
    }
    printf("\n");
    printf("\t| 1. Rp 50.000               |\n");
    printf("\t| 2. Rp 100.000              |\n");
    printf("\t| 3. Rp 500.000              |\n");
    printf("\t| 4. Rp 1.000.000            |\n");
    printf("\t| 5. Rp 5.000.000            |\n");
    printf("\t| 6. Nominal lain            |\n");
    printf("\t| 7. Menu lain               |\n");
    printf("\t");
    for(i=0;i<30;i++){
        printf("=");
    }
    printf("\n");
    printf("\tMasukkan nominal : ");
    scanf("%d",&pilnomcepat);
    jenis_pecahan:
    if(pilnomcepat>=1&&pilnomcepat<=5){
        goto jenis_rekening;
    }
    else if(pilnomcepat==6){
        system("cls");
        printf("\n\n\t");
        for(i=0;i<30;i++){
            printf("=");
        }
        printf("\n");
        printf("\t|       Jenis Pecahan        |\n");
        printf("\t");
        for(i=0;i<30;i++){
            printf("-");
        }
        printf("\n");
        printf("\t| 1. 50.000                  |\n");
        printf("\t| 2. 100.000                 |\n");
        printf("\t");
        for(i=0;i<30;i++){
            printf("=");
        }
        printf("\n");
        printf("\tPecahan : ");
        scanf("%d",&pil_pecahan);
        if(pil_pecahan==1||pil_pecahan==2){
            goto nominal;
        }
        else{
            printf("\n\tInputan Salah\n");
            printf("\tSilahkan tekan ENTER untuk mengulang");
            getch();
            goto jenis_pecahan;
        }
        nominal:
        printf("\tMasukkan nominal : ");
        scanf("%d",&nom_pecahan);
        switch(pil_pecahan){
            case 1:
                if(nom_pecahan<=saldo&&nom_pecahan%50000==0){
                    goto jenis_rekening;
                }
                else if(nom_pecahan>saldo){
                    printf("\n\tSaldo anda tidak cukup\n");
                    printf("\tSilahkan tekan ENTER untuk mengulang");
                    getch();
                    goto jenis_pecahan;
                }
                else{
                    printf("\n\tNominal tidak valid\n");
                    printf("\tSilahkan tekan ENTER untuk mengulang");
                    getch();
                    goto jenis_pecahan;
                }
                break;
            case 2:
                if(nom_pecahan<=saldo&&nom_pecahan%100000==0){
                    goto jenis_rekening;
                }
                else if(nom_pecahan>saldo){
                    printf("\n\tSaldo anda tidak cukup\n");
                    printf("\tSilahkan tekan ENTER untuk mengulang");
                    getch();
                    goto jenis_pecahan;
                }
                else{
                    printf("\n\tNominal tidak valid\n");
                    printf("\tSilahkan tekan ENTER untuk mengulang");
                    getch();
                    goto jenis_pecahan;
                }
                break;
            default:
                printf("\n\tInputan Salah\n");
                printf("\tSilahkan tekan ENTER untuk mengulang");
                getch();
                goto jenis_pecahan;
        }
    }
    else if(pilnomcepat==7){
        system("cls");
        transaksi_lain:
        printf("\n\n\t");
        for(i=0;i<30;i++){
            printf("=");
        }
        printf("\n");
        printf("\t|       Transaksi Lain       |\n");
        printf("\t");
        for(i=0;i<30;i++){
            printf("-");
        }
        printf("\n");
        printf("\t| 1. Transfer                |\n");
        printf("\t| 2. Cek Saldo               |\n");
        printf("\t| 3. Setor Tunai             |\n");
        printf("\t");
        for(i=0;i<30;i++){
            printf("=");
        }
        printf("\n");
        printf("\tPilih : ");
            scanf("%d",&menu_lain);
            transfer:
            switch(menu_lain){
                case 1:
                    system("cls");
                    printf("\n\n\t");
                    for(i=0;i<30;i++){
                        printf("=");
                    }
                    printf("\n");
                    printf("\t|          Transfer          |\n");
                    printf("\t");
                    for(i=0;i<30;i++){
                        printf("=");
                    }
                    printf("\n");
                    printf("\tNomor rekening tujuan : ");
                    scanf("%d",&no_rektrans);
                    printf("\tNominal transfer : ");
                    scanf("%d",&nomtrans);
                    if(nomtrans<=saldo){
                        goto konfirmasi_transfer;
                    }
                    else if(nomtrans>saldo){
                        printf("\n\tMaaf, saldo anda tidak mencukupi\n");
                        printf("\n\tTekan ENTER untuk mengulang");
                        getch();
                        system("cls");
                        goto transfer;
                    }
                    konfirmasi_transfer:
                    printf("\n\tAnda yakin akan mentransfer ke %d sejumlah %d?\n",no_rektrans,nomtrans);
                    printf("\t1. Ya\n");
                    printf("\t2. Tidak\n");
                    printf("\tPilih : ");
                    scanf("%d",&pil_trans);
                    if(pil_trans==1){
                        printf("\n\tTransfer Rp %d ke %d Sukses\n",nomtrans,no_rektrans);
                        printf("\n\tTekan ENTER untuk keluar");
                        getch();
                        saldo=saldo-nomtrans;
                        goto struk;
                    }
                    else if(pil_trans==2){
                        printf("\n");
                        printf("\t-------------------------\n");
                        printf("\t|  'u' untuk mengulang  |\n");
                        printf("\t|  Enter untuk kembali  |\n");
                        printf("\t-------------------------\n");
                        printf("\t  Pilih : ");
                        exit=getch();
                        if(exit==13){
                            system("cls");
                            return bank();
                        }else if(exit==117){
                            system("cls");
                            goto transfer;
                        }
                    }else{
                        printf("\n\tInputan salah\n");
                        printf("\tSilahkan tekan ENTER untuk mengulang");
                        getch();
                        goto transfer;
                        break;
                    }
                    break;
                case 2:
                    system("cls");
                    printf("\n\n\t");
                    for(i=0;i<30;i++){
                        printf("=");
                    }
                    printf("\n");
                    printf("\t|         Cek Saldo          |\n");
                    printf("\t");
                    for(i=0;i<30;i++){
                        printf("=");
                    }
                    printf("\n");
                    printf("\tSaldo anda saat ini : Rp %d\n",saldo);
                    printf("\n\tTekan ENTER untuk keluar");
                    getch();
                    goto struk;
                    break;
                case 3:
                    system("cls");
                    printf("\n\n\t");
                    for(i=0;i<30;i++){
                        printf("=");
                    }
                    printf("\n");
                    printf("\t|        Setor Tunai         |\n");
                    printf("\t");
                    for(i=0;i<30;i++){
                        printf("=");
                    }
                    printf("\n");
                    printf("\tSilahkan masukkan uang anda : ");
                    scanf("%d",&nomsetor);
                    printf("\n\tRp %d berhasil ditambahkan ke rekening anda\n\n",nomsetor);
                    printf("\tTekan ENTER untuk mengambil struk");
                    getch();
                    saldo=saldo+nomsetor;
                    goto struk;
                default:
                    printf("\n\tInputan Salah\n");
                    printf("\tSilahkan tekan ENTER untuk mengulang");
                    getch();
                    system("cls");
                    goto transaksi_lain;
            }
    }
    else{
        printf("\n\n\tInputan Salah\n");
        printf("\tSilahkan tekan ENTER untuk mengulang");
        getch();
        system("cls");
        goto menu_transaksi;
    }
    jenis_rekening:
    system("cls");
    printf("\n\n\t");
    for(i=0;i<30;i++){
        printf("=");
    }
    printf("\n");
    printf("\t|       Jenis Rekening       |\n");
    printf("\t");
    for(i=0;i<30;i++){
        printf("-");
    }
    printf("\n");
    printf("\t| 1. Rekening Tabungan       |\n");
    printf("\t| 2. Rekening Giro           |\n");
    printf("\t");
    for(i=0;i<30;i++){
        printf("=");
    }
    printf("\n");
    printf("\tJenis : ");
    scanf("%d",&jenis_rek);
    if(jenis_rek==1){
        goto ambil;
    }
    else if(jenis_rek==2){
        printf("\n\tAnda harus memilih Rekening Tabungan\n");
        printf("\tSilahkan tekan ENTER untuk mengulang");
        getch();
        goto jenis_rekening;
    }else{
        printf("\tInputan salah\n");
        printf("\tSilahkan tekan ENTER untuk mengulang");
        getch();
        goto jenis_rekening;
    }
    ambil:
    system("cls");
    printf("\n\n\t");
    for(i=0;i<30;i++){
        printf("=");
    }
    printf("\n");
    printf("\t|       Penarikan Uang       |\n");
    printf("\t");
    for(i=0;i<30;i++){
        printf("=");
    }
    printf("\n");
    if(pilnomcepat==6){
        printf("\tUang yang akan anda tarik : Rp %d\n",nom_pecahan);
        printf("\n\tTekan ENTER untuk lanjut");
        saldo=saldo-nom_pecahan;
        getch();
        goto struk;
    }
    else if(pilnomcepat>=1&&pilnomcepat<=5){
        printf("\tUang yang akan anda tarik : Rp %d\n",nomcepat[pilnomcepat-1]);
        printf("\n\tTekan ENTER untuk lanjut");
        saldo=saldo-nomcepat[pilnomcepat-1];
        getch();
        goto struk;
    }
    struk:
    system("cls");
    printf("\n\n");
    printf("\t+ = = = = = = = = = = = = = = = = = = +");
    printf("\n\t= Sisa saldo anda : Rp %d",saldo);
    printf("\n\t= Silahkan ambil uang anda");
    printf("\n\t= Silahkan ambil bukti transaksi anda \n");
    printf("\t+ = = = = = = = = = = = = = = = = = = +");
    printf("\n\t  Apakah anda ingin lanjut?\n");
    printf("\t  1. Ya\n");
    printf("\t  2. Tidak\n");
    printf("\t  Pilihan : ");
    scanf("%d",&lanjut_trans);
    if(lanjut_trans==1){
        system("cls");
        goto menu_transaksi;
    }else{
        system("cls");
        printf("\n\n\n\n\n\n");
        printf("\t\t\t\t  - - - - - - - - - - - - - - - - - - - - - -\n");
        printf("\t\t\t\t  -                                         -\n");
        printf("\t\t\t\t  -          Ambil kartu ATM anda!          -\n");
        printf("\t\t\t\t  -     Terima kasih telah bertransaksi     -\n");
        printf("\t\t\t\t  -                                         -\n");
        printf("\t\t\t\t  - - - - - - - - - - - - - - - - - - - - - -\n");
        printf("\n\n\n\n\n\n");
    }
    kembali();
    return bank();
}
//-----------------------Bendera------------------------------
int bendera()
{
    int n,a,b,c,jeda,exit;
    jeda=10;
    printf("\n\n");
    printf("\t==============================\n");
    printf("\t=          Bendera           =\n");
    printf("\t==============================\n");
    printf("\t");
    printf("Masukkan tinggi : ");
    scanf("%d",&n);
    printf("\n");
    //baris pertama
    for(a=0;a<n/3;a++){
        printf("\t");
        for(b=0;b<n*7;b++){
            Sleep(jeda);
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12);
            printf("%c",219);
        }
        printf("\n");
    }
    //baris kedua
    for(a=0;a<n/2;a++){
        printf("\t");
        for(b=0;b<n*3;b++){
            Sleep(jeda);
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12);
            printf("%c",219);
        }
        for(c=0;c<n;c++){
            Sleep(jeda);
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
            printf("%c",219);
        }
        for(b=0;b<n*3;b++){
            Sleep(jeda);
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12);
            printf("%c",219);
        }
        printf("\n");
    }
    //baris ketiga
    for(a=0;a<n/2;a++){
        printf("\t");
        for(b=0;b<n*2;b++){
            Sleep(jeda);
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12);
            printf("%c",219);
        }
        for(c=0;c<n*3;c++){
            Sleep(jeda);
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
            printf("%c",219);
        }
        for(b=0;b<n*2;b++){
            Sleep(jeda);
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12);
            printf("%c",219);
        }
        printf("\n");
    }
    //baris keempat
    for(a=0;a<n/2;a++){
        printf("\t");
        for(b=0;b<n*3;b++){
            Sleep(jeda);
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12);
            printf("%c",219);
        }
        for(c=0;c<n;c++){
            Sleep(jeda);
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
            printf("%c",219);
        }
        for(b=0;b<n*3;b++){
            Sleep(jeda);
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12);
            printf("%c",219);
        }
        printf("\n");
    }
    //baris kelima
    for(a=0;a<n/3;a++){
        printf("\t");
        for(b=0;b<n*7;b++){
            Sleep(jeda);
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12);
            printf("%c",219);
        }
        printf("\n");
    }
    kembali();
    return bendera();
}
//-----------------------Author------------------------------
int author()
{
    char a[9]="Creator :";
    char b[4][27]={"Nama  : Ardiva Nugraheni","Nama  : Muhammad Nurul Huda","Nama  : Jonathan Diego N.","Nama  : Yosua Kurniawan"};
    char c[4][17]={"NIM   : 672022076","NIM   : 672022189","NIM   : 672022178","NIM   : 672022183"};
    int i,j,k,jeda,exit;
    jeda=20;
    printf("\n\n\n\n");
    printf("\t\t\t\t");
    for(i=0;i<9;i++){
        Sleep(jeda);
        printf("%c",a[i]);
    }
    for(i=0;i<4;i++){
        printf("\n\n\t\t\t\t\t");
        for(j=0;j<27;j++){
            Sleep(jeda);
            printf("%c",b[i][j]);
        }
        printf("\n\t\t\t\t\t");
        for(k=0;k<17;k++){
            Sleep(jeda);
            printf("%c",c[i][k]);
        }
    }
    kembali();
    return author();
}
//-----------------------Exit------------------------------
int keluar()
{
    char a[2][12]={"   SELESAI","  Creator By"};
    char b[4][28]={"       Ardiva Nugraheni","      Muhammad Nurul Huda","   Jonathan Diego Natalleano","       Yosua Kurniawan"};
    char str[]="54321";
    int i,j,k,p,jeda;
    p=0;
    jeda=20;
    printf("\n\n\n\n\n\n");
    for(i=0;i<2;i++){
        printf("\n\n\t\t\t\t\t\t");
        for(j=0;j<12;j++){
            Sleep(jeda);
            printf("%c",a[i][j]);
        }
    }
    printf("\n");
    for(i=0;i<4;i++){
        printf("\n\t\t\t\t\t");
        for(j=0;j<28;j++){
            Sleep(jeda);
            printf("%c",b[i][j]);
        }
    }
    for( i =1 ; i<= 5; i++ )
    {
    gotoxy(55, 17);
    printf("%c", str[p++]);
    Sleep(1000);
    if(p == strlen(str))
        p = 0;
    }
    system("cls");
    return 0;
}
//----------------------Kotak Exit---------------------------
int kembali()
{
    int exit;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),121);
    printf("\n");
    printf("\t-------------------------\n");
    printf("\t|  'u' untuk mengulang  |\n");
    printf("\t|  Enter untuk kembali  |\n");
    printf("\t-------------------------\n");
    printf("\t  Pilih : ");
    exit=getch();
    if(exit==13){
        system("cls");
        return home();
    }else if(exit==117){
        system("cls");
        return 0;
    }
}
