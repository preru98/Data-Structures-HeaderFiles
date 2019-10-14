public class queue{
    int array[];
    int rear;
    // int front;
    queue(){
        array=new int[50];
        rear=-1;
        // front=-1;
    }
    public void add(int ele){
        // if(rear==-1){
        //     rear=front=0;
        //     array[rear]=ele;
        // }
        // else 
        if(rear==49){
            System.out.println("Overflow");
        }
        else{
            rear++;
            array[rear]=ele;
        }
    }
    public void display(){
        for(int i=0;i<=rear;i++){
            System.out.println(array[i]);
        }
    }
} 
class driverClass{
    public static void main(String args[]){
        queue Q=new queue();
        Q.add(10);
        Q.add(20);
        Q.add(30);
        Q.display();

    }
}