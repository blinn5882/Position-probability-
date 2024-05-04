#include <stdio.h>
#define N 37
#define m 12
int main()
{
	int a ,b ,c,d,e,f,g,i , j,k ,pos,temp ,avposition, differpos ;
	int sum = 0;
	int sum1 = 0 ;
	int temp1=0;
    int wheel[] = {0,32,15,19,4,21,2,25,17,34,6,27,13,36,11,30,8,23,10,5,24,16,33,1,20,14,31,9,22,18,29,7,28,12,35,3,26} ;
    
    int out[100] ,posarray[m] ,arrange[100] ,differ[100] ;
    
    	for( i =0 ; i< m; i++){
    		
    	printf("\nEnter last %d number : ",m-i) ;
    	scanf("%d", &out[i]) ;
    		}
    		
    	
    	for(j=0 ; j<m ; j++){
    		
    		 a = out[m-1-j];
    		
    		
    		
    		for(i=0 ; i<N; i++){
    			
    			if(wheel[i]== a){
    				
    				pos = i ;	
    				
    			
    				
    				}	
    				}
    				
    		posarray[(m-1)-j] = pos ;
    								
    	    while(pos)
         {
    	
         
           temp = wheel[0];
            
            for(i = 0; i < N - 1; i++)
    	
            wheel[i] = wheel[i + 1];
            
            wheel[N - 1] = temp;
             
            pos--;	
         	
          }
          
    	for(i=0;i<N;i++){
    		
    		printf(" %d",wheel[i]) ;
    		}
    	 printf("\n\n");
    
          
    }
       
    
        for(i=0;i<m;i++){
    	
    	printf(" %d",posarray[i]);
    	}
   
    	while(1) {
    		
    		 	
    printf("\n\n Enter last out : ");
    scanf("%d",&b) ;
    
            for(j=0 ; j<N ; j++){
    			
    			if(wheel[j]== b){
    				
    				pos = j ;	
    				
    				posarray[m-1] = pos ;
    				
    		temp = posarray[m - 1];
            
            for(i = m - 1; i > 0; i--)
            
            posarray[i] = posarray[i - 1];
            
            posarray[0] = temp;
    				
    				}
    				}
    				
    				printf("\n\n");
    				for(i=0 ;i<m;i++){
    					
    			printf(" %d",posarray[i]);}
    	
    				
    		while(pos)
         {
    	
         
           temp = wheel[0];
            
            for(i = 0; i < N - 1; i++)
    	
            wheel[i] = wheel[i + 1];
            
            wheel[N - 1] = temp;
             
            pos--;	
         	
          }
          printf("\n\n");
       
          	for(i=0;i<N;i++){
    		
    		printf(" %d",wheel[i]) ;
    		}
    	  
    	
    for( k =0 ; k<m-1 ; k++){
    		
    if(posarray[m-(k+1)] >= posarray[m-(k+2)]){
    	
    differ[m-(k+2)] = posarray[m-(k+1)] - posarray[m-(k+2)] ;}
    		
    	
  if(posarray[m-(k+1)] <= posarray[m-(k+2)]){
   
   	differ[m-(k+2)]= posarray[m-(k+2)] - posarray[m-(k+1)] ;}
   		
    }	
      	
      	printf("\n\nposition differ value =>") ;
      	for(i=0 ; i<m-1 ;i++){
      		
      	printf(" %d",differ[i]) ;}
      	
      	for(i=0 ; i<m-1 ;i++){
      		
      		sum1 = sum1 + differ[i] ;
      		
      		}
      		
      		differpos = sum1 / m-1 ;
      		
      printf("\n\ndifferpos = %d", differpos) ;
      		      	
         for(i=0 ;i<m;i++){
         	
            sum = sum + posarray[i] ;
         	
         	}
        
         	
         	avposition = sum / m ;
         	
       printf("\n\navposition = %d", avposition);
  
         	
              sum = 0 ;  
              sum1= 0 ; 	 
         
  	printf("\n\nlast out => %d",wheel[0]);
     
  		
  		arrange[0] = wheel[1] ;
  		
  		arrange[1] = wheel[2] ;
  		
  		arrange[2] = wheel[3] ;
  		
  		arrange[3] = wheel[36] ;
  		
  		arrange[4] = wheel[35] ;
  		
  		arrange[5] = wheel[34] ;
       	
         	
    	for (e = 0; e < 6; e++) {     
       for (f = e+1; f < 6; f++) {     
          if(arrange[e] > arrange[f]) {    
              temp = arrange[e];    
               arrange[e] = arrange[f];    
              arrange[f] = temp;    
           }
           }
           }   
            			
    
    printf("\n\n\n\n");
           
    printf("1 dozen => ") ;       
    
    for(g =0 ; g<6 ;g++)
    	
           
    	if(arrange[g] <= 12){
    		
    	printf(" %d",arrange[g]) ;
    	
    	}
    
    printf("\n\n") ;
    
    printf("2 dozen => ") ;  	
    	
    	
    for(g =0 ; g<6 ;g++)
    		
    if(arrange[g] > 12 & arrange[g] <= 24){
    		
    		printf(" %d",arrange[g]) ;
    	
        }
        
    printf("\n\n") ;
        
    printf("3 dozen => ") ;
    	
    for(g =0 ; g<6 ;g++)    
        
    if(arrange[g] >24 & arrange[g] <=36){
        	
       printf(" %d",arrange[g]) ;
        	
        }
       
        
 printf("\n\navdifferent => %d",wheel[differpos]);
  
 printf("\n\navsum => %d",wheel[avposition]); 
  

    
    
    
    }	
    
    		
    }		
