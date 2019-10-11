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
    addNode(int data,Node n){
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

class addNode{

}
