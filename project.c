#include<stdio.h>
int main()
{
    
    float inr,con_amt;
    int b,a;
	printf("			                CURRENCY EXCHANGE SYSTEM			\n");
	printf("                   Your Money, Your Choice, Instantly Converted   \n\n");
	printf("=====================================================================================");
	printf("\n\n|------------- CURRENCY LIST --------------|------EXCHANGE RATE LIST------| \n");
	printf("|------------------------------------------|------------------------------|\n");
    printf("| 1.  US Dollar --> USD                    |            88.67             |\n");
	printf("|------------------------------------------|------------------------------|\n");
    printf("| 2.  Euro --> EUR                         |            102.44            |\n");
	printf("|------------------------------------------|------------------------------|\n");
    printf("| 3.  British Pound --> GBP			       |            116.61            |\n");
	printf("|------------------------------------------|------------------------------|\n");
	printf("| 4.  Japanese Yen --> JPY			       |            0.57              |\n");
	printf("|------------------------------------------|------------------------------|\n");	
	printf("| 5.  Swiss Franc --> CHF			       |            109.21            |\n");
	printf("|------------------------------------------|------------------------------|\n");
    printf("| 6.  Canadian Dollar --> CAD			   |            63.08             |\n");
	printf("|------------------------------------------|------------------------------|\n");
    printf("| 7.  United Arab Emirates Dirham --> AED  |            24.14             |\n");
    printf("|------------------------------------------|------------------------------|\n\n");
    printf("=====================================================================================\n");
	printf("\n\n=====================================================================================\n");
    for(;;)
    {
        printf("\n\n-----ENTER 0 ANYTIME TO EXIT THE APPLICATION-----");
        printf("\n\nENTER THE AMOUNT IN INDIAN RUPEES RUPEES (INR) THAT IS TO BE CONVERTED :₹ ");
        scanf("%f",&inr);
        if(inr<0)
        {
            printf("\n------ AMOUNT CANNOT BE NEGATIVE ------");
            printf("\nTry again by entering a valid amount");
            break;
        }
        if(inr==0)
		{
            break;
		}
        printf("\nPLEASE ENTER THE CURRENCY NUMBER FROM THE LIST YOU WANT TO CONVERT TO (1-7) :- ");
        scanf("%d",&b);
        if(b==0)
        {
            break;
        }
        switch(b)
        {
        	case 1:
        	        con_amt=inr/88.67;
        	        printf("\n\nYOU CAN GET $%.2f IN RETURN OF ₹%.2f \n",con_amt,inr);
        	        printf("=====================================================================================");
        	        break;
        	case 2:
        	        con_amt=inr/102.44;
        	        printf("\n\nYOU CAN GET €%.2f IN RETURN OF ₹%.2f \n",con_amt,inr);
        	        printf("=====================================================================================");
        	        break;
        	case 3:
        	        con_amt=inr/116.61;
        	        printf("\n\nYOU CAN GET £%.2f IN RETURN OF ₹%.2f \n",con_amt,inr);
        	        printf("=====================================================================================");
        	        break;
        	case 4:
        	        con_amt=inr/0.57;
        	        printf("\n\nYOU CAN GET ¥%.2f IN RETURN OF ₹%.2f \n",con_amt,inr);
        	        printf("=====================================================================================");
        	        break;
        	case 5:
        	        con_amt=inr/109.21;
        	        printf("\n\nYOU CAN GET ₣%.2f IN RETURN OF ₹%.2f \n",con_amt,inr);
        	        printf("=====================================================================================");
        	        break;
        	case 6:
        	        con_amt=inr/63.08;
        	        printf("\n\nYOU CAN GET $%.2f IN RETURN OF ₹%.2f \n",con_amt,inr);
        	        printf("=====================================================================================");
        	        break;
        	case 7:
        	        con_amt=inr/24.14;
        	        printf("\n\nYOU CAN GET %.2f AED IN RETURN OF ₹%.2f \n",con_amt,inr);
        	        printf("=====================================================================================");
        	        break;
        	 
        	default:
        	        printf("\nEnter a valid number from the above list given\n");
        	        printf("=====================================================================================");
        	        break;
        }
	
		printf("\nENTER 3 TO CONTINUE OR 0 TO EXIT: ");
        	scanf("%d", &a);

        	if (a == 0)
            	break;

        	if (a == 3)
		 {
            		printf("\nRestarting...\n");
            		continue;
        	}
        	else
        	{
            		printf("INVALID RESPONSE");
            		break;
        	}
	}
        printf("\n\n\n          THANK YOU FOR USING THE APPLICATON");
    	printf("\n\n             Your feedback makes us better\n");
    	printf("\n\n=====================================================================================");
	return 0;
}
