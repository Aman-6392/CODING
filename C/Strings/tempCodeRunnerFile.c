printf("Enter Name:");
    scanf("%s",name);
    printf("\nEnter Age:");
    scanf("%d",&age);
    printf("\nEnter Height:");
    scanf("%f",&height);
    fprintf(ptr,"Name: %s",name);
    fprintf(ptr,"Age: %d",age);
    fprintf(ptr,"Height: %f",height);
    fclose(ptr);
    ptr=fopen("aman.txt","r");