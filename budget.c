int main(void){
    char income[7];
    char utilities[9];
    char groceries[9];
    char car[9];
    printf("this is budget calc \nhow much do you make\n");
    scanf("%s", income);
    printf("how much do yor utilities cost ");
    scanf("%s", utilities);
    printf("youmake %s", income);
    float spending[] = (float) income - (float) utilities;
    printf ("%f" ,spend);
    return 0;
}