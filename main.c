#include "global.h"










int main(void)
{

    while (1)
    {
        // read a number form user to Login to System
        int choose;
		
		printf("Welcome ..!\nChoose your account type to login (0 to terminate) :\n1) Student\t2)Admin : ");
        scanf("%d", &choose);

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
				break;
		}
    }

    return 0;
}