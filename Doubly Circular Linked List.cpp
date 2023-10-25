#include <iostream>

struct Node {
    int data;
    Node* next;
    Node* prev;
};

class DoublyCircularLinkedList {
public:
    Node* head;
    DoublyCircularLinkedList() {
        head = nullptr;
    }

    void append(int value) {
        Node* newNode = new Node{value, nullptr, nullptr};
        if (!head) {
            head = newNode;
            head->next = head;
            head->prev = head;
        } else {
            Node* current = head;
            while (current->next != head) {
                current = current->next;
            }
            current->next = newNode;
            newNode->prev = current;
            newNode->next = head;
            head->prev = newNode;
        }
    }

    void display() {
        Node* current = head;
        if (!current) {
            std::cout << "nullptr" << std::endl;
            return;
        }
        do {
            std::cout << current->data << " <-> ";
            current = current->next;
        } while (current != head);
        std::cout << "nullptr" << std::endl;
    }
};

int main() {
    DoublyCircularLinkedList list;
    list.append(1);
    list.append(2);
    list.append(3);
    list.display();
    return 0;
}