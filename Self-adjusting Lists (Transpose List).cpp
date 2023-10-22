#include <iostream>

struct Node {
    int data;
    Node* next;
    Node(int value) : data(value), next(nullptr) {}
};

class TransposeList {
public:
    Node* head;
    TransposeList() {
        head = nullptr;
    }

    void insert(int value) {
        Node* newNode = new Node(value);
        newNode->next = head;
        head = newNode;
    }

    bool search(int value) {
        Node* current = head;
        Node* prev = nullptr;
        while (current) {
            if (current->data == value) {
                if (prev) {
                    // Swap the positions of the current element and the previous element.
                    prev->next = current->next;
                    current->next = prev;
                    if (prev == head) {
                        head = current;
                    } else {
                        prev = current;
                    }
                }
                return true;
            }
            prev = current;
            current = current->next;
        }
        return false;
    }

    void display() {
        Node* current = head;
        while (current) {
            std::cout << current->data << " -> ";
            current = current->next;
        }
        std::cout << "nullptr" << std::endl;
    }
};

int main() {
    TransposeList list;
    list.insert(1);
    list.insert(2);
    list.insert(3);
    list.display();

    if (list.search(2)) {
        std::cout << "Found 2" << std::endl;
    } else {
        std::cout << "2 not found" << std::endl;
    }

    list.display();
    return 0;
}