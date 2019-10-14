import java .util.Scanner;
public class driverClass{
    public static void main(String args[]){
        int val;
        Scanner sc =new Scanner(System.in);
        val=sc.nextInt();
        tree T=new tree(val);
    }
}
class tree{
    Node rootNode;
    tree(int rootData){
        rootNode=new Node(rootData,null,null); 
    }
    void addNode(int data,Node n){
        if(n.data>data){
            if(n.leftNode!=null){
                addNode(data,n.leftNode);
            }
            else
            n.leftNode=new Node(data,null,null);
        }
        else{
            if(n.rightNode!=null){
                addNode(data,n.rightNode);
            }
            else{
                n.rightNode=new Node(data,null,null);
            }
        }
    }
    void display(Node n){
        if(n.leftNode!=null){
            display(n.leftNode);
        }
        else{
            System.out.println(n.data);
            display(n.rightNode);
        }  
    }
}
class Node{
    int data;
    Node leftNode;
    Node rightNode;
    
    Node(int data, Node leftNode, Node rightNode){
        data=this.data;
        leftNode=this.leftNode;
        rightNode=this.rightNode;
    }
   
}

