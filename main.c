#include "global.h"




extern char admin_details[MAX][6];






int main(void)
{
	
	initList(&list);

    while (1)
    {
        // read a number form user to Login to System
        int choose = 1000000;
		
		printf("Welcome ..!\nChoose your account type to login (0 to terminate) :\n1) Student\t2)Admin : ");
        scanf("%d", &choose);getchar();
        switch ( choose )
        {
			
			case 0:
				exit(0);
				break;
				
			case 1:
				student();
				break;

			case 2:
				admin();
				break;
			
				
			default:
				printf("Choose a correct number ..! (0 to terminate)\n");
				
		}
    }

    return 0;
}