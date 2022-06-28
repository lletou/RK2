#include "../tree.cpp"
#include "gtest/gtest.h"

using namespace std;



TEST(Tree, EmptyTree) {
    vector<int> out_expect = {0};
    vector<int> out;
    Tree *tree = new Tree{};
    obhod(tree, out);
    EXPECT_EQ(out_expect, out);
}


TEST(Tree, onlyoneelement) {
    vector<int> out_expect = {0,1};
    vector<int> out;
    Tree *tree = new Tree{};
    ri(1, tree);
    obhod(tree, out);
    EXPECT_EQ(out_expect, out);
}

TEST(Tree, FullTree) {
    vector<int> out;

    vector<int> out_expect = {56, 12, 43, 204, 1037, 12, -43, 185, 543, -1, 98};

    Tree *tree = new Tree{56, nullptr, nullptr};

    le(12, tree);
    ri(543, tree);

    le(-1, tree->r);
    ri(98, tree->r);

    le(43, tree->l);
    ri(12, tree->l);

    le(-43, tree->l->r);
    ri(185, tree->l->r);

    le(204, tree->l->l);
    ri(1037, tree->l->l);

    obhod(tree, out);
    EXPECT_EQ(out_expect, out);

}
