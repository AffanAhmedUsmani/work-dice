#include <stdio.h>
#include <unistd.h>

#include <stdlib.h>
int main()

{
    char type = 'y';
    int b[20], l[20], n, i, pa, p, s, a, d;
    int testint = 0;
    printf("\nAffan Ahmed Program for implementing Pagging and Segmentation ");
    while (type == 'y')
    {
        type = 'q';
        printf("\nPRESS 1 for Segmentation 2 for Pagging ");
        scanf("%d", &testint);
        if (testint == 1)
        {
            printf("\nEnter the number of segments: ");
            scanf("%d", &n);

            printf("\nEnter the base address and limit register:");
            for (i = 0; i < n; i++)

            {

                scanf("%d", &b[i]);

                scanf("%d", &l[i]);
            }

            printf("\nEnter the logical address :");
            scanf("%d", &d);

            printf("\nEnter the segmentation number: ");
            scanf("%d", &s);

            for (i = 0; i < n; i++)

            {

                if (i == s)

                {

                    if (d < l[i])

                    {

                        pa = b[i] + d;
                        a = b[i];

                        printf("\n\tPageNo.\t BaseAdd. PhysicalAdd. \n\t %d \t %d \t %d \t ", s, a, pa);
                        exit(0);
                    }
                    else

                    {
                    }
                }
            }

            printf("\nPage size exceeds");
            exit(0);

            printf("\nInvalid segment");
            return 0;
        }
        else if (testint == 2)
        {
            printf("\nENter number of pages");
            scanf("%d", &n);
            printf("\nEnter the base address:");
            for (i = 0; i < n; i++)
            {
                scanf("%d", &b[i]);
            }

            printf("\nEnter the logical address:");
            scanf("%d", &d);
            printf("\nEnter the page number: ");
            scanf("%d", &p);
            for (i = 0; i < n; i++)
            {
                if (i == p)
                {
                    pa = b[i] + d;
                    a = b[i];
                    printf("\n\tPageNo.\t BaseAdd. PhysicalAdd. \n\t %d \t %d \t %d \t", p, a, pa);
                }
            }
            printf("\nInvalid page");
        }
        else
        {
            printf("\n in valid input press n to exit");
        }

        printf("type in y to perform another segemntation or paging task");
        scanf("%c", &type);
    }
}
