//*Code for check leap year*


    #include<stdio.h>
    int main()
    {
    printf("Enter The day: ");
    scanf("%d",&n);
    if (n % 366==0)
    {
        printf("leap year");
    }

    else
    {
        printf("not leap year");
    }

    return 0;
    }


