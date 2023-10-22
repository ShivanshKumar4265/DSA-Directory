#include <iostream>

struct Node {
    int data;
    Node* next;
};

class CircularLinkedList {
public:
    Node* head;
    CircularLinkedList() {
        head = nullptr;
    }

    void append(int value) {
        Node* newNode = new Node{value, nullptr};
        if (!head) {
            head = newNode;
            head->next = head; // Circular reference to itself
        } else {
            Node* current = head;
            while (current->next != head) {
                current = current->next;
            }
            current->next = newNode;
            newNode->next = head;
        }
    }

    void display() {
        Node* current = head;
        if (!current) {
            std::cout << "nullptr" << std::endl;
            return;
        }
        do {
            std::cout << current->data << " -> ";
            current = current->next;
        } while (current != head);
        std::cout << "nullptr" << std::endl;
    }
};

int main() {
    CircularLinkedList list;
    list.append(1);
    list.append(2);
    list.append(3);
    list.display();
    return 0;
}