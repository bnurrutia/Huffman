#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int weight;
    struct Node *left, *right;
    int is_leaf;
    char symbol;      
} Node;

Node *node_new(int weight) {
    Node *n = malloc(sizeof(Node));
    n->weight = weight;
    n->left = NULL;
    n->right = NULL;
    n->is_leaf = 0;
    n->symbol = 0;
    return n;
}

Node *leaf_new(char symbol, int weight) {
    Node *n = node_new(weight);
    n->is_leaf = 1;
    n->symbol = symbol;
    return n;
}

#include <stdio.h>

int main(void)
{
    printf("hello\n");
    return 0;
}