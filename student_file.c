#include<stdio.h>

struct Cell {
    int value;
    struct Cell* left;
    struct Cell* right;
};

struct Cell*root=NULL;

void insert_data(int data) {
    struct Cell *tempNode = (struct Cell*) malloc(sizeof(struct Cell));
    struct Cell *actual;
    struct Cell *padre;

    tempNode->value = data;
    tempNode->left = NULL;
    tempNode->right = NULL;

    if(root == NULL) {

        root = tempNode;
        actual = root; //root o tempNode
        padre = root; //root o tempNode

    } else { 
        actual= root;
        padre = NULL;

        while(1) {
            padre = actual;

            if(data < padre -> value) {
                actual = actual -> left;

                if(actual == NULL) {
                    padre -> left = tempNode;
                    return;
                }
            }
            else {
                actual = actual -> right;

                if(actual == NULL)  {
                    padre -> right = tempNode;
                    return;
                }
            }
        }
    }
}

char* bst_fun(char* nodes){



}

int main() {
    int i, n;
    printf("Ingrese la cantidad de numeros: ");
    scanf("%d", &n);
    int N[n];

    printf("Ingrese los numeros : \n");
    for(i=0; i<n;i++){
        scanf("%d", &N[i]);
    }

    for(i=0;i<n;i++) {
        insert_data(N[i]);
    }


    return 0;
}