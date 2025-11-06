#include<stdio.h>
int main()
{
    
    float inr,con_amt;
    int b,c;
	printf("			                CURRENCY EXCHANGE SYSTEM			\n");
	printf("                   Your Money, Your Choice, Instantly Converted   \n\n");
	printf("=====================================================================================");
	printf("\n\n|----------- CURRENCY LIST ----------------|------EXCHANGE RATE LIST------| \n");
	printf("|------------------------------------------|------------------------------|\n");
    printf("| 1.  US Dollar --> USD                    |  EXCHANGE RATE -- 84.27      |\n");
	printf("|------------------------------------------|------------------------------|\n");
    printf("| 2.  Euro --> EUR                         |  EXCHANGE RATE -- 102.61     |\n");
	printf("|------------------------------------------|------------------------------|\n");
    printf("| 3.  British Pound --> GBP			       |  EXCHANGE RATE -- 118.20     |\n");
	printf("|------------------------------------------|------------------------------|\n");
	printf("| 4.  Japanese Yen --> JPY			       |  EXCHANGE RATE -- 0.5845     |\n");
	printf("|------------------------------------------|------------------------------|\n");	
	printf("| 5.  Swiss Franc --> CHF			       |  EXCHANGE RATE -- 110.60     |\n");
	printf("|------------------------------------------|------------------------------|\n");
    printf("| 6.  Canadian Dollar --> CAD			   |  EXCHANGE RATE -- 62.76      |\n");
	printf("|------------------------------------------|------------------------------|\n");
    printf("| 7.  United Arab Emirates Dirham --> AED  |  EXCHANGE RATE -- 23.97      |\n");
    printf("|------------------------------------------|------------------------------|\n\n");
    printf("=====================================================================================\n");
    for(;;)
    {
        printf("\nOPTIONS OF CONVERSION :-");
		printf("\n1.KEEPING THE INR AMOUNT SAME");
		printf("\n2.CHANGE THE INR AMOUNT AND CONVERT");
		printf("\n3.EXIT");
		printf("\nENTER THE NUMBER FROM ABOVE 3 OPTIONS :- ");
		scanf("%d",&c);
		printf("\n\n=====================================================================================\n");
		if(c==1)
		{
		    printf("\n\nENTER THE AMOUNT IN INDIAN RUPEES RUPEES (INR) THAT IS TO BE CONVERTED :-₹ ");
            scanf("%f",&inr);
            if(inr==-1)
		    {
                break;
		    }
		    con_amt=inr/84.27;
		    printf("\n\nYOU CAN GET $%.2f IN RETURN OF ₹%.2f \n",con_amt,inr);
		    con_amt=inr/102.61;
        	printf("\n\nYOU CAN GET €%.2f IN RETURN OF ₹%.2f \n",con_amt,inr);
		    con_amt=inr/118.20;
        	printf("\n\nYOU CAN GET £%.2f IN RETURN OF ₹%.2f \n",con_amt,inr);
		    con_amt=inr/0.5845;
        	printf("\n\nYOU CAN GET ¥%.2f IN RETURN OF ₹%.2f \n",con_amt,inr);
        	con_amt=inr/110.60;
        	printf("\n\nYOU CAN GET ₣%.2f IN RETURN OF ₹%.2f \n",con_amt,inr);
        	con_amt=inr/62.76;
        	printf("\n\nYOU CAN GET $%.2f IN RETURN OF ₹%.2f \n",con_amt,inr);
		}
		else if(c==2)
		{
            for(;;)
            {
            printf("\n\n-----ENTER -1 ANYTIME TO EXIT THE APPLICATION-----");
            printf("\n\nENTER THE AMOUNT IN INDIAN RUPEES RUPEES (INR) THAT IS TO BE CONVERTED :-₹ ");
            scanf("%f",&inr);
            if(inr==-1)
		    {
                break;
		    }
            printf("\nPLEASE ENTER THE CURRENCY NUMBER FROM THE LIST YOU WANT TO CONVERT INTO :- ");
            scanf("%d",&b);
            if(b==-1)
            {
                break;
            }
            switch(b)
            {
        	    case 1:
        	            con_amt=inr/84.27;
        	            printf("\n\nYOU CAN GET $%.2f IN RETURN OF ₹%.2f \n",con_amt,inr);
        	            printf("=====================================================================================");
        	            break;
        	    case 2:
        	            con_amt=inr/102.61;
        	            printf("\n\nYOU CAN GET €%.2f IN RETURN OF ₹%.2f \n",con_amt,inr);
        	            printf("=====================================================================================");
        	            break;
        	    case 3:
        	            con_amt=inr/118.20;
        	            printf("\n\nYOU CAN GET £%.2f IN RETURN OF ₹%.2f \n",con_amt,inr);
        	            printf("=====================================================================================");
        	            break;
        	    case 4:
        	            con_amt=inr/0.5845;
        	            printf("\n\nYOU CAN GET ¥%.2f IN RETURN OF ₹%.2f \n",con_amt,inr);
        	            printf("=====================================================================================");
        	            break;
        	    case 5:
        	            con_amt=inr/110.60;
        	            printf("\n\nYOU CAN GET ₣%.2f IN RETURN OF ₹%.2f \n",con_amt,inr);
        	            printf("=====================================================================================");
        	            break;
        	    case 6:
        	            con_amt=inr/62.76;
        	            printf("\n\nYOU CAN GET $%.2f IN RETURN OF ₹%.2f \n",con_amt,inr);
        	            printf("=====================================================================================");
        	            break;
        	    case 7:
        	            con_amt=inr/23.97;
        	            printf("\n\nYOU CAN GET %.2f AED IN RETURN OF ₹%.2f \n",con_amt,inr);
        	            printf("=====================================================================================");
        	            break;
        	 
        	    default:
        	            printf("\nENTER A VALID NUMBER FROM THE ABOVE LIST GIVEN\n");
        	            printf("=====================================================================================");
        	            break;
            }
            }
		}
		else if(c==3)
		{
		    break;
		    printf("\n\n          THANK YOU FOR USING THE APPLICATON");
            printf("\n\n             Your feedback makes us better\n");
		}
		else
		{
		    printf("\nPLEASE ENTER VALID OPTION");
		}
    }
    
    printf("\n=====================================================================================");
    printf("\n\n          THANK YOU FOR USING THE APPLICATON");
    printf("\n\n             Your feedback makes us better\n");
    printf("\n\n=====================================================================================");
    return 0;
}
