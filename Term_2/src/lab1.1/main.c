#include "header.h"
//enum
//init sort
//work menu
//CMAKE
//SONAR
//HTML parsing
//project structure

int main()
{
    setlocale(LC_ALL, "RUS");
    FILE *f;
    f = fopen("Struct.txt", "r");
    if (f == NULL)
    {
            printf("ERROR0");
            return 0;
    }
    int num;
    printf("������� ���-�� ��������\n");
    num = init_x( 1, 10);
    Temp_t* mas_struct;
    mas_struct_init(&mas_struct, num);
    mas_struct_parsing(&mas_struct, f, num);
    mas_struct_output(mas_struct, num);
    fclose(f);
    getchar();
    return EXIT_SUCCESS;
}