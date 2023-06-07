#include<stdio.h>

int main(){
	
	int c;
	
	
	printf("Welcome to Indian bus services bus booking :\n");
	
	
	
	
	printf("1.shri padmavati travels \n");
	printf("2.new patel travels chhapi \n\n");
	
	scanf("%d",&c);
	
	
			switch(c){
				case 1:
					printf("1.watar to pune bus \n");
					printf("2.petnaka to mumbai bus \n");
					printf("3.kolhapur to thane bus \n");
					printf("4.karad to mumbai bus\n");
					
					    scanf("%d",&c);
					    switch(c){
					    	
					    	case 1:
					    		printf("110Rs");
					    		break;
					    		
					    	case 2:
					    		printf("350Rs");
					    		break;
					    		
					    	case 3:
					    		printf("125Rs");
					    		break;
					    		
					    	case 4:
					    		printf("350Rs");
					    		break;
					    		
					    		
					    	
						}
						
			}
	
			
			
			
				
				printf("New patel travels chhapi\n");
				scanf("%d",&c);
			switch(c){
				case 1:
					printf("1.surat to baroda bus\n");
					printf("2.Ahmedabad to mumbai bus\n");
					printf("3.vadodara to ahmedabad bus\n");
					printf("4.ahmedabad to palanpur bus\n");
					printf("5.surat to vadodara bus\n");
					printf("6.palanpur to ahmrdabad bus\n");
					
					scanf("%d",&c);
					switch(c){
						
						case 1:
							printf("300Rs");
							break;
							
						case 2:
							printf("1050Rs");
							break;
							
						case 3:
							printf("150Rs");
							break;
							
						case 4:
							printf("181Rs");
							break;
							
						case 5:
							printf("200Rs");
							break;
							
						case 6:
							printf("114Rs");
							break;
					}
			}
	
	
	return 0;
}
