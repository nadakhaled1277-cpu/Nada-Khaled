class myQueue {
    
  public:
    int* arr;
    int capacity;
    int size;
    int front;
    int rear;
    myQueue(int n) {
    arr = new int[n] ;
    capacity = 0;
    size = n;
    front = rear = -1;
    }

    bool isEmpty() {
        return (capacity == 0);
    }

    bool isFull() {
        return (capacity == size );
    }

    void enqueue(int x) {
        if (isEmpty())
        front++;
        arr[++rear] = x;
        capacity++;
    }

    void dequeue() {
        front++;
    }

    int getFront() {
        if(!isEmpty())
        return arr[front];
        else
        return -1;
    }

    int getRear() {
        if(!isEmpty())
        return arr[rear];
        else
        return -1;
    }


};
