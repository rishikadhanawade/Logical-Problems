//           *
//         * * *
//       * * * * *
//     * * * * * * *
//   * * * * * * * * *
//     * * * * * * *
//       * * * * *
//         * * *
//           *
#include<stdio.h>
int main()
{
int n=5;
for (int i = 1; i<n ; i++) {   //to get the overlapping row i is taken from 0 to n-1 (i<n)
for (int j = i; j<=n; j++) {
             printf("  "); // decreasing space
          }
          for (int j = 1; j< i; j++) { // increasing 
             printf("* ");
          }
          for (int j = 1; j<=i; j++) { // increasing
              printf("* ");
          }
          printf("\n");
}
    //    p=1;
       for (int i = 1; i<=n ; i++) {

          for (int j = 1; j<=i; j++) { // increasing
             printf("  ");
          }
          for (int j = i; j< n; j++) { // decreasing
              printf("* ");
          }
          for (int j = i; j<=n; j++) { // decreasing
              printf("* ");
          }
          printf("\n");
       }   
}
