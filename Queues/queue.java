import java.util.Scanner;
public class queue{
    int array[];
    int rear;
    int front;
    queue(){
        array=new int[50];
        rear=-1;
        front=-1;
    }
    public void add(int ele){
        if(rear==-1){
            rear=front=0;
            array[rear]=ele;
        }
        else if(rear==49){
            System.out.println("Overflow");
        }
        else{
            rear++;
            array[rear]=ele;
        }
    }
    public void remove(){
        if(front==-1|| front==50){
            System.out.println("Overflow");
        }
        else{
            front++;
        }
    }
    public void display(){
        for(int i=front;i<=rear;i++){
            System.out.println(array[i]);
        }
    }
} 
class driverClass{
    public static void main(String args[]){
        int val;
        Scanner sc= new Scanner(System.in); 
        int rep=1;
        int ch;
        queue Q=new queue();
        while(rep==1){

            System.out.println("Select Choice Accordingly :) ");
            System.out.println("1.Add Element");
            System.out.println("2.Delete Element");
            System.out.println("3.Display Queue");

            ch=sc.nextInt();
            if(ch==1){
                System.out.println("Enter value");
                val=sc.nextInt();
                Q.add(val);
            }
    
            else if(ch==2){
                Q.remove();
            }

            else if(ch==3){
                Q.display();
            }

            else 
                System.out.println("Wrong Choice.Aborting...");
            
        System.out.println("Do you want to continue? Press 1.");
         rep=sc.nextInt();
        } 
     
    }
}