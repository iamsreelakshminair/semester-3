#include<stdlib.h>	
#include<stdio.h>
void main()
 {
   int a[1000000],e,i,first,z,last,mid,ch,n,temp,d,c,position,t,fc;
   printf("Enter no of terms");
   scanf("%d",&n);
   printf("\nenter the elements");
   for(i=0;i<n;i++)
    {
     scanf("%d",&a[i]);
    }
   do
     {
      printf("\n1.Bubble sort\n 2.Insertion sort\n 3.Selection sort\n 4.quick sort\n 5.merge sort\n 6.exit\n");
      scanf("%d",&ch);
      switch(ch)
        {
          case 4:
{
 
  printf("Enter a number to be searched using linear search\n");
  scanf("%d", &e);
 
  for (c = 0; c < n; c++)
  {
    if (a[c] == e)    
    {
      printf("Element is present");
      break;
    }
  }
  if (c == n)
    printf("Element is not present" );
                      
                       
                      
                      break;
}                          
         case 5:{
                  printf("Enter element to be searched using binary search");
                  scanf("%d",&e);
                  first = 0;
                  last = n - 1;
                  mid = (first+last)/2;
 
                 while (first <= last) {
      if (a[mid] < e)
         first = mid + 1;    
      else if (a[mid] == e) {
         printf("Element found \n");
         break;
      }
      else
         last = mid - 1;
 
      mid = (first + last)/2;
   }
   if (first > last)
      printf("Not present");
 
 
     

break;
}
 
 
 case 1:{
 
  for (c = 0 ; c < n - 1; c++)
  {
    
    for (d = 0 ; d < n - c - 1; d++)
    {
      if (a[d] > a[d+1]) 
      {
        temp       = a[d];
        a[d]   = a[d+1];
        a[d+1] = temp;
        
      }

 

    }
      
      for (z = 0; z < n; z++)
     printf("%d\t", a[z]);
 
  }
 printf("\n");
 
  printf("Sorted list :");
 
  for (c = 0; c < n; c++)
     printf("%d\t", a[c]);
 
        }
      break;
  case 2: {
            for (c = 1 ; c <= n - 1; c++) 
            {

    d = c;
 
    while ( d > 0 && a[d-1] > a[d]) {
      temp=a[d];
      a[d]   = a[d-1];
      a[d-1] = temp;
 
      d--;
    }
   for (z = 0; z < n; z++)
     printf("%d\t", a[z]);
 
  }
  printf("\n");
 
  printf("Sorted list :");
 
  for (c = 0; c <= n - 1; c++) {
    printf("%d\t", a[c]);
  }
 
  
}
 break;
 case 6:exit(0);
 case 3: {
          for (c = 0; c < (n - 1); c++)
  {
    position = c;
   
    for (d = c + 1; d < n; d++)
    {
      if (a[position] > a[d])
        position = d;
    }
    if (position != c)
    {
      temp = a[c];
      a[c] = a[position];
      a[position] = temp;
    }
   for (z = 0; z < n; z++)
     printf("%d\t", a[z]);
  }
  printf("\n");
  printf("sorted list:");
 
  for (c = 0; c < n; c++)
    printf("%d\t", a[c]);
 
  
}
break;

printf("Do you want to continue? 1.Yes 2.No");
scanf("%d",&fc);
}
}while(fc!=1);
}
