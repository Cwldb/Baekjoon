#include <iostream>
using namespace std;

char leftChild[26];
char rightChild[26];

void preorder(char node)
{
    if (node == '.') return;
    cout << node;
    preorder(leftChild[node - 'A']);
    preorder(rightChild[node - 'A']);
}

void inorder(char node)
{
    if (node == '.') return;
    inorder(leftChild[node - 'A']);
    cout << node;
    inorder(rightChild[node - 'A']);
}

void postorder(char node)
{
    if (node == '.') return;
    postorder(leftChild[node - 'A']);
    postorder(rightChild[node - 'A']);
    cout << node;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        char parent, left, right;
        cin >> parent >> left >> right;
        leftChild[parent - 'A'] = left;
        rightChild[parent - 'A'] = right;
    }

    preorder('A');
    cout << '\n';
    inorder('A');
    cout << '\n';
    postorder('A');
    cout << '\n';
}
