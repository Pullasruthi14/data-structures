#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE 100

int stack[MAX_SIZE];
int top = -1;

void push(int x) {
    if (top == MAX_SIZE - 1) {
        printf("Error: Stack overflow\n");
        return;
    }
    top++;
    stack[top] = x;
}

void pop() {
    if (top == -1) {
        printf("Error: Stack underflow\n");
        return;
    }
    top--;
}

int peek() {
    if (top == -1) {
        printf("Error: Stack is empty\n");
        return -1;
    }
    return stack[top];
}

int is_operand(char c) {
    return (c >= '0' && c <= '9');
}

int precedence(char c) {
    switch (c) {
        case '+':
        case '-':
            return 1;
        case '*':
        case '/':
            return 2;
        case '^':
            return 3;
    }
    return -1;
}

void infix_to_postfix(char* infix) {
    int n = strlen(infix);
    char postfix[n];
    int j = 0;

    for (int i = 0; i < n; i++) {
        if (is_operand(infix[i])) {
            postfix[j++] = infix[i];
        }
        else if (infix[i] == '(') {
            push(infix[i]);
        }
        else if (infix[i] == ')') {
            while (peek() != '(') {
                postfix[j++] = peek();
                pop();
            }
            pop();
        }
        else {
            while (precedence(infix[i]) <= precedence(peek())) {
                postfix[j++] = peek();
                pop();
            }
            push(infix[i]);
        }
    }

    while (top != -1) {
        postfix[j++] = peek();
        pop();
    }

    postfix[j] = '\0';
    printf("Postfix notation: %s\n", postfix);
}

int main() {
    char infix[MAX_SIZE];
    printf("Enter an infix notation: ");
    scanf("%s", infix);
    infix_to_postfix(infix);
    return 0;
}


