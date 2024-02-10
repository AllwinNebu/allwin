#include <stdio.h>
#include <ctype.h>
char stack[100];
int top = -1;
void push(char item) {
 if(top >= 99) {
 printf("Stack overflow!");
 } else {
 stack[++top] = item;
 }
}
char pop() {
 if(top == -1) {
 printf("Stack underflow!");
 } else {
 char item = stack[top];
 top--;
 return item;
 }
}
int precedence(char x) { 
 if(x == '^') {
return 3;
}
else if(x == '*' || x == '/') {
return 2;
}
else if(x == '+' || x == '-') {
return 1;
}
else {
return 0;
}
}
void infix_postfix(char infix[]) {
 char postfix[100], character, item;
 int i=0,j=0;
 push('#');
 while((character=infix[i++]) != '\0') {
 if(character == '(') {
 push(character);
 }
 else if(isalnum(character)) {
 postfix[j++]=character;
 } 
else if(character == ')') {
 while( stack[top] != '(') {
 postfix[j++]=pop();
 }
 item=pop(); 
 }
 else { 
 while(precedence(stack[top]) >= precedence(character)) {
 postfix[j++]=pop();
 }
 push(character);
 }
 }
 while(stack[top] != '#') {
 postfix[j++]=pop();
 } 
 postfix[j]='\0';
 printf("\nThe Postfix expression: %s",postfix);
}
void main() {
 char infix[100], postfix[100];
 printf("Enter the Infix Expression: ");
 scanf("%s",infix);
 infix_postfix(infix);
}
