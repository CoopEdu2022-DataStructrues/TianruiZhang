#ifndef SEQUENTIALQUEUE_H
#define SEQUENTIALQUEUE_H

template <class T>
struct Queue {
    T *data;
    int front, back;
    int max_size;
};

template <class T>
Queue<T> *InitQueue(int max_size) {
    Queue<T> *Q = new Queue<T>;
    Q->data = new T[max_size];
    Q->front = Q->back = 0;
    Q->max_size = max_size;
    return Q;
}

template <class T>
bool isFull(Queue<T> *Q) {
    return ((Q->back + 1) % Q->max_size == Q->front);
}

template <class T>
bool Enqueue(Queue<T> *Q, T x) {
    if (isFull(Q)) return false;
    Q->back = (Q->back + 1) % Q->max_size;
    Q->data[Q->back] = x;
    return true;
}

template <class T>
T Back(Queue<T> *Q) {
    return Q->data[Q->back];
}

template <class T>
bool isEmpty(Queue<T> *Q) {
    return (Q->front == Q->back);
}

template <class T>
bool Dequeue(Queue<T> *Q) {
    if (isEmpty(Q)) return false;
    Q->front = (Q->front + 1) % Q->max_size;
}

template <class T>
T Front(Queue<T> *Q) {
    return Q->data[Q->front];
}

#endif