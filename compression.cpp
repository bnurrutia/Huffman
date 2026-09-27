#include <iostream>


class Node
{
    public:
    int weight;
    Node *left, *right;

    explicit Node(int weight):
        weight(weight),
        left(nullptr),
        right(nullptr) {};
};

class Leaf_node : public Node
{
    char symbol;
};


int main()
{
	return 0;
}

// Objetive is to zip (encode) and unzip (decode) .txt
// Huffman Coding ALgorithm
// We count how often each character existing in the file appears
// We create a leaf node for each character
// Priority queue where the node with lowest probability is given highest priority


// While there is more than one node in the queue:
    // Remove the two nodes of lowest probability
    // Create a new internal node with these two nodes as children and with probability equal to the sum of the two nodes
    // Add the new node to the queue.
// The remaining node is the root node and the tree is complete.

// Concurrent Parallel Processing

