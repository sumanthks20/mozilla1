int strings()
{
    int o;
    while (1)
    {
        printf("\n----------STRINGS-----------\n");
        printf("Do you want to\n1.Learn\n2.Quiz\n3.Back to previous menu4.exit\n");
        printf("Enter the option\n");
        scanf("%d",&o);
        switch (o)
        {
            case 1:learn();break;
            case 2:quiz(); break;
            case 3:z=0;
            case 4:exit(0);
            default:printf("Invalid option\n");

        }
    }
    return 0;
}
