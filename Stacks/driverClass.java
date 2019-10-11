import java.util.Scanner;
class stackPush{
    int stack[];
    private int top;
    stackPush(){
        stack=new int[50];
        top=-1;
    }
    void push(int ele){
        if(top==49) 
            System.out.println("Overflow");
        else{
            top++;
            stack[top]=ele;
        }
    }
    void pop(){
        if(top==-1) System.out.println("Empty stack, Underflow");
        else{
            top--;
        }
    }
     void display(){
        if(top==-1) System.out.println("Empty stack");
        for(int i=top;i>=0;i--){
            System.out.println(stack[i]);
        }
    }
}

 public class driverClass{
    
    public static void main(String args[]){
        int val;
        Scanner sc= new Scanner(System.in); 
        int rep=1;
        int ch;
        stackPush S = new stackPush(); 
        while(rep==1){

            System.out.println("Select Choice Accordingly :) ");
            System.out.println("1.Push Element");
            System.out.println("2.Pop Element");
            System.out.println("3.Display Stack");

            ch=sc.nextInt();
            if(ch==1){
                System.out.println("Enter value");
                val=sc.nextInt();
                S.push(val);
            }
    
            else if(ch==2){
                S.pop();
            }

            else if(ch==3){
                S.display();
            }

            else 
                System.out.println("Wrong Choice.Aborting...");
            
        System.out.println("Do you want to continue? Press 1.");
         rep=sc.nextInt();
        } 
     
    }
}
