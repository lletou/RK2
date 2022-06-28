#include <iostream>
#include <random>

using namespace std;

struct Tree {
    int value = 0;
    struct Tree *p = nullptr;
    struct Tree *l = nullptr;
    struct Tree *r = nullptr;
};


void le(int value, Tree *pTree) {
    pTree->l = new Tree;
    pTree->l->value = value;
    pTree->l->p = pTree;
}

void ri(int value, Tree *pTree) {
    pTree->r = new Tree;
    pTree->r->value = value;
    pTree->r->p = pTree;
}


void obhod(Tree *tree, vector<int> &out) {
    if (tree == nullptr) return;
    out.push_back(tree->value);
    obhod(tree->l,out);
    obhod(tree->r,out);

}




