import java.util.Scanner;
public class circularqueue{
    int array[];
    int rear;
    int front;
    circularqueue(){
        array=new int[5];
        rear=-1;
        front=-1;
    }
    public void add(int ele){
        if(rear==-1){
            rear=front=0;
            array[rear]=ele;
        }
        else if((rear==4 && front ==0)||(front==rear+1)){
            System.out.println("Overflow");
        }
        if(rear==4){
            rear=0;
            array[rear]=ele;
        }
        else{
            rear++;
            array[rear]=ele;
        }

    }
    // public void remove(){
    //     if(front==-1|| front==50){
    //         System.out.println("Overflow");
    //     }
    //     else{
    //         front++;
    //     }
    // }
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
        circularqueue Q=new circularqueue();
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
    
            // else if(ch==2){
            //     Q.remove();
            // }

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