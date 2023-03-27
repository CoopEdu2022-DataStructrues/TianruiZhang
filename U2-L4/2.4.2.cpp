#ifndef LINKEDQUEUE_H
#define LINKEDQUEUE_H

template <class T>
struct Node {
    T data;
    Node<T> *next;
};

template <class T>
struct Queue {
    Node<T> *front;
    Node<T> *back;
};

template <class T>
Queue<T> *InitQueue() {
    Queue<T> *Q = new Queue<T>;
    Q->front = new Node<T>;
    Q->back = Q->front;
    return Q;
}

// template <class T> bool isFull(Queue<T> *Q);

template <class T>
bool Enqueue(Queue<T> *Q, T x) {
    Node<T> *p = new Node<T>;
    p->data = x;
    Q->back->next = p;
    return true;
}

template <class T>
T Back(Queue<T> *Q) {
    return Q->back->data;
}

template <class T>
bool isEmpty(Queue<T> *Q) {
    return (Q->front == nullptr);
}

template <class T>
bool Dequeue(Queue<T> *Q) {
    if (isEmpty(Q)) return false;
    Node<T> *tmp = Q->front;
    if (Q->front == Q->back) {
        Q->front = Q->back = nullptr;
    } else {
        Q->front = Q->front->next;
    }
    delete tmp;
    return true;
}

template <class T>
T Front(Queue<T> *Q) {
    return Q->front->data;
}

#endif