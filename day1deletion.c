delete()
{
    int n;
    if(front>rear)
    {
        printf("queue underflow\n"); //cheak if the queue is empty(underflow condition)
    }
    else{
        n= queue[front];
        front++;
        printf("delete element is %d", n);
    }
}
