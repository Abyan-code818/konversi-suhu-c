#include <stdio.h>
#include "funsuhu.c"

int main(){
    int pilihan, pcelcius, pfahrenheit, preamur, pkelvin;
    double pcelcius1, pcelcius2, pcelcius3;
    double pfahrenheit1, pfahrenheit2, pfahrenheit3;
    double preamur1, preamur2, preamur3;
    double pkelvin1, pkelvin2, pkelvin3;
    char pilihanp;

    while(true)
    {
        printf("\n\n===PROGRAM KONVERSI SUHU===\n\n");
        printf("\nSuhu yang tersedia:\n1. Celcius\n2. Fahrenheit\n3. Reamur\n4. Kelvin");
        printf("\nSuhu pilihan: ");
        scanf("%d", &pilihan);

        switch(pilihan)
        {
            case 1:
            printf("\nsuhu yang dipilih: celcius\n");

            printf("\nsuhu yang tersedia:\n1. Fahrenheit\n2. Reamur\n3. Kelvin");
            printf("\nmasukkan suhu yang ingin dikonversi: ");
            scanf("%d", &pcelcius);

            switch(pcelcius)
            {
                case 1:
                printf("\n\nkonversi: celcius -> fahrenheit");
                printf("\n\nmasukkan suhu dalam celcius: ");
                scanf("%lf", &pcelcius1);

                printf("\n\nhasil dalam fahrenheit: %.2f", celcius_fahrenheit(pcelcius1));

                break;

                case 2:

                printf("\n\nkonversi: celcius -> reamur");
                printf("\n\nmasukkan suhu dalam celcius: ");
                scanf("%lf", &pcelcius2);

                printf("\n\nhasil dalam fahrenheit: %.2f", celcius_reamur(pcelcius2));

                break;

                case 3:
                
                printf("\n\nkonversi: celcius -> kelvin");
                printf("\n\nmasukkan suhu dalam celcius: ");
                scanf("%lf", &pcelcius3);

                printf("\n\nhasil dalam fahrenheit: %.2f", celcius_kelvin(pcelcius3));

                break;
            }

            break;

            case 2:
            printf("\nsuhu yang dipilih: fahrenheit\n");

            printf("\nsuhu yang tersedia:\n1. Celcius\n2. Reamur\n3. Kelvin");
            printf("\nmasukkan suhu yang ingin dikonversi: ");
            scanf("%d", &pfahrenheit);

            switch(pfahrenheit)
            {
                case 1:
        
                printf("\n\nkonversi: fahrenheit -> celcius");
                printf("\n\nmasukkan suhu dalam fahrenheit: ");
                scanf("%lf", &pfahrenheit1);

                printf("\n\nhasil dalam fahrenheit: %.2f", fahrenheit_celcius(pfahrenheit1));

                break;

                case 2:
        
                printf("\n\nkonversi: fahrenheit -> reamur");
                printf("\n\nmasukkan suhu dalam fahrenheit: ");
                scanf("%lf", &pfahrenheit2);

                printf("\n\nhasil dalam fahrenheit: %.2f", fahrenheit_reamur(pfahrenheit2));

                break;

                case 3:
        
                printf("\n\nkonversi: fahrenheit -> kelvin");
                printf("\n\nmasukkan suhu dalam fahrenheit: ");
                scanf("%lf", &pfahrenheit3);

                printf("\n\nhasil dalam fahrenheit: %.2f", fahrenheit_kelvin(pfahrenheit3));

                break;
            }

            break;

            case 3:
            printf("\nsuhu yang dipilih: reamur\n");

            printf("\nsuhu yang tersedia:\n1. Celcius\n2. Fahrenheit\n3. Kelvin");
            printf("\nmasukkan suhu yang ingin dikonversi: ");
            scanf("%d", &preamur);

            switch(preamur)
            {
                case 1:
        
                printf("\n\nkonversi: reamur -> celcius");
                printf("\n\nmasukkan suhu dalam reamur: ");
                scanf("%lf", &preamur1);

                printf("\n\nhasil dalam fahrenheit: %.2f", reamur_celcius(preamur1));

                break;

                case 2:
        
                printf("\n\nkonversi: reamur -> fahrenheit");
                printf("\n\nmasukkan suhu dalam reamur: ");
                scanf("%lf", &preamur2);

                printf("\n\nhasil dalam fahrenheit: %.2f", reamur_fahrenheit(preamur2));

                break;

                case 3:
        
                printf("\n\nkonversi: reamur -> kelvin");
                printf("\n\nmasukkan suhu dalam reamur: ");
                scanf("%lf", &preamur3);

                printf("\n\nhasil dalam fahrenheit: %.2f", reamur_kelvin(preamur3));

                break;
            }

            break;

            case 4:
            printf("\nsuhu yang dipilih: kelvin\n");

            printf("\nsuhu yang tersedia:\n1. Celcius\n2. Fahrenheit\n3. Reamur");
            printf("\nmasukkan suhu yang ingin dikonversi: ");
            scanf("%d", &pkelvin);

            switch(pkelvin)
            {
                case 1:
        
                printf("\n\nkonversi: kelvin -> celcius");
                printf("\n\nmasukkan suhu dalam kelvin: ");
                scanf("%lf", &pkelvin1);

                printf("\n\nhasil dalam fahrenheit: %.2f", kelvin_celcius(pkelvin1));

                break;

                case 2:
        
                printf("\n\nkonversi: kelvin -> fahrenheit");
                printf("\n\nmasukkan suhu dalam kelvin: ");
                scanf("%lf", &pkelvin2);

                printf("\n\nhasil dalam fahrenheit: %.2f", kelvin_fahrenheit(pkelvin2));

                break;

                case 3:
        
                printf("\n\nkonversi: kelvin -> reamur");
                printf("\n\nmasukkan suhu dalam kelvin: ");
                scanf("%lf", &pkelvin3);

                printf("\n\nhasil dalam fahrenheit: %.2f", kelvin_reamur(pkelvin3));

                break;
            }

            break;

        }

        choice:
        printf("\napakah anda ingin mengulang? \n(y/n): ");
        scanf(" %c", &pilihanp);

        if(pilihanp == 'n'){
            break;
        }
        else if(pilihanp == 'y'){
            continue;
        }
        else{
            goto choice;
        }
    }

    return 0;
}