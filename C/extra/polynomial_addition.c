#include<stdio.h>
struct poly {
 int coefficient;
 int exponent;
};
struct poly p1[10], p2[10], p3[10];
int read_poly(struct poly []);
int add_poly(struct poly[], struct poly[], int, int, struct poly[]);
void display_poly(struct poly[], int n);
void main() {
 int n1, n2, n3;
 n1 = read_poly(p1);
 printf("The first polynomial is: ");
display_poly(p1, n1);
 n2 = read_poly(p2);
 printf("The second polynomial is: ");
 display_poly(p2, n2);
 n3 = add_poly(p1, p2, n1, n2, p3);
 printf("\nThe addition of polynomials is: ");
 display_poly(p3, n3);
 printf("\n");
}
int read_poly(struct poly p[10]) {
 int n;
 printf("\nEnter the total number of terms in the polynomial: ");
 scanf("%d",&n);
 printf("\nEnter the coefficients and exponents: ");
 for(int i=0;i<n;i++) {
 printf("\nEnter the coefficient: ");
 scanf("%d",&p[i].coefficient);
 printf("Enter the exponent: ");
 scanf("%d",&p[i].exponent);
 }
 return n;
}
int add_poly(struct poly p1[10], struct poly p2[10], int n1, int n2, struct poly p3[10]) {
 int i,j,k;
 i=0;
 j=0;
 k=0;
 while(i<n1 && j<n2) {
 if(p1[i].exponent == p2[j].exponent) {
 p3[k].coefficient = p1[i].coefficient + p2[j].coefficient;
 p3[k].exponent = p1[i].exponent;
i++;
 j++;
 k++;
 } else if(p1[i].exponent > p2[j].exponent) {
 p3[k].coefficient = p1[i].coefficient;
 p3[k].exponent = p1[i].exponent;
 i++;
 k++;
 } else {
 p3[k].coefficient = p2[j].coefficient;
 p3[k].exponent = p2[j].exponent;
 j++;
 k++;
 }
 }
 while(i<n1) {
 p3[k].coefficient = p1[i].coefficient;
 p3[k].exponent = p1[i].exponent;
 i++;
 k++;
 }
 while(j<n2) {
 p3[k].coefficient = p2[j].coefficient;
 p3[k].exponent = p2[j].exponent;
 j++;
 k++;
 }
 return k;
}
void display_poly(struct poly p[10], int n) {
 for(int k=0;k<n-1;k++) {
 printf("%d(x^%d)+", p[k].coefficient, p[k].exponent);
 }
printf("%d(x^%d)", p[n-1].coefficient, p[n-1].exponent);
}
