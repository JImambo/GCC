#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int val;
    struct node *left;
    struct node *right;
} node_t;

// Prototypes
void insert(node_t **tree, int val);
void printDFS(node_t *current);

int main() {
    node_t *tree = NULL;

    insert(&tree, 5);
    insert(&tree, 8);
    insert(&tree, 4);
    insert(&tree, 3);

    printDFS(tree);
    printf("\n");

    return 0;
}

void insert(node_t **tree, int val) {
    if (*tree == NULL) {
        *tree = (node_t *)malloc(sizeof(node_t));
        (*tree)->val = val;
        (*tree)->left = NULL;
        (*tree)->right = NULL;
        return;
    }

    if (val < (*tree)->val) {
        insert(&((*tree)->left), val);
    } else {
        insert(&((*tree)->right), val);
    }
}

void printDFS(node_t *current) {
    if (current == NULL)
        return;

    printf("%d ", current->val);         // current
    printDFS(current->left);             // left
    printDFS(current->right);            // right
}

