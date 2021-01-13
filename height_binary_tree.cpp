

int height(struct Node *node)
{
    // code here
    int left = 0, right = 0;
    if (node == NULL)
        return 0;
    else
    {
        left = height(node->left);
        right = height(node->right);
    }
    return (1 + max(left, right));
}

