#include<stdio.h>
int main()
{
    printf("----------Main Menu-----------\n\n");


    printf("1. Add Books\n");
    printf("2. Display Book Information\n");
    printf("3. Search Books(Book Status)\n");
    printf("4. Exit\n\n");

    int a1;
    printf("Enter: ");
    scanf("%d",&a1);
    printf("\n\n");
    if(a1==1)
    {
        printf("You can add book information\n");
        printf("Choose the category: \n\n");
        printf("1. Computer\n");
        printf("2. Electronics\n");
        printf("3. Mechanics\n\n");
        int a2;
        printf("Choose the category: \n");
        scanf("%d",&a2);
        printf("\n\n");
        if(a2==1)
        {
          printf("You have chosen Computer category\n\n");
          printf("1. Introduction to C\n");
          printf("2. Introduction to Python\n");
          printf("3. Introduction to R Programming\n\n");
          int a3;
          printf("Choose a book:\n");
          scanf("%d",&a3);
          printf("\n\n");
          if(a3==1)
          {
              printf("You have chosen Introduction to C book\n\n");
              char book_namea[50];
              char author_namea[50];
              int pagea;
              int pricea;
              printf("Book name: \n");
              scanf("%s",&book_namea);
              printf("\n\n");
              printf("Author name: \n");
              scanf("%s",&author_namea);
              printf("\n\n");
              printf("Pages: \n");
              scanf("%d",&pagea);
              printf("\n\n");
              printf("Price: \n");
              scanf("%d",&pricea);
              printf("\n\n");
          }
          else if(a3==2)
          {
              printf("You have chosen Introduction to Python book\n\n");
              char book_nameb;
              char author_nameb;
              int pageb;
              int priceb;
              printf("Name: \n");
              scanf("%s",&book_nameb);
              printf("\n\n");
              printf("Author name: \n");
              scanf("%s",&author_nameb);
              printf("\n\n");
              printf("Pages: \n");
              scanf("%d",&pageb);
              printf("\n\n");
              printf("Price: \n");
              scanf("%d",&priceb);
              printf("\n\n");
          }
          else if(a3==3)
          {
            printf("You have chosen Introduction to R language book\n");
            char book_namec;
            char author_namec;
            int pagec;
            int pricec;
            printf("Name: \n");
            scanf("%s",&book_namec);
            printf("\n\n");
            printf("Author name: \n");
            scanf("%s",&author_namec);
            printf("\n\n");
            printf("Pages: \n");
            scanf("%d",&pagec);
            printf("\n\n");
            printf("Price: \n");
            scanf("%d",&pricec);
            printf("\n\n");
          }

        }
        else if(a2==2)
        {

            printf("You have chosen Electronics category\n\n");
            printf("1. Practical Electronics for Inventors\n");
            printf("2. The art of Electronics\n");
            printf("3. Fundamentals of digital circuits\n\n");
            int a4;
            printf("Choose a book: ");
            scanf("%d",&a4);
            printf("\n\n");
            if(a4==1)
            {
                printf("You have chosen Practical Electronics for Inventors Book\n\n");
                char book_named[50];
                char author_named[50];
                int paged;
                int priced;
                printf("Name: \n");
                scanf("%s",&book_named);
                printf("\n\n");
                printf("Author name: \n");
                scanf("%s",&author_named);
                printf("\n\n");
                printf("Pages: \n");
                scanf("%d",&paged);
                printf("\n\n");
                printf("Price: \n");
                scanf("%d",&priced);
                printf("\n\n");

            }
            else if(a4==2)
            {
                printf("You have chosen The art of Electronics book\n\n");
                char book_namee[50];
                char author_namee[50];
                int pagee;
                int pricee;
                printf("Name: \n");
                scanf("%s",&book_namee);
                printf("\n\n");
                printf("Author name: \n");
                scanf("%s",&author_namee);
                printf("\n\n");
                printf("Pages: \n");
                scanf("%d",&pagee);
                printf("\n\n");
                printf("Price: \n");
                scanf("%d",&pricee);
                printf("\n\n");
            }
            else if(a4==3)
            {
                printf("You have chosen Fundamentals of digital circuits book\n\n");
                char book_namef[50];
                char author_namef[50];
                int pagef;
                int pricef;
                printf("Name: \n");
                scanf("%s",&book_namef);
                printf("\n\n");
                printf("Author name: \n");
                scanf("%s",&author_namef);
                printf("\n\n");
                printf("Pages: \n");
                scanf("%d",&pagef);
                printf("\n\n");
                printf("Price: \n");
                scanf("%d",&pricef);
                printf("\n\n");
            }
        }
       else if(a2==3)
       {
         printf("You have chosen Mechanics category\n\n");
         printf("1. Introduction to Autocad\n");
         printf("2. Fundamentals of Thermodynamics\n");
         printf("3. Mechanical Engineering: Conventional and Objective Type\n\n");
         int a5;
         printf("Choose a book: \n");
         scanf("%d",&a5);
         if(a5==1)
         {
            printf("You have chosen introduction to Autocad book\n\n");
            char book_nameg[50];
            char author_nameg[50];
            int pageg;
            int priceg;
            printf("Name: \n");
            scanf("%s",&book_nameg);
            printf("\n\n");
            printf("Author name: \n");
            scanf("%s",&author_nameg);
            printf("\n\n");
            printf("Pages: \n");
            scanf("%d",&pageg);
            printf("\n\n");
            printf("Price: \n");
            scanf("%d",&priceg);
            printf("\n\n");
         }
         else if(a5==2)
         {
            printf("You have chosen Fundamentals of Thermodynamics book\n\n");
            char book_nameh[50];
            char author_nameh[50];
            int pageh;
            int priceh;
            printf("Name: \n");
            scanf("%s",&book_nameh);
            printf("\n\n");
            printf("Author name: \n");
            scanf("%s",&author_nameh);
            printf("\n\n");
            printf("Pages: \n");
            scanf("%d",&pageh);
            printf("\n\n");
            printf("Price: \n");
            scanf("%d",&priceh);
            printf("\n\n");
         }
         else if(a5==3)
         {
            printf("You have chosen Mechanical Engineering: Conventional and Objective Type\n\n");
            char book_namei[50];
            char author_namei[50];
            int pagei;
            int pricei;
            printf("Name: \n");
            scanf("%s",&book_namei);
            printf("\n\n");
            printf("Author name: \n");
            scanf("%s",&author_namei);
            printf("\n\n");
            printf("Pages: \n");
            scanf("%d",&pagei);
            printf("\n\n");
            printf("Price: \n");
            scanf("%d",&pricei);
            printf("\n\n");
         }
       }
    }

    else if(a1==3)
    {
      printf("You can search the book (Book status)\n\n");
      printf("Press the code 123 for Introduction to C\n");
      printf("Press the code 456 for Introduction to Python\n");
      printf("Press the code 789 for Introduction to R language\n");
      printf("Press the code 523 for Practical Electronics for Inventors\n");
      printf("Press the code 759 for The art of Electronics\n");
      printf("Press the code 157 for Fundamentals of digital circuits\n");
      printf("Press the code 359 for Introduction to Autocad\n");
      printf("Press the code 153 for Fundamentals of Thermodynamics\n");
      printf("Press the code 104 for Mechanical Engineering: Conventional and Objective Type\n");
      int a6;
      printf("Enter the book to search (use the code): ");
      scanf("%d",&a6);
      printf("\n");
      switch(a6)
      {
          case 123:
              printf("Book name: Introduction to C\n");
              printf("Book Status: 15 copies left\n");
              break;
          case 456:
              printf("Book name: Introduction to Python\n");
              printf("Book Status: 22 copies left\n");
              break;
          case 789:
            printf("Book name: Introduction to R Programming\n");
            printf("Book Status: 30 copies left\n");
            break;
          case 523:
            printf("Book name: Practical Electronics for Inventors\n");
            printf("Book Status: 25 copies left\n");
            break;
          case 759:
            printf("Book name: The art of Electronics\n");
            printf("Book Status: 18 copies left\n");
            break;
          case 157:
            printf("Book name: Fundamentals of Digital circuits\n");
            printf("Book Status: out off stock\n");
            break;
          case 359:
            printf("Book name: Introduction to Autocad\n");
            printf("Book Status: 20 copies left\n");
            break;
          case 153:
            printf("Book name: Fundamentals of Thermodynamics\n");
            printf("Book Status: 12 copies left\n");
            break;
          case 104:
            printf("Book name: Mechanical Engineering: Conventional and Objective Type\n");
            printf("Book Status: 32 copies left\n");
            break;
        }
    }
    else if(a1==4)
    {
        printf("The Library is closed.\n");
        printf("Have a nice day\n");
    }
    return 0;
}
